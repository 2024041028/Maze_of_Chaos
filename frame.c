#include "MOC.h"

void OutFrame() {
	SetColor(8);
	MoveConsole(20, 0);
	for (int i = 0; i < 20; i++) {
		printf("▒▒");
	}
	for (int i = 0; i < 19; i++) {
		MoveConsole(20, i + 1);
		printf("▒▒");
		MoveConsole(58, i + 1);
		printf("▒▒");
	}
	MoveConsole(20, 19);
	for (int i = 1; i <= 20; i++) {
		printf("▒▒");
	}
}