#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n,i,sum=0,*p;
    char result[12];

    scanf("%d",&n);
    p=(int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
        sum+=p[i];
    }
    sprintf(result,"%d",sum);
    printf("%s%c",result+1,result[0]);
    free(p);
    
    return 0;
}