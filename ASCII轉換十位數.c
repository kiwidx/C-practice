#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int num = 65;		//�ѤQ����ഫ�j�g�r���P�����Q��� A A~Z��65-90 
	char word = 'a';	//�Ѧr���ഫ�p�g�r���P�����Q��� a a~z��97~122 
	while(num<=90){
		printf("%c = %d\n",num,num);
		num++;
	}
	printf("-----�j�p�g�r�����j�u-----\n");
	while(word<=122){
		printf("%c = %d\n",word,word);
		word++;
	}
	system("pause");	//�e���Ȱ� 
	return 0;	
}
