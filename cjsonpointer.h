// cjsonpointer.h
// C-language RFC 6901 JSON pointer implementation for cJSON parser
#ifndef __CJSONPOINTER_H__
#define __CJSONPOINTER_H__

const cJSON *SimpleJsonPointer(const cJSON *json, const char *pointer);

#endif // #ifndef __CJSONPOINTER_H__