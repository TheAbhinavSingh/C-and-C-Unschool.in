#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
int a,i;
char b[30]="Programming in";
char c[30]="Computer";
float d=16,pow,result,j=5.1;
double value=1.6,res;
a=(strlen(b));
printf("Length of a=%d\n",a);

puts("\nLower case of string: ");
puts(strlwr(b));

puts("\nUpper case of string: ");
puts(strupr(b));

puts("\nCompares two strings: ");
if(strcmp(b,c)==0)
puts("Both string are equal");
else
puts("Both string are not equal");

puts("\nCopies a string: ");
puts(strcpy(b,c));

puts("\nReverse of a string: ");
puts(strrev(c));

pow = d*4;
printf("\nPower of the given number is:%.2f",pow);

result = sqrt(d);
printf("\nSquareroot of number is:%.2f",result);

res=ceil(value);
printf("\nThe ceil value of %.2f is %.2f",value,res);

printf("\nFloor of %.2f is %.2f",j,floor(j));

for(i=0; i<5; i++)
    printf("\nRandom numbers is:%d",rand());
return 0;
}
