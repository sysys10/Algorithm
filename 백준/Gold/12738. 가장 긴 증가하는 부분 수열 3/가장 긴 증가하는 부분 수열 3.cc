#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> v, ans;

int b_search(int key)
{

    int start = 0, end = ans.size() - 1;
    int mid = end;

    while (end >= start)
    {
        int mid = (start + end) / 2;

        if (ans[mid] < key)
        {
            start = mid + 1;
        }
        else if (ans[mid] > key)
        {
            end = mid - 1;
        }
        else if (ans[mid] == key)
        {
            return mid;
        }
    }
    return start;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    ans.push_back(v.front());

    for (int i = 1; i < n; i++)
    {
        if (ans.back() < v[i])
        {
            ans.push_back(v[i]);
        }
        else
        {
            int idx = b_search(v[i]);
            ans[idx] = v[i];
        }
    }
    cout << ans.size();
}