#include<stdio.h>
#define MAX 10001
int arr[MAX];
void Swap (int a,int b){
	int temp;
	temp=a; 
	a=b;
	b=temp;
}
void Qsort(int arr[],int l,int r){
	if(l >= r) return;
	int p = arr[r];
	int ptr1 = l, ptr2 = r;
	while (ptr1  <= ptr2  ){
		while (arr[ptr1] < p) ptr1++;
		while (arr[ptr2] > p) ptr2--;
		if(ptr1 <= ptr2){
			Swap(arr[ptr1],arr[ptr2]);
			ptr1++;
			ptr2--;
		}
	}
	Qsort(arr,l,ptr2);
	Qsort(arr,ptr1,r);
}
int main(){
	int n;	
	scanf("%d",&n);
	for (int i=0 ; i<n ;i++){
		scanf("%d",&arr[i] ); 
	}
	Qsort(arr,0,n-1);
	for(int i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
	return 0;
}

