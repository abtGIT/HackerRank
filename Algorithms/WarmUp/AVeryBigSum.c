#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long int *a, sum =0 ;
    int i =0, n;
    scanf("%d", &n);
    a = (int *)malloc(n*sizeof(int));
    for(;i<n;i++)
        scanf("%ld", &a[i]);
    for(i=0;i<n;i++)
        sum = sum + a[i];
    printf("%ld", sum);
    return 0;
}