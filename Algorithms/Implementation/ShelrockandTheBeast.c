#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void printval(int c, char s)
{
    int i =1;
    for(i = 1; i<=c; i++)
        printf("%c",s);
}

void check(int n)
{

            int i=n;
            while(i)
            {

                if( !(i%3) )
                {
                  break;
                }
                else
                    i = i-5;
            }

            if(i>=0)
            {
                printval(i,'5');
                printval((n-i),'3');
            }
            else
                printf("-1");
}

int main(){
    int t, th, i, a0;
    char flag;
    scanf("%d",&t);
    for(a0 = 0; a0 < t; a0++){
        int n;
        scanf("%d",&n);
        check(n);

        printf("\n");
    }
    return 0;
}
