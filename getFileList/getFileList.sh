#!/bin/bash

## Adam Lister (a.lister1@lancaster.ac.uk)

usage() { printf "This script takes an input sam definition, prestages a selected number of files and returns a list of files to the user. \nUsage is ./getFileList <options> with \n -i: input SAM definition \n -n: number of files \n -o: output file list \n"; exit 1; }

## setup variables
export i=-1
export o=-1
export n=-1

while getopts ":i:n:o:" opt; do
  case "${opt}" in 
    i)
      i=${OPTARG}
      ;;
    n)
      n=${OPTARG}
      ;;
    o)o=${OPTARG}
      ;;
    *)
      usage
      ;;
  esac
done
shift $((OPTIND -1))

## remove output list
rm $o

if [ $o == -1 ] || [ $i == -1 ] || [ $n == -1 ]  
then
  usage
fi

echo " "
echo "CREATING FILE LIST USING"
echo ">> Input definition name: " ${i}
echo ">> Output file: " ${o}
echo ">> Number of files: " ${n}

export time_stamp=`date +%s`
export creation_time=`date "+%y%m%d%H%M%S"`
export project_name=${USER}"_"${i}"_"${n}"files_"$creation_time
export tmp_filegrab=temp_filegrab_"${time_stamp}".list
export output_filename=${o}

echo " "
echo "Creating project with name: " $project_name

samweb prestage-dataset --defname=${i} --max-files ${n} --name=$project_name
samweb list-files "project_name ${project_name}" >> $tmp_filegrab

cat $tmp_filegrab | while read line; 
do
  export tmp_filename=`samweb locate-file "$line"`
  tmp_filename=${tmp_filename%(*}
  tmp_filename=${tmp_filename##*:}
  echo $tmp_filename"/"$line >> $output_filename
done

rm $tmp_filegrab
