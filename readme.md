RFC 6901 'JSON Pointer' (https://tools.ietf.org/html/rfc6901) implementation for cJSON parser (https://github.com/DaveGamble/cJSON)

Program language: C

version: 1.0.0

limitation: parts number in the json pointer is no more than 64

To test:

uncomment main() function in cjsonpointer.c and build

build: 

gcc -I ./cJSON/ cjsonpointer.c ./cJSON/cJSON.c
