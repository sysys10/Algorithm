#include <stdio.h>

int fac(int a)
{
    if (a == 0)
        return 1;
    return a * fac(a - 1);
}

int main()
{
    int n, t, count, count3 = 0, count2 = 0;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        count3 = 0, count2 = 0;
        scanf("%d", &n);

        count = 0;

        for(int two=0;two<=n/2;two++){
            for(int three=0;three<=n/3;three++){
                int one=n-three*3-two*2;
                if(one >=0 && one*1+three*3+two*2==n){

                   count+=fac(one+two+three)/fac(one)/fac(two)/fac(three);
                }
            }
        }
        printf("%d\n",count);


    }
}
