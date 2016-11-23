#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int *a;
    int i =0, n, sum =0 ;
    scanf("%d", &n);
    a = (int *)malloc(n*sizeof(int));
    for(;i<n;i++)
        scanf("%d", &a[i]);
    for(i=0;i<n;i++)
        sum = sum + a[i];
    printf("%d", sum);
    return 0;
}