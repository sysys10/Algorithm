#include <bits/stdc++.h>
using namespace std;

int main()
{
   while(1){
       string str;
       int a, b;
       cin >> str >> a >> b;
       if(str=="#"){
        if(a==0&&b==0){
            return 0;
        }
       }
        else{
            if(a>17||b>=80){
                cout << str <<" Senior"<<endl;
            }else
                cout << str << " Junior" << endl;
        }
   }
}