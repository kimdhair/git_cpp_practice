#include <iostream>
#include <vector>
#include <string>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77
#define ENTER 13

using namespace std;
void gotoxy(int x, int y);
void cursor(int n);


int main() {
	//while (1) {
	/*gotoxy(1, 1);
	cout << "��  ";*/
	//}
	string** arr2 = new string * [21];
	for (int i = 0; i < 21; i++) {
		arr2[i] = new string[21];
	}

	for (int i = 0; i < 21; i++) {
		for (int j = 0; j < 21; j++) {
			arr2[i][j] = "�� "; // ���� �迭 ���
		}
	}
	//gotoxy(arr2[0][0], arr2[0][0]);
	//arr2[10][10] = "��   ";
	for (int i = 0; i < 21; i++) {
		for (int j = 0; j < 21; j++) {
			cout << arr2[i][j];
		}
		cout << endl;
	}
	char c;
	int life = 10;
	int length = 1;
	srand((unsigned int)time(NULL));
	int input = 0;
	int x = 10;
	int y = 3;
	cursor(0);

	while (1) {
		gotoxy(x, y);
		printf("��");

		if (_kbhit()) {        //Ű���� �Է� Ȯ�� (true / false)
			c = _getch();      // ����Ű �Է½� 224 00�� ������ �Ǳ⿡ �տ� �ִ� �� 224�� ����
			if (c == -32) {    // -32�� �ԷµǸ�
				c = _getch();  // ���� �Է°��� �Ǻ��Ͽ� �����¿� ���
				switch (c) {
				case LEFT:
					gotoxy(x, y);
					cout << "�� ";
					--x;
					--x;
					gotoxy(x, y);
					break;
				case RIGHT:
					gotoxy(x, y);
					cout << "�� ";
					++x;
					++x;
					gotoxy(x, y);
					break;
				case UP:
					gotoxy(x, y);
					cout << "�� ";
					--y;
					gotoxy(x, y);
					break;
				case DOWN:
					gotoxy(x, y);
					cout << "�� ";
					++y;
					gotoxy(x, y);
					break;
				}
			}
		}
	}
}

void gotoxy(int x, int y) {
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void cursor(int n)
{
	HANDLE hConsole;
	CONSOLE_CURSOR_INFO ConsoleCursor;

	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	ConsoleCursor.bVisible = n;
	ConsoleCursor.dwSize = 1;

	SetConsoleCursorInfo(hConsole, &ConsoleCursor);
}