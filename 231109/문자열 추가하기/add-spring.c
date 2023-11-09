#include <stdio.h>
#include <string.h>

int main() {
    
    char a[21];
    char b[6]="Hello";
    scanf("%s",a);
    scanf("%s", a);
	
	int len = strlen(a);
	
	for(int i = 0; i < 5; i++){
		a[len + i] = b[i];
    }
	
	a[len + 5] = '\0';
	
	printf("%s", a);
	

    return 0;
}