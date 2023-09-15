#include <ctime>
#include <cstdlib>
#include <iostream>
#include <list>

using namespace std;

int main() {
	srand(time(NULL));
	list<int> lotto;
	list<int>::iterator iter;
	//for (int i = 0; i < 6; i++)
	//{
	//	int num = rand();
	//	lotto.push_back(num % 45 + 1);
	//}
	//lotto.unique();

	while (lotto.size() < 6)
	{
		int num = rand();
		lotto.push_back(num % 45 + 1);
		lotto.sort();
		lotto.unique();
		/*for (iter = lotto.begin(); iter != lotto.end(); iter++) {

			cout << "로또 번호 : " << *iter << endl;
		}*/
	}
	for (iter = lotto.begin(); iter != lotto.end();iter++) {

		cout << "로또 번호 : " << *iter << endl;
	}
}