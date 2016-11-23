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
        int R;
        int C;
        scanf("%d %d",&R,&C);
        char* G[R];
        for(int G_i = 0; G_i < R; G_i++){
           G[G_i] = (char *)malloc(1024 * sizeof(char));
           scanf("%s",G[G_i]);
        }
        int r;
        int c;
        scanf("%d %d",&r,&c);
        char* P[r];
        for(int P_i = 0; P_i < r; P_i++){
           P[P_i] = (char *)malloc(1024 * sizeof(char));
           scanf("%s",P[P_i]);
        }

        for(int G_i = 0, P_i=0; G_i < R; G_i++){
                int ocol, ncol;
                char  *pt;
                pt = strstr(G[G_i],P[P_i] );
                if(pt)
                {
                    ncol = pt-G[G_i];
                    if(P_i==0)
                    {
                        ocol = ncol;
                        P_i=P_i+1;
                    }
                    else if(ocol == ncol)
                    {
                        P_i = P_i + 1;
                    }
                }
                else
                {
                     P_i = 0;
                }

                if(P_i==r)
                {
                        printf("YES\n");
                        break;
                }
                else if(P_i != r && G_i == (R-1))
                {
                     printf("NO\n");
                }
          }
       }
    return 0;
}