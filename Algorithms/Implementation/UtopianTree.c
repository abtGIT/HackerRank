#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t,h,a0;
    scanf("%d",&t);
    for(a0 = 0; a0 < t; a0++){
        int n,i;
        scanf("%d",&n);
        h=1;
        for(i=1;i<=n;i++)
        {
            if(!(i%2))
                h=h+1;
            else
                h=h*2;
        }
        printf("%d\n",h);
    }
    return 0;
}

