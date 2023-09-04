#include <iostream>
#include <vector>
using namespace std;

int main()
{
	/*int x, y;
	int sum = 0;
	cout << "두 수를 입력하시오";
	cin >> x;
	cin >> y;

	vector<vector<int>> arr2;
	arr2.assign(x, vector<int>(y));

	if (x <= 0 || y <= 0)
	{
		cout << endl << "error 양수를 입력하시오" << endl;
		cin >> x;
		cin >> y;
	}

	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			arr2[i][j] = sum+1;
			sum++;
		}
	}
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			cout << arr2[i][j] << " ";
		}
		cout << endl;
	}*///벡터를 이용한 2차원 배열

	vector<int> myVector = { 1,1,1,5,3,2,3,2,4,1,5,5 };
	
	for (int i = 0; i < myVector.size(); i++)
	{
		for (int j = i + 1; j < myVector.size(); j++)
		{
			if (myVector[i] == myVector[j])
			{
				myVector.erase(myVector.begin() + j);//erase때문에 이덱스가 하나씩 땡겨짐 따라서 연속으로 중복된 값이 같이 출력됌
				j--;//해결방안
			}
		}
	}
	for (int i = 0; i < myVector.size(); i++)
	{
		cout << myVector[i] << endl;
	}

	/*for (int i = 0; i < myVector.size(); i++)
	{
		cout << myVector.at(i) << endl;
	}*/
}