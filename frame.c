#include "MOC.h"

void OutFrame() {
	SetColor(8);
	MoveConsole(20, 0);
	for (int i = 0; i < 25; i++) {
		printf("▒▒");
	}
	for (int i = 0; i < 24; i++) {
		MoveConsole(20, i + 1);
		printf("▒▒");
		MoveConsole(68, i + 1);
		printf("▒▒");
	}
	MoveConsole(20, 24);
	for (int i = 0; i < 25; i++) {
		printf("▒▒");
	}
}

void ScreenReset() {
	for (int i = 0; i < 24; i++) {
		MoveConsole(22, i + 1);
		for (int i = 1; i <= 46; i++)
			printf(" ");
	}
	OutFrame();
}

void Finish() {
	ScreenReset();
	exit(0);
}