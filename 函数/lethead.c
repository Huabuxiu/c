#include <stdio.h>
#define NAME "GIGATHINK,INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDETH 40
  void starbar(void);
int main()
{ 
	starbar();
	printf("%s\n",NAME );
	printf("%s\n",ADDRESS );
	printf("%s\n",PLACE );
	starbar();
	return 0;
}
void starbar()
{
	int count;
	for (count=1; count < WIDETH; count++)
	
		putchar('*');
		putchar('\n');
	
}
