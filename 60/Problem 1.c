#include <stdio.h>  
  
int main(void) {  
    int n, year;  
    scanf("%d", &n);  
    while(n--){  
        scanf("%d", &year);  
        if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){  
            printf("Bissextile Year\n");  
        }  
        else{  
            printf("Common Year\n");  
        }  
    }  
    return 0;  
}  
