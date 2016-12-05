#include<stdio.h>
int main()
{
	int age;
	printf("ÇëÊäÈëage:");
	scanf("%d",&age);
	if(age>6||age<2)
	printf("age´íÎó");
	switch(age){
		case 2:printf("Age:%d,enter Lower class",age);break;
		case 3:printf("Age:%d,enter Lower class",age);break;
	    case 4:printf("Age:%d,enter Middle class",age);break;
	    case 5:printf("Age:%d,enter Higher class",age);break;
	    case 6:printf("Age:%d,enter Higher class",age);break;
	    return 0;
}
}

