### configuration

INPUT_FILE=$1
OUTPUT_FILE=$2
EVENT=$3

HIT_PRODUCER="gaushit"

usage() { printf "\nBash script which produces an event display-like image for use in presenations and documents.\nOptions may be configured in produceEventDisplay.sh bash file.\n\nUsage is ./GEVD <input_file> <output_file> <event_number>\n\n"; exit 1; }


### if no args provided, print usage

if [ $# -eq 0 ];
then 
    usage
    exit 1
fi


### if help tag is called, print usage

while getopts ":h" opt; do
    case "${opt}" in
        h) 
            usage
            ;;
    esac
exit 1;
done
shift $((OPTIND-1))


make all
./hitcomparer "$INPUT_FILE" "$OUTPUT_FILE" "$EVENT" "$HIT_PRODUCER"
