#include "MazeOfChaos.h"

// *** 콘솔을 움직임 *** // 
void MoveConsole(int x,int y){
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD coord;
    coord.X = x;  
    coord.Y = y;
    SetConsoleCursorPosition(console, coord);
}
// *** 출력되는 글자의 색을 바꿈 *** // 
void SetColor(int color_num){
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color_num);
}
// *** 커서의 깜빡임을 지워줌 ***//
void RemoveCursor(){
    CONSOLE_CURSOR_INFO current_info;
    GetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &current_info);
    current_info.bVisible = 0;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &current_info);
}

/*  color_num 에 따른 색깔
0: Black
1 : Blue
2 : Green
3 : Aqua
4 : Red
5 : Purple
6 : Yellow
7 : White
8 : Gray
9 : Light Blue
10 (A) : Light Green
11 (B) : Light Aqua
12 (C) : Light Red
13 (D) : Light Purple
14 (E) : Light Yellow
15 (F) : Bright White  
*/