#include <stdio.h>
#include <ctype.h>
int main(viod)
{
	char ch;

	while ((ch=getchar())!='\n')
	{
		if (isalpha(ch ))  //�ж��ǲ�����ĸ 
			putchar(ch+1);
		else
			putchar(ch);
	}
	putchar(ch);
	return 0;
}
