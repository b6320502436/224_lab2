#include<stdio.h>
int main()
{
	int a,b,c;
    scanf("%d %d",&a,&b);
    if(a>7)
    {
    	a=a%7;
	}
	switch(b){
        case 1: c=31; break;
        case 2: c=28; break;
        case 3: c=31; break;
        case 4: c=30; break;
        case 5: c=31; break;
        case 6: c=30; break;
        case 7: c=31; break;
        case 8: c=31; break;
        case 9: c=30; break;
        case 10: c=31; break;
        case 11: c=30; break;
        case 12: c=31; break;
    }
    if((c+a)%7==0)
    {
	printf("%d",7);
    }
    else
	printf("%d",(c+a)%7);
}

	
	
	
	

