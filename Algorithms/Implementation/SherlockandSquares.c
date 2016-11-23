#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    scanf("%d", &t);
    for(int a0 = 0; a0<t; a0++)
    {
            int lb, ub;
            scanf("%d%d", &lb, &ub);
            printf("%d \n", (int) (floor(sqrt(ub)) - ceil(sqrt(lb)) + 1) )   ;
    }
    return 0;
}