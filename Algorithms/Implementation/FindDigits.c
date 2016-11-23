#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t,a0;
    scanf("%d",&t);
    for(a0 = 0; a0 < t; a0++){
        int n,tmp,i=0;
        scanf("%d",&n);
        tmp = n;
        while(tmp)
        {
            int d = tmp%10;
            if(d && !(n%d)) i=i+1;
            tmp = tmp/10;
        }
        printf("%d\n",i);
    }
    return 0;
}