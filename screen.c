#include "MOC.h"


void SelectNewOrOld() {
	ScreenReset();

}

void ExplainGame() {
	ScreenReset();
	SetColor(7);
	MoveConsole(23, 5);
	char arr[100]="★ Maze Of Chaos에 오신것을 환영합니다!";
	for (int i = 0; i < strlen(arr); i++) {
		printf("%c", arr[i]);
		Sleep(10);
	}
	Sleep(500);
	MoveConsole(23, 7);
	strcpy(arr,"↑ ↓ → ←");
	for (int i = 0; i < strlen(arr); i++) {
		printf("%c", arr[i]);
		Sleep(10);
	}
	MoveConsole(23, 8);
	strcpy(arr, "방향키를 활용해서 보이지 않는");
	for (int i = 0; i < strlen(arr); i++) {
		printf("%c", arr[i]);
		Sleep(10);
	}
	MoveConsole(23, 9);
	strcpy(arr, "미로를 탈출하세요!");
	for (int i = 0; i < strlen(arr); i++) {
		printf("%c", arr[i]);
		Sleep(10);
	}
	Sleep(500);
	
	MoveConsole(23, 11);
	strcpy(arr, "미로를 탈출하다가 랜덤하게");
	for (int i = 0; i < strlen(arr); i++) {
		printf("%c", arr[i]);
		Sleep(10);
	}
	MoveConsole(23, 12);
	strcpy(arr, "미니게임이 생성됩니다.");
	for (int i = 0; i < strlen(arr); i++) {
		printf("%c", arr[i]);
		Sleep(10);
	}
	Sleep(500);
	MoveConsole(23, 14);
	strcpy(arr, "<<각종 아이템>>");
	for (int i = 0; i < strlen(arr); i++) {
		printf("%c", arr[i]);
		Sleep(10);
	}
	MoveConsole(23, 15);
	strcpy(arr, "♥ : 추가생명");
	for (int i = 0; i < strlen(arr); i++) {
		printf("%c", arr[i]);
		Sleep(10);
	}
	MoveConsole(23, 16);
	strcpy(arr, "P : 미니게임 패스권");
	for (int i = 0; i < strlen(arr); i++) {
		printf("%c", arr[i]);
		Sleep(10);
	}
	MoveConsole(23, 16);
	strcpy(arr, "$ : 돈");
	for (int i = 0; i < strlen(arr); i++) {
		printf("%c", arr[i]);
		Sleep(10);
	}
	MoveConsole(56, 1);
	strcpy(arr, "뒤로가기 ☜");
	for (int i = 0; i < strlen(arr); i++) {
		printf("%c", arr[i]);
		Sleep(10);
	}
	while (1) {
		if (GetAsyncKeyState(VK_BACK) & 0x8000) {
			StartScreen();
			return 0;
		}
	}
}


void StartScreen() {
	ScreenReset();
	int flag = 0;
	while (1) {
		if (GetAsyncKeyState(VK_DOWN) & 0x8000) {
			if (flag == 0)
				flag = 1;
			else if (flag == 1)
				flag = 2;
		}
		else if (GetAsyncKeyState(VK_UP) & 0x8000) {
			if (flag == 2)
				flag = 1;
			else if (flag == 1)
				flag = 0;
		}
		else if (GetAsyncKeyState(VK_RETURN) & 0x8000) {
			if (flag == 0)
				SelectNewOrOld();
			else if (flag == 1)
				ExplainGame();
			else
				Finish();
			break;
		}

		if (flag == 0) {
			SetColor(7);
			MoveConsole(39, 8);
			printf("▶ 게임시작");
			SetColor(8);
			MoveConsole(39, 10);
			printf("  게임설명");
			SetColor(8);
			MoveConsole(39, 12);
			printf("  나가기");
		}
		else if(flag == 1) {
			SetColor(8);
			MoveConsole(39, 8);
			printf("  게임시작");
			SetColor(7);
			MoveConsole(39, 10);
			printf("▶ 게임설명");
			SetColor(8);
			MoveConsole(39, 12);
			printf("  나가기");
		}
		else if (flag == 2) {
			SetColor(8);
			MoveConsole(39, 8);
			printf("  게임시작");
			SetColor(8);
			MoveConsole(39, 10);
			printf("  게임설명");
			SetColor(7);
			MoveConsole(39, 12);
			printf("▶ 나가기");
		}
		Sleep(110);
	}
}

