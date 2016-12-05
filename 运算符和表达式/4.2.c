#include <stdio.h>
#define PRAISE "what a super marvelous name!"
int main(void)
{
	char name[40];
	printf("what's your name?\n");
	scanf("%s",name);
	printf("Hellow,%s.%s\n",name,PRAISE );
	return 0;

}