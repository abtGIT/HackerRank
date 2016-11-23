#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n], cut = 0;
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    for(int i=0; i<n-1; i++)
        for(int j=0; j<n-1-i; j++)
        {
                int temp;
                if(arr[j]>arr[j+1])
                {
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
        }
        printf("%d\n", n);
        for(int j = 0 ; j<n-1 ; j++)
        {
                  if(arr[j]!=arr[j+1])
                           printf("%d\n", n - (j+1));
        }

        return 0;
}