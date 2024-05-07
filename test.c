
#include<stdio.h>
#define MAX 10000
int main(){
	int a[MAX][MAX];
	int cot=1,dong=1,k=1,p1=0,p2=0;
	int m,n;
	scanf("%d%d",&n,&m);
	while(k!=m*n){
		if(p1%2==0,p2%2==0){
			for(;cot<=n-p2%4;cot++){
				a[cot][dong]=k;
				k++;
			} 
			cot--;
			p1++;
		}
		if(p1%2==1&&p2%2==0){
			for(;dong<=m-p1%4;dong++){
				a[cot][dong]=k;
				k++;
			}
			dong--;
			p2++;
		}
		if(p1%2==0&&p2%2==1){
			for(;cot>p2%4;cot--){
				a[cot][dong]=k;
				k++;
			}
			cot++;
			p1++;
		}
		if(p1%2==1&&p2%2==1){
			for(;dong>p1%4;dong--){
				a[cot][dong]=k;
				k++;
			}
			dong++;
			p2++;
		}
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
	return 0;
}
