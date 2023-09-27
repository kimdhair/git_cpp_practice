#include <ctime>
#include <cstdlib>
#include <vector>
#include <iostream>

using namespace std;

int main() {
	srand(time(NULL));
	vector<int> answer;
	vector<int> check_num = { 1,2,3,4,5,6,7,8,9 };

	while (answer.size() < 3) {
		int num = rand();
		num = num % 9 + 1;
		for (int j = 0; j < check_num.size(); j++) {
			if (num == check_num[j]) {
				answer.push_back(check_num[j]);
				check_num[j] = 0;
			}
		}
	}
	for (int i = 0; i < 3; i++) {
		cout << answer[i] << endl;
	}
}