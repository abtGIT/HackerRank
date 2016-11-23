#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t;
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int c;
        int m;
        scanf("%d %d %d",&n,&c,&m);
        int tchok, wrap, chok;
        wrap = tchok = chok = (n/c);
        while(wrap>=m)
        {
            chok = wrap/m;
            tchok = tchok + chok;
            wrap = wrap%m+chok;
        }
        printf("%d\n", tchok);
    }
    return 0;
}