#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

     /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int dsum =0, sdsum = 0, i=0, j=0,n=0, k =0;
    scanf("%d", &n);
    int  a[n][n];
    for(i=0;i<n;i++)
        for(j=0; j<n; j++)
        scanf("%d",&a[i][j]);
    for(i=0, j=n-1;i<n;i++, j--)
    {
        dsum = dsum +a[i][i];
        sdsum = sdsum +a[i][j];
    }

    printf("%d",abs(dsum-sdsum));
    return 0;
}