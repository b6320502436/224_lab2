#include<stdio.h>
#include<math.h>
main()
{
	char A;
	float a,b,c,d,e,f;
	scanf("%c",&A);
	scanf("%f",&b);
	if(A=='A')
	{
		b=b-200;
		c=199+b*3;
		printf("%f",ceil(c));
	}
	else if(A=='B')
	{
		b=b-400;
		c=299+b*2;
		printf("%f",ceil(c));
	}
	
	
	
	
	
}
