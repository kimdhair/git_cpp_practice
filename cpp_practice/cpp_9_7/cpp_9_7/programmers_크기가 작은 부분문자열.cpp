#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    vector<string> number = {};
    for (int i = 0; i < t.size() - (p.size() - 1); i++)
    {
        number.push_back("");
        number[i].append(t, i, p.size());
    }
    for (int i = 0; i < number.size(); i++)
    {
        cout << number[i]<<endl;
    }
    for (int i = 0; i < number.size(); i++)
    {
        if (stol(p) >= stol(number[i])) answer++;
    }
    return answer;
}
int main()
{
    cout << solution("10003","10") << endl;
}