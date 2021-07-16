#include <stdio.h>
#include "CLog.h"

void CL_Log(text msg)
{
	printf("[LOG] %s \n",msg);
}

void CL_Error(text msg, text details)
{
	printf(RED"[ERROR] %s"COLOR_RESET "\n",msg);
	
	if (details != NONE)
	{
		printf(RED"Error details: %s"COLOR_RESET"\n",details);
	}
}

void CL_Warning(text msg)
{
	printf(YELLOW"[WARNING] %s"COLOR_RESET"\n", msg);
}


