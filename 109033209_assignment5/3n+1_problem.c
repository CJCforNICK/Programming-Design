#include <stdio.h>
#include <stdlib.h>
int c[1000001];

int cyclelength(long long int n){

    int count = 0;

    while(1){
        count++;
        if(n == 1)

            break;

        else if(n&1)

            n = 3*n+1;

        else

            n/=2;

    }
    return count;
}

int main()
{
    int a,b,temp;

    int i,count,max;

    while(1){

        max = 0;

        scanf("%d %d",&a,&b);

        if(a>b){

            temp = a;
            a = b;
            b = temp;

        }

        for(i=a;i<=b;i++){

            if(c[i] == 0){

                c[i] = cyclelength(i);
                count = c[i];


            }else
                count = c[i];

            if(count > max)
                max = count;

        }

        printf("%d %d %d\n",a,b,max);

    }



    return 0;
}

