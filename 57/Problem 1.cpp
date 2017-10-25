#include<stdio.h>
#include<ctype.h>
int main(){
	char str[10001];
	char key[] = {
					'!', '@', '#', '$', '%', '^', '&', '*', '(', ')', '_', '+', '+',
					'`', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '-', '=', '=',
					'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', '[', ']', '\\', '\\', '{', '}', '|', '|',					
					'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';', '\'', '\'', ':', '\"', '\"',
					'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/', '/', '<', '>', '?', '?', ' ', ' '
				};
	int i, j, cases;
	scanf("%d", &cases);
	scanf("%*c");
	while(cases--){
		gets(str);
		for(int i = 0; str[i]; i++){
			str[i] = tolower(str[i]);
		}
		for(i = 0; str[i]; i++){
			for(j = 0; ; j++){
				if(key[j] == str[i]){
					printf("%c", key[j + 1]);				
					break;
				}
			}
		}
		printf("\n");
	}
	return 0;
}
