#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

     int size,i=0;
     float p =0, n =0, z=0;
     scanf("%d",&size);
     int a[size];
     for(i=0;i<size;i++)
        scanf("%d",&a[i]);
     for(i = 0 ; i<size; i++)
     {
                if(a[i]>0)
                    p++;
                else if(a[i]<0)
                    n++;
                else
                    z++;

     }
     printf("%0.3f\n%0.3f\n%0.3f", (float)(p/size), (float)(n/size),(float)(z/size));


   return 0;
}