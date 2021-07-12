#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//輸入與印出 
	int x=0;			//初值0
	printf("輸入x: ");  
	scanf("%d",&x);
	x+=2;				//將輸入的x+2再存回x 
	printf("印出目前x: %d\n",x);	//印出目前的x 
	
	system("pause");
	return 0;
} 
