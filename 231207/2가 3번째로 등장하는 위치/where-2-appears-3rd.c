#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,*p,i,c=0;
    scanf("%d",&n);
    p=(int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    {
       scanf("%d",&p[i]);
       if(p[i]==2){
        c++; }
        if(c==3){
            printf("%d",i+1);
            break; }

    

    }

    return 0;
}