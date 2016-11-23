#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include<ctype.h>

int main(){
    int n;
    scanf("%d",&n);
    char* s = (char *)malloc(10240 * sizeof(char));
    scanf("%s",s);
    int k;
    scanf("%d",&k);

    for( char *str = s; *str!='\0'; str =str+1)
    {
        if(isalpha(*str))
        {
            char a = isupper(*str)? 'Z' : 'z';
            k = k%26;
            *str = *str+ ( (a -*str)<k ? k-26: k );
        }else
        {
            continue;
        }

    }
    puts(s);
    return 0;
}
