#include<stdio.h>
int main()
{
    int d,n1,c;
    char a;
    scanf("%c",&a);
    scanf("%d",&d);
    if (d%10==5)
    {
        printf("%c",92);
    }
    if(d%2==1)
    {
        if(a<=73)
        {
            printf("(^_^)");
        }
        else if(a<=82)
        {
            printf("(*o*)");
        }
        else if(a<=90)
        {
            printf("(T_T)");
        }
    }
    else
    {
        if(a<=73)
            {
                printf("{@_@}");
            }
        else if(a<=82)
            {
                printf("{*v*}");
            }
        else if (a<=90)
            {
                printf("{x_x}");
            }
    }
    if (d%10==5)
    {
        printf("/");
    }
    return 0;
}
