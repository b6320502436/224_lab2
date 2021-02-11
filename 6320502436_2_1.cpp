#include<stdio.h>
#include<math.h>
main()
{
	float a,b,c,d=0;
	scanf("%f %f %f",&a,&b,&c);
	d=a+b+c;
	if(d>=80)
	printf("A");
	else if(d>=75)
	printf("B+");
	else if(d>=70)
	printf("B");
	else if(d>=65)
	printf("C+");
	else if(d>=60)
	printf("C");
	else if(d>=55)
	printf("D+");
	else if(d>=50)
	printf("D");
	else printf("F");
	
	
	
	
}
