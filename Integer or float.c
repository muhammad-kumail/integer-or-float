
#include<stdio.h>
#include<conio.h>
main()
{
    int c; float n;
    printf("Enter number: ");
    scanf("%f",&n);
    c=n;
    if(n-c==0)printf("%.0f is integer!\n",n);
    else printf("%.1f is float!\n",n);
    getch();

}
