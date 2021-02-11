#include<stdio.h>
#include<math.h>
main()
{
	int a,b,c,i;
	char A,B,C;
	scanf("%d %d %d",&a,&b,&c);
	fflush(stdin);
	scanf("%c%c%c",&A,&B,&C);
	if(A=='A'&&B=='B'&&C=='C')
	printf("%d %d %d",a,b,c);
	else if(A=='A'&&B=='C'&&C=='B')
	printf("%d %d %d",a,c,b);

	
	
	
	
}
