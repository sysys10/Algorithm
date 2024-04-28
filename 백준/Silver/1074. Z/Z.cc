#include <cmath>
#include <iostream>
using namespace std;
int n, r, c, tmp, x = 0, y = 0, cnt = 0;
int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    cin >> n >> r >> c;
    tmp = pow(2, n);
    while (tmp != 0)
    {
        tmp = tmp / 2;
        bool f1 = false, f2 = false;
        if (c >= x + tmp){
            x += tmp;
            f1 = true;
        }
        if (r >= y + tmp){
            y += tmp;
            f2 = true;
        }
        (f1 && f2)
            ? cnt += tmp * tmp * 3
        : (!f1 && f2)
            ? cnt += tmp * tmp * 2
        : (f1 && !f2)
            ? cnt += tmp *tmp
            : cnt += 0;
    }
    cout << cnt << endl;
}