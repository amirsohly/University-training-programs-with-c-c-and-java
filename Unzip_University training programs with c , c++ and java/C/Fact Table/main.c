#include <stdio.h>
#include <conio.h>

long fact(int n);

int main()
{
    long h;
    int i,n;
    printf("Please enter A Number :");
    scanf("%d",&n);
    printf("\n n   |    n! \n");
    printf("-----------------------");
    for (i=1l;i<=n;i++)
    {
    h=fact(i);
    printf("\n %3d | %8d",i,h);
    }
    getchar();
}
    long fact(int n)
    {
        long f;
        int i;
        for(f=1,i=2;i<=n;i++)
        f*=i;
        //f=f*i
        return f;
    }




