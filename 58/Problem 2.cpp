#include<stdio.h>  
int main(){  
    int i;  
    int cases;  
    int sum;  
    int n, s, e;  
    int arr[10001];  
    scanf("%d", &cases);      
    while(cases--){  
        for(i = 0; i < 10001; i++){  
            arr[i] = 0;  
        }  
        scanf("%d", &n);  
        while(n--){  
            scanf("%d %d", &s, &e);  
            for(s = s + 1; s <= e; s++){  
                arr[s] = 1;  
            }  
        }  
        sum = 0;  
        for(i = 0; i < 10001; i++){  
            if(arr[i] == 1){  
                sum++;  
            }  
        }  
        printf("%d\n", sum);  
    }  
    return 0;  
} 
