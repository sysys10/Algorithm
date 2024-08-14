#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

void solve() {}

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, count = 0;
    int ans[4];
    while (1)
    {
        string str;
        cin >> n;
        if (n == 0)
            break;
        ans[0] = n;
        ans[1] = 3 * n;

        if (ans[1] % 2 == 0)
        {
            str = "even";
            ans[2]=ans[1]/2;
        }
        else{
            ans[2]=(ans[1]+1)/2;
            str = "odd";
        }
          ans[3]=3*ans[2];
          ans[4]=ans[3]/9;

        cout << ++count << ". " << str <<' '<< ans[4] << '\n';
    }
}