#include <iostream>
#include <vector>
#include <string>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <mmsystem.h>
#pragma comment(lib,"winmm.lib")
using namespace std;

int main() {
	PlaySound(TEXT("winning.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	_getch();
}