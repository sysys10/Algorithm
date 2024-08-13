#include <bits/stdc++.h>
using namespace std;
#define INF 987654321
int n, m;
const string shortFrom[12] = {"CU", ":-)", ":-(", ";-)", ":-P", "(~.~)", "TA",
                              "CCC", "CUZ", "TY", "YW", "TTYL"};
const string translation[12] = {"see you", "I’m happy", "I’m unhappy", "wink",
                                "stick out my tongue", "sleepy", "totally awesome",
                                "Canadian Computing Competition", "because", "thank-you",
                                "you’re welcome", "talk to you later"};

string solve(const string &str)
{
    for (int i = 0; i < 12; i++)
    {
        if (str == shortFrom[i])
            return translation[i];
    }
    return str;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    while(true)
    {
        string input;
        cin >> input;
        cout << solve(input) << "\n";
        if (input == "TTYL")
            break;
    }
}
