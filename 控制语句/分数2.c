#include<stdio.h>
int main()
{
	int mark,a;
	printf("ÊäÈë³É¼¨£º");
	scanf("%d",&mark);
	if(mark>100||mark<0)
	printf("ÊäÈë´íÎó");
	if(mark>=60)
	  a=mark/10;
	else
	   a=1;
	switch(a){
		case 10:printf("A");break;
		case 9:printf("A"); break;
		case 8:printf("B"); break;
		case 7:printf("C"); break;
		case 6:printf("D"); break;
		case 1:printf("E"); break;
	}
}
