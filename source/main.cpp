#include <string.h>
#include <stdio.h>

#include <switch.h>

extern "C"
{
	#include "bpc.h"
}


int main(int argc, char **argv)
{
    gfxInitDefault();
    consoleInit(NULL);
    bpcInitialize();
    bpcShutdownSystem();
    return 0;
}

