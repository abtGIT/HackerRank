#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n;
    int t;
    scanf("%d %d",&n,&t);
    int width[n];
    for(int width_i = 0; width_i < n; width_i++){
       scanf("%d",&width[width_i]);
    }
    for(int a0 = 0; a0 < t; a0++){
        int i;
        int j;
        int min, max;
        scanf("%d %d",&i,&j);
        min = width[i];
        i=i+1;
        while(i<=j)
        {
            int k = i+1;
            if(k<=j)
            {
                if(width[i]<width[k])
                {
                         if(width[i]<min)
                            min = width[i];
                }
                else if(width[k]<min)
                            min = width[k];
            }else if(width[i]<min)
            {
                min = width[i];
            }
            i=i+1;
        }
        printf("%d\n", min);
    }
    return 0;
}