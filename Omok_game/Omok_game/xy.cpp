//#include <iostream>
//#include <windows.h>
//#include <stdlib.h>
//#include <time.h>
//#include <conio.h>
//#define LEFT 75
//#define RIGHT 77
//#define UP 72
//#define DOWN 80
//#define COLOR(A) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),A);
//using namespace std;
//void gotoxy(int x, int y);
//void cursor(int n);
//
//int main() {
//			char c;
//	int life = 10;
//	int length = 1;
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	int x = 3;
//	int y = 3;
//	cursor(0);
//	gotoxy(0, 0);
//	for (int i = 0; i < 25; i++) {
//		cout << "��";
//	}
//	for (int i = 0; i < 13; i++) {
//		cout << "��\n";
//		gotoxy(50, i);
//	}
//	gotoxy(0, 1);
//	for (int i = 0; i < 10; i++) {
//		cout << "��\n";
//	}
//	for (int i = 0; i < 25; i++) {
//		cout << "��";
//	}
//	gotoxy(10, 10);
//	printf("������");
//	while (1) {
//		gotoxy(x, y);
//		for (int i = 0; i < length; i++) {
//			printf("��");
//		}
//		COLOR(rand() % 10);
//		if (x == 10 && y == 10) {
//			gotoxy(10, 10);
//			printf("    ");
//		}
//		if (_kbhit()) {
//			input = _getch();
//			switch (input) {
//			case 'w':
//				gotoxy(x, y);
//				printf(" ");
//				--y;
//				break;
//			case 's':
//				gotoxy(x, y);
//				printf(" ");
//				++y;
//				break;
//			case 'd':
//				gotoxy(x, y);
//				printf(" ");
//				++x;
//				break;
//			case 'a':
//				gotoxy(x, y);
//				printf(" ");
//				--x;
//				break;
//			}
//		}
//		// 1. ��ũ�η� �¿���ϸ� �����Ѵ�.
//		
//		
//				//if (_kbhit()) {       // 2. while���ȿ��� Ű���� ������ �� if���� ����ȴ�.
//				//	c = _getch();     // 3. ����Ű�� �Է��� �� 224 00 �� ���ۿ� �ִ�. 224���� ���ش�.
//				//	if (c == -32) {     // 4. -32�� �ԷµǸ�
//				//		c = _getch();    // 5. ���� �� 00�� �Ǻ��Ͽ� �¿���� ���
//				//		switch (c) {
//				//		case LEFT:
//				//			gotoxy(x, y);
//				//			printf(" ");
//				//			--x;
//				//			break;
//				//		case RIGHT:
//				//			gotoxy(x, y);
//				//			printf(" ");
//				//			++x;
//				//			break;
//				//		case UP:
//				//			gotoxy(x, y);
//				//			printf(" ");
//				//			--y;
//				//			break;
//				//		case DOWN:
//				//			gotoxy(x, y);
//				//			printf(" ");
//				//			++y;
//				//			break;
//				//		}
//				//	}
//				//}
//			
//			//return 0;
//		
//		if (x <= 1 || y <= 0 || y >= 11 || x >= 50) {
//			break;
//		}
//		if (x == 33 && y == 22) {
//			gotoxy(33, 22);
//			printf("   ");
//		}
//
//
//		Sleep(10);
//	}
//	return 0;
//}
//
//void gotoxy(int x, int y) {
//	COORD pos = { x,y };
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
//}
//
//void cursor(int n)
//{
//	HANDLE hConsole;
//	CONSOLE_CURSOR_INFO ConsoleCursor;
//
//	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
//	ConsoleCursor.bVisible = n;
//	ConsoleCursor.dwSize = 1;
//
//	SetConsoleCursorInfo(hConsole, &ConsoleCursor);
//}
#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
//#define COLOR(A) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),A);
using namespace std;
void gotoxy(int x, int y);
void cursor(int n);

int main() {
	int life = 10;
	int length = 1;
	srand((unsigned int)time(NULL));
	int input = 0;
	int x = 3;
	int y = 3;
	cursor(0);
	gotoxy(0, 0);
	for (int i = 0; i < 25; i++) {
		cout << "��";
	}
	for (int i = 0; i < 13; i++) {
		cout << "��\n";
		gotoxy(50, i);
	}
	gotoxy(0, 1);
	for (int i = 0; i < 10; i++) {
		cout << "��\n";
	}
	for (int i = 0; i < 25; i++) {
		cout << "��";
	}
	gotoxy(10, 10);
	printf("������");
	while (1) {
		gotoxy(x, y);
		for (int i = 0; i < length; i++) {
			printf("��");
		}
		//COLOR(rand() % 10);
		if (x == 10 && y == 10) {
			gotoxy(10, 10);
			printf("    ");
		}
		if (_kbhit()) {
			input = _getch();
			switch (input) {
			case 'w':
				gotoxy(x, y);
				printf("  ");
				--y;
				break;
			case 's':
				gotoxy(x, y);
				printf("  ");
				++y;
				break;
			case 'd':
				gotoxy(x, y);
				printf("  ");
				++x;
				break;
			case 'a':
				gotoxy(x, y);
				printf("  ");
				--x;
				break;
			}
		}
		if (x <= 1 || y <= 0 || y >= 11 || x >= 50) {
			break;
		}
		if (x == 33 && y == 22) {
			gotoxy(33, 22);
			printf("   ");
		}


		Sleep(10);
	}
	return 0;
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