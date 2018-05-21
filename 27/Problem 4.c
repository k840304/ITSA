#include<stdio.h>
int sol[10001];
void backtrack(int range,int n,int m,int limit){
	if(n>range+1){
		return;
	}
	if(m==limit){
		int i,flag;
		if(sol[m-1]==range || sol[0]==1){
			for(i=0,flag=0;i<limit;i++){
				if(flag==0){
					printf("%d",sol[i]);
					flag=1;
				}
				else if(flag==1){
					printf(",%d",sol[i]);
				}
			}
			printf("\n");	
		}
		return;
	}
	sol[m]=n;
	backtrack(range,n+1,m+1,limit);
	backtrack(range,n+1,m,limit);
}
int main(){
	int i,range;
	scanf("%d",&range);
	for(i=1;i<range;i++){
		backtrack(range,1,0,i);
	}
	return 0;
}
