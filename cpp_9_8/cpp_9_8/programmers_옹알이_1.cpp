#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    int cnt = 0;
    vector<string> a = { "aya", "ye", "woo", "ma" };

    for (int i = 0; i < babbling.size(); i++)
    {
        for (int j = 0; j < a.size(); j++)
        {
            if (babbling[i].find(a[j]) != -1)
            {
                babbling[i].replace(babbling[i].find(a[j]), a[j].size(), "1");
            }
        }
		for (int j = 0; j < babbling[i].size(); j++)
		{
			if (isdigit(babbling[i].at(j)) != 0) cnt = 0;
			else
			{
				cnt++;
				break;
			}

		}
		if (cnt == 0)
		{
			cnt = 0;
			answer++;
		}
    }

    return answer;
}

int main()
{
    cout << solution({ "ayaye","uuuma","ye","yemawoo","ayaa"});
}

//int main() {
//	vector<string> babbling = { "ayaye","uuuma","ye","yemawoo","ayaa" };
//	int answer = 0;
//	int cnt = 0;
//	vector<string> a = { "aya", "ye", "woo", "ma" };
//
//	for (int i = 0; i < babbling.size(); i++)
//	{
//		for (int j = 0; j < a.size(); j++)
//		{
//			if (babbling[i].find(a[j]) != -1)
//			{
//				babbling[i].replace(babbling[i].find(a[j]), a[j].size(), "1");
//			}
//		}
//		for (int j = 0; j < babbling[i].size(); j++)
//		{
//			if (isdigit(babbling[i].at(j)) != 0) cnt = 0;
//			else
//			{
//				cnt++;
//				break;
//			}
//
//		}
//		if (cnt == 0)
//		{
//			cnt = 0;
//			answer++;
//		}
//	}
//	cout << answer;
//	return answer;
//}