#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main()
{
	int cnt = 0;

	list<int> myList = { 5,4,3,4,2,1,1 };
	for (list<int>::iterator it = myList.begin(); it != myList.end(); ++it)
	{
		cout << *it << " ";
		if (*it == 4) cnt++;
	}//list ���

	cout << endl << "4�� ����: " << cnt << endl;
	myList.sort();
	for (list<int>::iterator it = myList.begin(); it != myList.end(); ++it)
	{
		cout << *it << " ";
	}//����Ʈ�� 4�� ������ŭ �� ���

	myList.unique();
	cout << endl;
	for (list<int>::iterator it = myList.begin(); it != myList.end(); ++it)
	{
		cout << *it << " ";
	}//�ߺ��� �� ���� �� ���

	list<int> myList2 = { 6,7 };
	myList.merge(myList2);
	cout << endl;
	for (list<int>::iterator it = myList.begin(); it != myList.end(); ++it)
	{
		cout << *it << " ";
	}//����Ʈ �պ� �� ���

	list<int> myList3 = { 0 };
	myList.merge(myList3);
	cout << endl;
	for (list<int>::iterator it = myList.begin(); it != myList.end(); ++it)
	{
		cout << *it << " ";
	}//����Ʈ �պ� �� ���
	cout << endl << "a�迭 ";
	int a[5] = { 1,2,3,4,5 };
	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	for (int i = 4; i > 0; i--)
	{
		a[i] = a[i - 1];
		if (i == 1) a[0] = 0;
	}//�迭�� �� ��Ҹ� ��ĭ�� �ڷ� �̷�
	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
	{
		cout << a[i] << " ";
	}
}