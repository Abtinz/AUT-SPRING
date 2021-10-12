#include<stdio.h>

int main()
{
    int a[30],b[30];
    double num,sum_result=0,final_res;
    int m=0;
    for(int i=0; i<=100; i++)
    {
        printf("please enter (First Number/Second Number)\nEnter (0/0) for compare\n");
        scanf("%d %d",&a[i],&b[i]);
        if((a[i]==0) && (b[i]==0))
        {
            m=i;
            i=101;
        }

    }
    printf("please enter compare floating number : ");
    scanf("%lf",&num);
    for(int i=0; i<m; i++)
        sum_result=sum_result + (double)a[i]/b[i];
     final_res= sum_result*num;

     for(int i=0; i<m; i++)
     {
         if(final_res>(double)a[i]/b[i])
            printf("%d \ %d\n",a[i],b[i]);
     }

}
