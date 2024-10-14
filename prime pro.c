#include <stdio.h>
main() {
    int n;
    printf("enter the value:");
    scanf("%d",&n);
    if(n==0)
        printf("neither prime nor composite number ");
    else if(n==2||n==3||n==5 || n==7)
        printf("prime");
    else if(n%2==0||n%3==0||n%5==0||n%7==0||n==1)
        printf("not prime ");
    else
        printf("prime");
}