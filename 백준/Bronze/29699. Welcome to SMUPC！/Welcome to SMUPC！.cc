#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "WelcomeToSMUPC";
    int a;
    cin >> a;
    a--;
    a %= str.length();
    cout << str[a];
}