#include <bits/stdc++.h>
using namespace std;

bool checkA(string str){
    bool flag = false;

    for (int i = 0; i < str.length();i++){

        if(!(str[i]>='0' && str[i]<='9')){
            flag = true;
            //숫자가 아니다.
            break;
        }
    }
    return flag;
}

void solve() {

    string a, b;
    cin >> a >> b;
    
    if(checkA(a) || checkA(b)){
        cout << "NaN";
    }else
        cout << stoi(a) - stoi(b);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}