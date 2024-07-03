#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int sum = 0;
    while(a--){
        int s;
        cin >> s;
        sum += s;
    }
    sum < 0 ? cout << "Left" : sum == 0 ? cout << "Stay"
                                        : cout << "Right";
}