#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string s) {
	int answer = 0;
	vector<string> sp;
	int sum = 0;
	string s_copy = s;
	while (1)
	{
		int n = 0;
		int x_cnt = 0;
		int nx_cnt = 0;
		string x = s.substr(n, 1);
		for (int i = 0; i < s.size(); i++)
		{
			if (x.compare(s.substr(i, 1)) == 0) x_cnt++;
			else nx_cnt++;
			if (x_cnt == nx_cnt)
			{
				n = x_cnt + nx_cnt;
				answer++;
				break;
			}
		}
		sp.push_back(s.substr(0, n));
		s.erase(0, n);
		sum += n;
		if (x_cnt != nx_cnt)
		{
			sum += x_cnt;
			sum += nx_cnt;
			answer++;
			break;
		}
		if (sum == s_copy.size())
		{
			sp.push_back(s.substr(0, s.size()));
			break;
		}
	}
	return answer;
}
int main()
{
	cout << solution("banana");
}