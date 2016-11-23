#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t, a_i, a0, c;
    scanf("%d",&t);
    for(a0 = 0; a0 < t; a0++){
        int n;
        int k;
        scanf("%d %d",&n,&k);
        int a[n];
        for(a_i = 0, c = n; a_i < n; a_i++){
           scanf("%d",&a[a_i]);
            if(a[a_i]>0)
                --c;
        }
        if(c<k)
            printf("YES");
        else
            printf("NO");
        printf("\n");
    }
    return 0;
}