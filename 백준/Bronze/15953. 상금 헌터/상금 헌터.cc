#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;

    int A[] = {1, 2, 3, 4, 5, 6};
    int aR[] = {500, 300, 200, 50, 30, 10};
    int B[] = {1, 2, 4, 8, 16};
    int bR[] = {512, 256, 128, 64, 32};

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int a, b;
        cin >> a >> b;
        int res = 0;
        int rA = 0, rB = 0;

        for (int j = 0; j < sizeof(A) / sizeof(A[0]); j++)
        {
            rA += A[j];
            if (a <= rA && a != 0)
            {
                res += aR[j];
                break;
            }
        }

        for (int j = 0; j < sizeof(B) / sizeof(B[0]); j++)
        {
            rB += B[j];
            if (b <= rB && b != 0)
            {
                res += bR[j];
                break;
            }
        }

        cout << res * 10000 << "\n";
    }
    return 0;
}