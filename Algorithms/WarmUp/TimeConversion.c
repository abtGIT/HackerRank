#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char* t = (char *)malloc(10240 * sizeof(char));
    scanf("%s",t);
    int h = atoi(t);
    char c = t[8];

    t =  strtok(t,"PM");
    t =  strtok(t,"AM");

   if ( c=='P' &&  h++ < 12 )
  {
        t[0] = t[0] + 1;
        t[1] = t[1] + 2;

   } else if (h==12)
      {

            t[0]='0',  t[1]='0';
       }
       
   printf("%s",t);
   return 0;
}
