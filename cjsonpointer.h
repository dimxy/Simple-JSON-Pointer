// @author: dimxy
// cjsonpointer.h
// C-language RFC 6901 JSON pointer implementation for cJSON parser
#ifndef __CJSONPOINTER_H__
#define __CJSONPOINTER_H__

#include <cJSON.h>

#define CJP_ERRMSGLENGTH 128
const cJSON *SimpleJsonPointer(const cJSON *json, const char *pointer, char errorstr[]);

#endif // #ifndef __CJSONPOINTER_H__