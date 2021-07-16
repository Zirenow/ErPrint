#include <stdio.h>
#include "CLog.h"

int main(void)
{
	CL_Log("This is log function");
	CL_Warning("This is warning function");
	CL_Error("This is error function","(can also print details if you wish)");
}