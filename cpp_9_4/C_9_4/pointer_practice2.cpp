#include <iostream>

using namespace std;

int main()
{
	int num,score;
	int sum = 0;
	double avg = 0;
	cout << "학생 수를 입력하시오: ";
	cin >> num;
	int* arr = new int[num];
	for (int i = 0; i < num; i++)
	{
		cout << i + 1 << "번 학생의 성적을 입력하세요: ";
		cin >> score;
		cout << endl;
		arr[i] = score;
	}
	for (int i = 0; i < num; i++)
	{
		sum += arr[i];
	}
	avg = (double)sum / num;
	cout << "성적 평균 : " << avg;

	delete[] arr;
}