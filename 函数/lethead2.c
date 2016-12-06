#include <stdio.h>
#include <string.h>
#define NAME "GIGATHINK,INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDETH 40
#define SPACE ' '
void show_n_char(char ch,int num);

int main()
{ 
	int spaces;

	show_n_char('*',WIDETH);
	putchar('\n');
	show_n_char(SPACE,12);
	printf("%s\n",NAME );
	spaces=(WIDETH-strlen(ADDRESS))/4;
	show_n_char(SPACE,spaces);
	printf("%s\n",ADDRESS );
	show_n_char(SPACE,(WIDETH-strlen(PLACE))/4);
	printf("%s\n", PLACE);
	show_n_char('*',WIDETH);
	putchar('\n');

	return 0;
}
void show_n_char(char ch,int num)
{
	int count;
	for (count=1; count <= WIDETH; count++)
		putchar(ch);
}
