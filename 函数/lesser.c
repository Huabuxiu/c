#include <stdio.h>
int xiao(int n,int m);
int main()
{
	int evil1,evil2;

	printf("Enter a pair of integers(q to quit):\n");
	while(scanf("%d %d",&evil1,&evil2) == 2)
	{
		printf("The lesser fo %d and %d is %d.\n",evil1,evil2,xiao(evil1,evil2));
		printf("Enter a pair of integers(q to quit):\n");
	}
	printf("Bey\n");
	return 0;
}

int xiao(int n,int m)
{
	return (n<m)?n:m;
}
