
RFC 6901 'JSON Pointer' (https://tools.ietf.org/html/rfc6901) implementation for cJSON parser (https://github.com/DaveGamble/cJSON)

Program lang: C

version: 1.0.0

To test:
uncomment main() function in cjsonpointer.c

build: gcc -I ./cjson/ cjsonpointer.c ./cjson/cJSON.c
