#include <iostream>
#include <vector>
using namespace std;

int main()
{
	/*int x, y;
	int sum = 0;
	cout << "�� ���� �Է��Ͻÿ�";
	cin >> x;
	cin >> y;

	vector<vector<int>> arr2;
	arr2.assign(x, vector<int>(y));

	if (x <= 0 || y <= 0)
	{
		cout << endl << "error ����� �Է��Ͻÿ�" << endl;
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
	}*///���͸� �̿��� 2���� �迭

	vector<int> myVector = { 1,1,1,5,3,2,3,2,4,1,5,5 };
	
	for (int i = 0; i < myVector.size(); i++)
	{
		for (int j = i + 1; j < myVector.size(); j++)
		{
			if (myVector[i] == myVector[j])
			{
				myVector.erase(myVector.begin() + j);//erase������ �̵����� �ϳ��� ������ ���� �������� �ߺ��� ���� ���� ���
				j--;//�ذ���
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