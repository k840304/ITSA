#include<stdio.h>  
#include<string.h>  
int destructArr(char arr[], int node[]);  
int main(){  
    int i;  
    int cases;  
    int c;  
    int node[100];  
    int n;  
    int diff;  
    char arr[101];  
    char ans[101];  
    int len;  
    scanf("%d", &cases);      
    while(cases--){  
        scanf("%d", &c);  
        scanf("%s", arr);  
        n = destructArr(arr, node);  
        len = 0;  
        for(i = 1; i <= (n - 1) / 2; i++){  
            diff = node[i] - node[i * 2];             
            if(diff < 0){  
                diff *= -1;  
            }  
            if(diff <= c){  
                if(len != 0){  
                    ans[len++] = ' ';  
                }  
                ans[len++] = 'A' + i - 1;  
                ans[len++] = 'A' + i * 2 - 1;  
            }  
            diff = node[i] - node[i * 2 + 1];  
            if(diff < 0){  
                diff *= -1;  
            }  
            if(diff <= c){  
                if(len != 0){  
                    ans[len++] = ' ';  
                }  
                ans[len++] = 'A' + i - 1;  
                ans[len++] = 'A' + i * 2 + 1 - 1;  
            }  
        }  
        ans[len] = '\0';  
        printf("%s\n", ans);  
    }  
    return 0;  
}  
  
int destructArr(char arr[], int node[]){  
    int i, k;  
    int num = 0;  
    for(i = 0, k = 1; i < strlen(arr); i++){  
        if(arr[i] >= '0' && arr[i] <= '9'){  
            if(num == 0){  
                num = arr[i] - '0' + 0;  
            }  
            else{  
                num = (num * 10) + (arr[i] - '0' + 0);  
            }  
        }  
        else{  
            if(num != 0){  
                node[k++] = num;  
                num = 0;  
            }  
        }  
    }  
    return k;  
}  
