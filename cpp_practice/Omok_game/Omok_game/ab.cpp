#include <iostream>
#include <string>
#include <windows.h>
#include <mmsystem.h>
#include <conio.h>
#pragma comment(lib, "winmm.lib")

using namespace std;

enum eKeyCode
{
    KEY_UP = 72,     // ����Ű ��
    KEY_DOWN = 80,   // ����Ű ��
    KEY_LEFT = 75,   // ����Ű ��
    KEY_RIGHT = 77,  // ����Ű ��
    KEY_SPACE = 32,  // �����̽���
    KEY_R = 114,     // RŰ
};
class OmokGame {
private:
    static const int BOARD_SIZE = 21;
    string** board;
    int x;
    int y;
    bool isBlackTurn;
    int cnt;
    int flag;

public:
    OmokGame() {
        board = new string * [BOARD_SIZE];
        for (int i = 0; i < BOARD_SIZE; i++) {
            board[i] = new string[BOARD_SIZE];
        }
        resetBoard();

        x = 10;
        y = 10;
        isBlackTurn = true;
        cnt = 0;
        flag = 0;
    }

    ~OmokGame() {
        for (int i = 0; i < BOARD_SIZE; i++) {
            delete[] board[i];
        }
        delete[] board;
    }

    void playGame() {
        char input;

        while (true) {
            if (flag == 1) {
                clearScreen();
                PlaySound(TEXT("winning.wav"), NULL, SND_FILENAME | SND_ASYNC);
                displayWinningMessage(isBlackTurn ? "�浹" : "�鵹");

                input = _getch();
                if (input == '2') {
                    break;
                }

                clearScreen();
                flag = 0;
                resetBoard();
            }

            drawBoard();

            if (isBlackTurn) {
                cout << "�浹 " << cnt << endl;
            }
            else {
                cout << "�鵹 " << cnt << endl;
            }

            char c = 'c';
            cursor(0);
            int i = 1;

            while (i) {
                // Ű �Է� ó�� �� �� ���� ����
                // ...

                if (_kbhit()) {
                    c = _getch();

                    switch (c) {
                    case KEY_UP:
                        // ���� �̵� ó��
                        break;
                    case KEY_DOWN:
                        // �Ʒ��� �̵� ó��
                        break;
                    case KEY_LEFT:
                        // ���� �̵� ó��
                        break;
                    case KEY_RIGHT:
                        // ������ �̵� ó��
                        break;
                    case KEY_SPACE:
                        // �� ���� ó��
                        break;
                    }
                }
            }

            clearScreen();
        }
    }

private:
    void resetBoard() {
        for (int i = 1; i < BOARD_SIZE - 1; i++) {
            for (int j = 1; j < BOARD_SIZE - 1; j++) {
                board[i][j] = "�� ";
            }
        }
    }

    void drawBoard() {
        for (int i = 0; i < BOARD_SIZE; i++) {
            for (int j = 0; j < BOARD_SIZE; j++) {
                cout << board[i][j];
            }
            cout << endl;
        }
    }

    void clearScreen() {
        system("cls");
    }

    void displayWinningMessage(string player) {
        cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl << "%";
        for (int i = 0; i < 19; i++) cout << "   *";
        cout << "%" << endl << "%";
        for (int i = 0; i < 11; i++) cout << " * ";
        cout << player << " �¸�!";
        for (int i = 0; i < 11; i++) cout << "*  ";
        cout << "%" << endl << "%";
        for (int i = 0; i < 19; i++) cout << " *  ";
        cout << "%" << endl;
        cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
        cout << "�ٽ��ϱ�: 1     ����: 2";
    }

    void cursor(int n) {
        HANDLE hConsole;
        CONSOLE_CURSOR_INFO ConsoleCursor;
        hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        ConsoleCursor.bVisible = n;
        ConsoleCursor.dwSize = 1;
        SetConsoleCursorInfo(hConsole, &ConsoleCursor);
    }
};

int main() {
    OmokGame game;
    game.playGame();

    return 0;
}
