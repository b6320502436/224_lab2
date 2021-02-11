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
        case 1: c=3; break;
        case 2: c=0; break;
        case 3: c=3; break;
        case 4: c=2; break;
        case 5: c=3; break;
        case 6: c=2; break;
        case 7: c=3; break;
        case 8: c=3; break;
        case 9: c=2; break;
        case 10: c=3; break;
        case 11: c=2; break;
        case 12: c=3; break;
    }
    printf("%d",a+c);
}

	
	
	
	

