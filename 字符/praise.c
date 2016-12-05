#include<stdio.h>
#define PRAISE "What a super marvelous name!"
int main()
{
	char name[40];
	printf("what's your name?\n");
	scanf("%s",name);
	printf("Hello,%s.%s\n",name,PRAISE);
	return 0; 
}
