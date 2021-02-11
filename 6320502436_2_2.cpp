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
		if(b>200){
		b=b-200;
		d=(((int)(b*100)%100)/60)*3;
		b=3*(int)b+d;
		c=199+b;
		printf("%.2f",c);}
		else printf("%.2f",c=199.00);
}
	else if(A=='B')
	{
		if(b>400)
		{b=b-400;
		d=(((int)(b*100)%100)/60)*2;
		b=2*(int)b+d;
		c=299+b*2;
		printf("%f",c);
	}
	else printf("%.2f",c=299.00);
	
	
	
	
	
	
}}
