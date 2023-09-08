#include <string>
#include <vector>
#include <iostream>

using namespace std;

//int solution(vector<string> babbling) {
//    int answer = 0;
//    int cnt = 0;
//    vector<string> a = { "aya", "ye", "woo", "ma" };
//
//    for (int i = 0; i < babbling.size(); i++)
//    {
//        for (int j = 0; j < a.size(); j++)
//        {
//            if (babbling[i].find(a[j]) != -1)
//            {
//                babbling[i].replace(babbling[i].find(a[j]), a[j].size(), "1");
//				j--;
//            }
//        }
//        for (int j = 0; j < babbling[i].size(); j++)
//        {
//            if (isdigit(babbling[i].at(j)) != 0) cnt = 0;
//            else
//            {
//                cnt++;
//                break;
//            }
//
//        }
//        if (cnt == 0)
//        {
//            cnt = 0;
//            answer++;
//        }
//    }
//
//    return answer;
//}
//
//int main()
//{
//    cout << solution({ "ayaye","uuuma","ye","yemawoo","ayaa" });
//}

int main() {
	vector<string> babbling = { "ayayeaya", "uuu", "yeye", "yemawoo", "ayaayaa" };
	int answer = 0;
	vector<string> a = { "aya", "ye", "woo", "ma" };
	vector<string> a1 = { "ayaaya","yeye","woowoo","mama" };

	for (int i = 0; i < babbling.size(); i++)
	{
	int cnt = 0;
	//int flag = 0;
		for (int j = 0; j < a1.size(); j++)
		{
			if (babbling[i].find(a1[j]) != -1)
			{
				cnt++;
			}
		}
		for (int j = 0; j < a.size(); j++)
		{
			if (cnt != 0) break;
			if (babbling[i].find(a[j]) != -1)
			{
				//if (j == flag) break;
				babbling[i].replace(babbling[i].find(a[j]), a[j].size(), "1");
				//flag = j;
				j--;
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
	cout << answer;
	return answer;
}