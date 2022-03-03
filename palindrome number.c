#include<stdio.h>


int main()
{
int n,r,sum=0,check;


printf("enter the number=");
scanf("%d",&n);

check=n;

while(n>0)
{
r=n%10;
sum=(sum*10)+r;
n=n/10;
}
if(check==sum){
        printf("your input is palindrome number ");
}
else{
       printf("your input number is not palindrome");
}
return 0;
}
