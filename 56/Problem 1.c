#include<stdio.h>
int main(){
    int n;
    char season[4][7] = {{'S', 'p', 'r', 'i', 'n', 'g'},
                        {'S', 'u', 'm', 'm', 'e', 'r'},
                        {'A', 'u', 't', 'u', 'm', 'n'},
                        {'W', 'i', 'n', 't', 'e', 'r'}};
    scanf("%*d");
    while(scanf("%d", &n) > 0){
        if(n >= 3 && n <= 5){
            printf("%s\n", season[0]);
        }
        else if(n >= 6 && n <= 8){
            printf("%s\n", season[1]);
        }
        else if(n >= 9 && n <= 11){
            printf("%s\n", season[2]);
        }
        else{
            printf("%s\n", season[3]);
        }
    }
}
