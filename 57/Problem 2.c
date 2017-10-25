#include<stdio.h>
void heap(int n, int tree[]);
int main(){
    int i, temp, cases, n, tree[32];
    scanf("%d", &cases);
    while(cases--){
        scanf("%d", &n);
        for(i = 1; i <= n; i++){
            scanf("%d", &tree[i]);
            heap(i, tree);
        }
        for(i = 1; i < n; i++){
            printf("%d ", tree[i]);
        }
        printf("%d\n", tree[i]);
        for(i = n; i >= 2;){
            temp = tree[i];
            tree[i] = tree[1];
            tree[1] = temp;
            heap(--i, tree);
        }        
        for(i = n; i > 1; i--){
            printf("%d ", tree[i]);
        }
        printf("%d\n", tree[1]);
    }    
    return 0;
}
void heap(int n, int tree[]){
    int i, j, temp;
    for(i = n / 2; i >= 1; i--){
        for(j = i; j <= n / 2;j *= 2){    
            if(i * 2 + 1 <= n){
                if(tree[i * 2] >= tree[i * 2 + 1]){
                    if(tree[i] > tree[i * 2 + 1]){
                        temp = tree[i];
                        tree[i] = tree[i * 2 + 1];
                        tree[i * 2 + 1] = temp;
                    }
                }
                else if(tree[i * 2] < tree[i * 2 + 1]){
                    if(tree[i] > tree[i * 2]){
                        temp = tree[i];
                        tree[i] = tree[i * 2];
                        tree[i * 2] = temp;
                    }
                }
            }
            else{
                if(tree[i] > tree[i * 2]){
                    temp = tree[i];
                    tree[i] = tree[i * 2];
                    tree[i * 2] = temp;
                }
            }
        }
    }
}
