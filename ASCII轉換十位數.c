#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int num = 65;		//由十位數轉換大寫字母與對應十位數 A A~Z為65-90 
	char word = 'a';	//由字元轉換小寫字母與對應十位數 a a~z為97~122 
	while(num<=90){
		printf("%c = %d\n",num,num);
		num++;
	}
	printf("-----大小寫字母分隔線-----\n");
	while(word<=122){
		printf("%c = %d\n",word,word);
		word++;
	}
	system("pause");	//畫面暫停 
	return 0;	
}
