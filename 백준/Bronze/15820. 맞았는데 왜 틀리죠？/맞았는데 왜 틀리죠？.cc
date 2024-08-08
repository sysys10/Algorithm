#include <iostream>
using namespace std;
int main() {
    int a, b;
    int ans;
    int af = 0,bf = 0;
 
    cin >> a >> b;
 
    while (a--)
    {
        int s, man;
        cin >> s >> man;
        if (s != man)
            af = 1;
        
    }
    while (b--)
    {
        int s, man;
        cin >> s >> man;
        if (s != man)
            bf = 1;
    }
    if (af == 0 && bf)
        cout << "Why Wrong!!!\n";
    else if (af == 0 && bf == 0)
        cout << "Accepted\n";
    else
        cout << "Wrong Answer\n";
}
