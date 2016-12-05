#include <stdio.h>
#include <math.h>
int main()
{
	while(1)
	{
		float x,y;
		scanf("%f",&x);
		if (x>=0&&x<20)
			y=x*5+11;
		else if(x>=20&&x<40)
			y=sin(x)+cos(x);
		else if(x>=40&&x<60)
			y=exp(x)-1;
		else if(x>=60&&x<80)
			y=log(x+1);
		else
			y=0;
		printf("%f\n",y );
	}

}