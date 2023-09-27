#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int input;
	int index;
	int num;
	int result;

	vector<int> v = {};
	vector<int> v2 = {};

	cout << "수를 5개 입력하시오 ";

	for (int i = 0; i < 5; i++)
	{
		cin >> input;
		v.insert(v.begin() + i, input);
	}
	cout << "벡터의 크기: " << v.size() << endl;
	cout << "벡터의 모든 원소: ";
	for (int i = 0; i < 5; i++)
	{
		cout << v[i] << " ";
	}
	sort(v.begin(), v.end());//오름차순 정렬
	//sort(v.begin(), v.end(),greater<int>());//내림차순 정렬
	cout << endl << "가장 큰 값: ";
	/*for (int i = 0; i < 4; i++)
	{
		if (v[i] > v[i+1])
		{
			v.push_back(v[i]);
			v.erase(v.begin() + i);
		}
	}*///가장 큰수를 마지막 인덱스로 보내는 함수
	cout << v.back() << endl;//마지막 인덱스 요소 출력
	for (int i = 0; i < 5; i++)
	{
		v[i] = v[i] * 2;
	}
	cout << "두배값: ";
	for (int i = 0; i < 5; i++)
	{
		cout << v[i] << " ";
	}
	cout << endl << "인덱스값을 입력하시오: ";
	cin >> index;
	v.erase(v.begin() + index);
	for (int i = 0; i < 4; i++)
	{
		cout << v[i] << " ";
	}

	cout << endl << "인덱스값을 입력하시오: ";
	cin >> index;
	v.insert(v.begin() + index, v[index]);
	for (int i = 0; i < 5; i++)
	{
		cout << v[i] << " ";
	}
	/*while (1)
	{
		int i=0;
		cout << "수를 입력하시오(입력모드 종료:-1) ";
		cin >> num;
		if (num == -1) break;
		else {
		v2[i] = num;
		i++;
		}
	}*/
	cout << endl << "수를 입력하시요 ";
	for (int i = 0; i < 5; i++)
	{
		cin >> num;
		v2.insert(v2.begin() + i, num);
	}
	cout << "배열: ";
	for (int i = 0; i < size(v2); i++)
	{
		cout << v2[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < size(v2); i++)
	{
		if (v2[i] % 2 != 0)
		{
			v2.erase(v2.begin() + i);
			i--;
		}
	}
	for (int i = 0; i < size(v2); i++)
	{
		cout << v2[i] << " ";
	}
}