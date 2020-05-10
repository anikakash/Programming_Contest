#include<stdio.h>

int main()
{
	float t,d;
	scanf("%f",&t);
	d=t/60;
	if(d>1&&d<=2){
		printf("silver\n");
	}
	else if(d<1||d==1){
		printf("gold\n");
	}
	else if(d<=3){
		printf("bronze\n");
	}
	return 0;
}