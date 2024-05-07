#include<stdio.h>
#define  MAX 10000
int main(){
	int Arr[MAX],n,Mnum=0;
	int CountArr[MAX];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&Arr[i]);
		if(Mnum==0) Mnum=Arr[i];
		CountArr[Arr[i]]++;
		if(Mnum < Arr[i]) Mnum= Arr[i];
	}
	for(int i=0;i<n;i++) 
		printf("%d\t",Arr[i]);
	printf("\n");
	for(int i=0;i<=Mnum;i++){
		if(CountArr[i]!=0)
			printf("%d\t",i);
	}
	return 0;
}
