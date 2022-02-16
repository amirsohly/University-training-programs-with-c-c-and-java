#include <stdio.h>
#include <conio.h>

    main()
{
    int n,y,m,w,d;
    printf("Enter Number Of Days:");
    scanf("%d",&n);
    y=n/365;
    m=n%365/30;
    w=n%365%30/7;
    d=n%365%30%7;
    printf("\n %d days is %d years,%d months,%d weeks,%d days",n,y,m,w,d);
    getchar();
}
