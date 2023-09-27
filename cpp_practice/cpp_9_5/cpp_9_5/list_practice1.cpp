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
	}//list 출력

	cout << endl << "4의 갯수: " << cnt << endl;
	myList.sort();
	for (list<int>::iterator it = myList.begin(); it != myList.end(); ++it)
	{
		cout << *it << " ";
	}//리스트에 4의 개수만큼 수 출력

	myList.unique();
	cout << endl;
	for (list<int>::iterator it = myList.begin(); it != myList.end(); ++it)
	{
		cout << *it << " ";
	}//중복된 값 제거 후 출력

	list<int> myList2 = { 6,7 };
	myList.merge(myList2);
	cout << endl;
	for (list<int>::iterator it = myList.begin(); it != myList.end(); ++it)
	{
		cout << *it << " ";
	}//리스트 합병 후 출력

	list<int> myList3 = { 0 };
	myList.merge(myList3);
	cout << endl;
	for (list<int>::iterator it = myList.begin(); it != myList.end(); ++it)
	{
		cout << *it << " ";
	}//리스트 합병 후 출력
	cout << endl << "a배열 ";
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
	}//배열의 각 요소를 한칸씩 뒤로 미룸
	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
	{
		cout << a[i] << " ";
	}
}