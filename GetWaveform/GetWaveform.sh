INPUT_FILE=$1
OUTPUT_FILE=$2

RAWD_PRODUCER="digitfilter"
RUN=1
MIN_EVENT=1
MAX_EVENT=1
NTICKS=6400
MIN_CHANNEL=$3
MAX_CHANNEL=$4

if [ -z "$4" ]
then
    MAX_CHANNEL=$3
fi

make all
./GetWaveform "$INPUT_FILE" "$OUTPUT_FILE" "$RAWD_PRODUCER" "$RUN" "$MIN_EVENT" "$MAX_EVENT" "$MIN_CHANNEL" "$MAX_CHANNEL" "$NTICKS"

rm GetWaveform
