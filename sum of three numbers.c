#include <stdio.h>
sum(int,int,int);
void main()
{
    int a,b,c,d;
    printf("assigning values\n");
    scanf("%d %d %d",&a,&b,&c );
    d=a+b+c;
    printf("\nSum of %d+%d+%d is %d",a,b,c,d);
}
     sum(int x,int y, int z)
{
    int temp;
    temp=x+y+z;
    return(temp);
}
