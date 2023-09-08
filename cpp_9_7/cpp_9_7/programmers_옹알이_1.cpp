#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
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
        if (stoi(babbling[i]) >= 1) answer++;

    }

    return answer;
}

int main() {
    cout << solution({ "aya", "yee", "u", "maa", "wyeoo" })<<endl;
}