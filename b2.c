#include<stdio.h>

int main(){
	int x,y,h;
	float kg;
	scanf("%d%d%d%f",&x,&y,&h,&kg);
	if(x<=150&&y<=150&&h<=150&&x>=10&&y>=10&&h>=10&&kg>0&&kg<=30) printf("OK");
	else printf("DENY");
	return 0;
}
