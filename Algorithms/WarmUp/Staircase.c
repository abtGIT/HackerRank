#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n=0,i=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int j =0, k =0;
        for(j=n;j>i;j--)
            printf(" ");
        for(k=1; k<=i; k ++)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}