RFC 6901 'JSON Pointer' (https://tools.ietf.org/html/rfc6901) implementation for cJSON parser (https://github.com/DaveGamble/cJSON)

Author: dimxy@komodoplatform.com

Program language: C

version: 1.0.0

limitation: the depth in the json pointer is no more than 64 faucets

To test:<br>
    uncomment main() function in cjsonpointer.c and build

To build:<br> 
    `gcc -I ./cJSON/ cjsonpointer.c ./cJSON/cJSON.c`
