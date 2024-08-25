#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() {
	int n, count = 0,a,b,x=0;
	scanf("%d", &n);
	int m = n;
	for (int i=0;i<=n/5;i++) {
		for (int j=0;j<5;j++){
           if(5*i+3*j==n){
               x++;
               a=i; b=j;
           }
        }
	}
    if (x==0){ a=0; b= -1;}
	printf("%d", a+b);
}