#include <stdio.h>
#define BEEP '\a'
#define TEE 'T'
#define ESC '\003'
#define OOPS  "Now you have done it!"
int main ()
{
	printf("%s%s%s\n",BEEP,TEE,OOPS );
	const int MONTHS = 12;
	printf("这下好了吧\n");
}
