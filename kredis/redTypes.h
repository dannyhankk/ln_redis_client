#ifndef _RED_TYPE_
#define _RED_TYPE_

#include <string>
#include <stdio.h>
#include <iostream>
#include <stdint.h>

namespace rcl{

	const char *redis_termianl = "\r\n";
	typedef enum
	{
		redis_String,
		redis_Integer,
		redis_Array,
		redis_BulkString,
		redis_Error,
		redis_Null,
	} redis_type;

	const char string_idt = '+';
	const char integer_idt = ':';
	const char array_idt = '*';
	const char bulkstring_idt = '$';
	const char error_idt = '-';

	typedef struct
	{
		redis_type msg_type;
		std::string msg_string;
		uint64_t msg_integer;
		redis_msg *msg_array;
		std::string msg_error;
		std::string *bulkstring;	
	} redis_msg;

	redis_type getMSGType(char cType)
	{
		switch (cType)
		{
		case '+': return redis_String;
		case ':': return redis_Integer;
		case '*': return redis_Array;
		case '$': return redis_BulkString;
		case '-': return redis_Error;
		default:  return redis_Null;
		}				
	}
}

#endif