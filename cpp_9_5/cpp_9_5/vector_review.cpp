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

	cout << "���� 5�� �Է��Ͻÿ� ";

	for (int i = 0; i < 5; i++)
	{
		cin >> input;
		v.insert(v.begin() + i, input);
	}
	cout << "������ ũ��: " << v.size() << endl;
	cout << "������ ��� ����: ";
	for (int i = 0; i < 5; i++)
	{
		cout << v[i] << " ";
	}
	sort(v.begin(), v.end());//�������� ����
	//sort(v.begin(), v.end(),greater<int>());//�������� ����
	cout << endl << "���� ū ��: ";
	/*for (int i = 0; i < 4; i++)
	{
		if (v[i] > v[i+1])
		{
			v.push_back(v[i]);
			v.erase(v.begin() + i);
		}
	}*///���� ū���� ������ �ε����� ������ �Լ�
	cout << v.back() << endl;//������ �ε��� ��� ���
	for (int i = 0; i < 5; i++)
	{
		v[i] = v[i] * 2;
	}
	cout << "�ι谪: ";
	for (int i = 0; i < 5; i++)
	{
		cout << v[i] << " ";
	}
	cout << endl << "�ε������� �Է��Ͻÿ�: ";
	cin >> index;
	v.erase(v.begin() + index);
	for (int i = 0; i < 4; i++)
	{
		cout << v[i] << " ";
	}

	cout << endl << "�ε������� �Է��Ͻÿ�: ";
	cin >> index;
	v.insert(v.begin() + index, v[index]);
	for (int i = 0; i < 5; i++)
	{
		cout << v[i] << " ";
	}
	/*while (1)
	{
		int i=0;
		cout << "���� �Է��Ͻÿ�(�Է¸�� ����:-1) ";
		cin >> num;
		if (num == -1) break;
		else {
		v2[i] = num;
		i++;
		}
	}*/
	cout << endl << "���� �Է��Ͻÿ� ";
	for (int i = 0; i < 5; i++)
	{
		cin >> num;
		v2.insert(v2.begin() + i, num);
	}
	cout << "�迭: ";
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