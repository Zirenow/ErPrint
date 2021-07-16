#pragma once
#define RED			"\x1b[31m"
#define YELLOW		"\x1b[33m"
#define COLOR_RESET "\x1b[0m"
#define NONE		"null"

typedef const char* text;
void EP_Log(text msg);

void EP_Error(text msg, text details);

void EP_Warning(text msg);
