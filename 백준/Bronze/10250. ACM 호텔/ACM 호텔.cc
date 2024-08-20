#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int t, h, w, n;
    int arr[100][100];
    scanf("%d", &t);
    for (int i=0;i<t;i++){
        scanf("%d %d %d",&h,&w,&n);
        int a=n%h;
        int b=n/h+1;

        if(a==0){
            a=h;
            b--;
        }

        printf("%d%02d\n",a,b);
    }
}