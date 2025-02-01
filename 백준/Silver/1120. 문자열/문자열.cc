#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string a,b;
    cin>> a>> b;

    int length = b.length()-a.length()+1;
    int MAX = 9999999999;
    int alen = a.length();
    int blen= b.length();
    for (int i=0; i<length; i++){
        int temp = 0;
        for (int j=i; j< i+alen; j++){
            if (a[j-i] != b[j]){
                temp++;
           }
        }
        MAX = min(MAX, temp);
    }
    cout<<MAX;
    return 0;
}