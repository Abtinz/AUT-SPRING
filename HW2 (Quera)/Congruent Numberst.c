#include<stdio.h>
#include<math.h>

int main()
{
    long long int firtsNumber,secondNumber;
    int temp,a,n;
    printf("please enter your first number : ");
    scanf("%d",&firtsNumber);
    printf("please enter your second number : ");
    scanf("%d",&secondNumber);
    if(firtsNumber>secondNumber)
    {
        temp=firtsNumber;
        firtsNumber=secondNumber;
        secondNumber=temp;
    }

    for(int i=2; i<=secondNumber; i++)
    {
        n=firtsNumber%i;
        if(n<0)
            n=fabs(n);
        a=secondNumber%i;
        if(a<0)
            a=fabs(a);
        if(a==n)
            printf("%d\n",i);
    }
}
