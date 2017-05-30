INPUT_FILE=$1
OUTPUT_FILE=$2

RAWD_PRODUCER="wcNoiseFilter"
RUN=1
EVENT=1
CHANNEL=$3

/uboone/app/users/alister1/tools/GetWaveform/make
/uboone/app/users/alister1/tools/GetWaveform/./GetWaveform "$INPUT_FILE" "$OUTPUT_FILE" "$RAWD_PRODUCER" "$RUN" "$EVENT" "$CHANNEL"

rm /uboone/app/users/alister1/tools/GetWaveform/GetWaveform
