#include<bits/stdc++.h>
#define MAX 10001
using namespace std;
int arr[MAX];
void Swap(int a,int b){
	int t = a;
	a = b; 
	b = t;
}
void qSort (int arr[], int l, int r){
	if(l >= r) return; 
	int pivot = arr[r];
	int ptr1 = l, ptr2 = r;
	while (ptr1 <= ptr2){
		while (arr[ptr1] < pivot ) ptr1++;
		while (arr[ptr2] > pivot ) ptr2--;
		if (ptr1 <= ptr2){
			Swap(arr[ptr1], arr[ptr2]);
			ptr1++;
			ptr2--;
		}
	}
	qSort(arr,l,ptr2);
	qSort(arr,ptr1,r);

}
int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	qSort(arr, 0, n-1);
	for(int i=0;i<n;i++)
		cout<<arr[i]<<' ';
	return 0;
}
