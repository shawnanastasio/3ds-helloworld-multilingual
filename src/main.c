#include <stdio.h>
#include <string.h>
#include <3ds.h>

#include "translator.h"


int main(int argc, char** argv)
{
	// Initialize services
	gfxInitDefault();
	cfguInit();


	u8 language = 0;
	Result res;

	// Read the language field from the config savegame.
	res = CFGU_GetSystemLanguage(&language);


	// Display Debug Lang Code to BOTTOM screen
	consoleInit(GFX_BOTTOM, NULL);

	printf("       Result: 0x%x\n", (int)res);
	printf("Language code: %d", (int)language);

	// Display hello world based on language on TOP screen
	consoleInit(GFX_TOP, NULL);
	printf(get_hello_world((int)language));

	// Main loop
	while (aptMainLoop())
	{
		hidScanInput();

		u32 kDown = hidKeysDown();
		if (kDown & KEY_START)
			break; // break in order to return to hbmenu

		// Flush and swap framebuffers
		gfxFlushBuffers();
		gfxSwapBuffers();
		gspWaitForVBlank();
	}

	// Exit services
	cfguExit();
	gfxExit();
	return 0;
}
