#include<stdio.h>
#include<math.h>
main()
{
	int a,b,c,i,d[3],e,f,max,min;
	char A,B,C,D[3];
	scanf("%d %d %d",&d[0],&d[1],&d[2]);
	fflush(stdin);
	scanf("%s",D);
	if(d[0]>d[1]&&d[0]>d[2]&&d[1]>d[2])
	{
		a=d[2];
		b=d[1];
		c=d[0];
	}
	if(d[0]>d[1]&&d[0]>d[2]&&d[2]>d[1])
	{
		a=d[1];
		b=d[2];
		c=d[0];
	}
	if(d[1]>d[2]&&d[1]>d[0]&&d[2]>d[0])
	{
		a=d[0];
		b=d[2];
		c=d[1];
	}
	if(d[1]>d[2]&&d[1]>d[0]&&d[0]>d[2])
	{
		a=d[2];
		b=d[0];
		c=d[1];
	}
	if(d[2]>d[1]&&d[2]>d[0]&&d[0]>d[1])
	{
		a=d[1];
		b=d[0];
		c=d[2];
	}
	if(d[2]>d[1]&&d[2]>d[0]&&d[1]>d[0])
	{
		a=d[0];
		b=d[1];
		c=d[2];
	}
	
	A=D[0];
	B=D[1];
	C=D[2];
	if(A=='A'&&B=='B'&&C=='C')
	printf("%d %d %d",a,b,c);
	else if(A=='A'&&B=='C'&&C=='B')
	printf("%d %d %d",a,c,b);
	else if(A=='B'&&B=='A'&&C=='C')
	printf("%d %d %d",b,a,c);
	else if(A=='B'&&B=='C'&&C=='A')
	printf("%d %d %d",b,c,a);
	else if(A=='C'&&B=='A'&&C=='B')
	printf("%d %d %d",c,a,b);
	else if(A=='C'&&B=='B'&&C=='A')
	printf("%d %d %d",c,b,a);

	
	
	
	
}
