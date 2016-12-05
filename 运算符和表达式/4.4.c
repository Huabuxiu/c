#include "stdio.h"
#include <math.h>
 sincos(a,b)
{
 char a,b,c;
	c=sin(a+b)+sin(a-b);
	return 0;
}
int main()
{
	float a=5.0,b=7.0,c;
	c=sincos(a,b);
	printf("%f\n",c );

}
