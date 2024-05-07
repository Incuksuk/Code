#include<stdio.h>

int main(){
	int n,m;
	int arr[1001][1001];
	scanf("%d%d",&n,&m);
	for(int i=1;i<=m;i++){
		int x,y;
		scanf("%d%d",&x,&y);
		arr[x][y]=arr[y][x]=1;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;

}
