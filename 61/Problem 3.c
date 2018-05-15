#include<stdio.h>
#include <stdlib.h>
void read(int matrix[4][4], char* action);
void move(int matrix[4][4]);
void show(int matrix[4][4], char action);
int main(){
    int cases, matrix[4][4];
    char skip, action;
    scanf("%d%c", &cases, &skip);
    while(cases > 0){         
        read(matrix, &action);
        move(matrix);
        show(matrix, action);
        cases--;
    }
}

void read(int matrix[4][4], char* action){
    char skip;
    scanf("%c", action);
    for(int i = 0; i < 4; i++){     
        if(*action == 'L')
            scanf("%d%d%d%d%c", &matrix[i][0], &matrix[i][1], &matrix[i][2], &matrix[i][3], &skip);
        else if(*action == 'R')
            scanf("%d%d%d%d%c", &matrix[i][3], &matrix[i][2], &matrix[i][1], &matrix[i][0], &skip);
        else if(*action == 'U')
            scanf("%d%d%d%d%c", &matrix[3][i], &matrix[2][i], &matrix[1][i], &matrix[0][i], &skip);
        else if(*action == 'D')
            scanf("%d%d%d%d%c", &matrix[0][3 - i], &matrix[1][3 - i], &matrix[2][3 - i], &matrix[3][3 - i], &skip);   
    }
}

void move(int matrix[4][4]){
    for(int i = 0; i < 4; i++)
    {
        int temp = -1;
        for(int j = 0; j < 4; j++){
            if(matrix[i][j] != 0){
                if(temp == -1){
                    temp = j;
                }
                else{
                    if(matrix[i][temp] == matrix[i][j]){
                        matrix[i][temp] += matrix[i][j];
                        matrix[i][j] = 0;
                        temp = -1;
                    }
                    else{
                        temp = j;
                    }
                }
            }
        }
        for(int j = 0; j < 4; j++){
            if(matrix[i][j] == 0){
                temp = -1;           
                for(int k = j + 1; k < 4; k++){
                    if(matrix[i][k] != 0){
                        temp = k;
                        break;
                    }
                }
                if(temp != -1){
                    matrix[i][j] = matrix[i][temp];
                    matrix[i][temp] = 0;
                }
            }
        }
    }
}

void show(int matrix[4][4], char action){
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            if(j != 0)
                printf(" ");
            if(action == 'L')
                printf("%d", matrix[i][j]);
            else if(action == 'R')
                printf("%d", matrix[i][3 - j]);
            else if(action == 'U')
                printf("%d", matrix[3 - j][i]);
            else if(action == 'D')
                printf("%d", matrix[j][3 - i]);
        }
        printf("\n");
    }
}
