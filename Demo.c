#include <stdio.h>
#include "ErPrint.h"

int main(void)
{
	EP_Log("This is log function");
	EP_Warning("This is warning function");
	EP_Error("This is error function","(can also print details if you wish)");
}
