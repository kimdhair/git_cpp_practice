#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
	srand(time(NULL));

	int randomNumber = rand();
	int num = randomNumber % 25 + 1;

	cout << randomNumber << endl;
	cout << num << endl;

	return 0;
}