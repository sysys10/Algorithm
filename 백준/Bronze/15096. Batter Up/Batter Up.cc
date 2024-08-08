#include<stdio.h>

int main(){
    int n, cnt = 0;
    double s, ans = 0;
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        scanf("%lf",&s);
        if(s >= 0){ans += s; cnt++;}
    }
    printf("%lf",ans/cnt);
}