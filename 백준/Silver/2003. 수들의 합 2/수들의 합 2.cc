#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int m;
    cin >> m;

    int arr[n + 1] = {0};

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int start = 0, end = 0;
    int result = arr[0], cnt = 0;

    while (end < n)
    {

        if (result < m)
        {
            result += arr[++end];
        }
        if (result >= m)
        {
            if (result == m)
                cnt++;
            result -= arr[start++];
        }
    }
    cout << cnt;
}