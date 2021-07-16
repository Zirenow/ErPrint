#include <stdio.h>
#include "ErPrint.h"

void EP_Log(text msg)
{
	printf("[LOG] %s \n",msg);
}

void EP_Error(text msg, text details)
{
	printf(RED"[ERROR] %s"COLOR_RESET "\n",msg);
	
	if (details != NONE)
	{
		printf(RED"Error details: %s"COLOR_RESET"\n",details);
	}
}

void EP_Warning(text msg)
{
	printf(YELLOW"[WARNING] %s"COLOR_RESET"\n", msg);
}


