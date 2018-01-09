#include <stdio.h>  
#include <string.h>  
int main(void) {  
    int cases, i;  
    char str[51];  
    scanf("%d", &cases);  
    getchar();  
    while(cases--){  
        gets(str);  
        for(int i = strlen(str) - 1; i >= 0; i--){  
            printf("%c", str[i]);  
        }  
        printf("\n");  
    }  
    return 0;  
}  
