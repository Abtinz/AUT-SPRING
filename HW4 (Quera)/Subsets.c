#include<stdio.h>

int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0; i<size; i++)
        scanf("%d",&arr[i]);
    int temp;
    for(int i = 0; i<size; i++)
        for(int j =i+1; j<size; j++)
        {
            if(arr[j]<arr[i])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    if(size==0)
        printf("{ }\n");
    if(size==1)
    {
        printf("{ }\n");
        for(int i=0; i<size; i++)
        {
            printf("{ %d }",arr[i]);
        }
    }
    if(size==2)
    {
        printf("{ }\n");

        for(int i=0; i<size; i++)
        {
            printf("{ %d }\n",arr[i]);
        }

        for(int i=0; i<size; i++)
            for(int j=i+1; j<size; j++)
            {
                printf("{ %d %d }",arr[i],arr[j]);
            }
    }
    if(size==3)
    {
        printf("{ }\n");

        for(int i=0; i<size; i++)
        {
            printf("{ %d }\n",arr[i]);
        }

        for(int i=0; i<size; i++)
            for(int j=i+1; j<size; j++)
            {
                printf("{ %d %d }\n",arr[i],arr[j]);
            }
        printf("{ %d %d %d }",arr[0],arr[1],arr[2]);
    }
    if(size==4)
    {
        printf("{ }\n");

        for(int i=0; i<size; i++)
        {
            printf("{ %d }\n",arr[i]);
        }

        for(int i=0; i<size; i++)
            for(int j=i+1; j<size; j++)
            {
                printf("{ %d %d }\n",arr[i],arr[j]);
            }
        for(int i=0; i<size; i++)
        {
            for(int j=i+1; j<size; j++)
                for(int m=j+1; m<size; m++)
                {
                    printf("{ %d %d %d }\n",arr[i],arr[j],arr[m]);
                }
        }

        printf("{ %d %d %d %d }",arr[0],arr[1],arr[2],arr[3]);
    }
    if(size==5)
    {
        printf("{ }\n");

        for(int i=0; i<size; i++)
        {
            printf("{ %d }\n",arr[i]);
        }

        for(int i=0; i<size; i++)
            for(int j=i+1; j<size; j++)
            {
                printf("{ %d %d }\n",arr[i],arr[j]);
            }
        for(int i=0; i<size; i++)
        {
            for(int j=i+1; j<size; j++)
                for(int m=j+1; m<size; m++)
                {
                    printf("{ %d %d %d }\n",arr[i],arr[j],arr[m]);
                }
        }
        for(int i=0; i<size; i++)
        {
            for(int j=i+1; j<size; j++)
                for(int m=j+1; m<size; m++)
                    for(int n=m+1; n<size; n++)
                    {
                        printf("{ %d %d %d %d }\n",arr[i],arr[j],arr[m],arr[n]);
                    }
        }

        printf("{ %d %d %d %d %d }",arr[0],arr[1],arr[2],arr[3],arr[4]);
    }
    if(size==6)
    {
        printf("{ }\n");

        for(int i=0; i<size; i++)
        {
            printf("{ %d }\n",arr[i]);
        }

        for(int i=0; i<size; i++)
            for(int j=i+1; j<size; j++)
            {
                printf("{ %d %d }\n",arr[i],arr[j]);
            }
        for(int i=0; i<size; i++)
        {
            for(int j=i+1; j<size; j++)
                for(int m=j+1; m<size; m++)
                {
                    printf("{ %d %d %d }\n",arr[i],arr[j],arr[m]);
                }
        }
          for(int i=0; i<size; i++)
        {
            for(int j=i+1; j<size; j++)
                for(int m=j+1; m<size; m++)
                    for(int n=m+1; n<size; n++)
                {
                    printf("{ %d %d %d %d }\n",arr[i],arr[j],arr[m],arr[n]);
                }
        }
        for(int i=0; i<size; i++)
        {
            for(int j=i+1; j<size; j++)
                for(int m=j+1; m<size; m++)
                    for(int n=m+1; n<size; n++)
                        for(int c=n+1; c<size; c++)
                {
                    printf("{ %d %d %d %d %d }\n",arr[i],arr[j],arr[m],arr[n],arr[c]);
                }
        }

        printf("{ %d %d %d %d %d %d  }",arr[0],arr[1],arr[2],arr[3],arr[4],arr[5]);
    }
    if(size==7)
    {
        printf("{ }\n");

        for(int i=0; i<size; i++)
        {
            printf("{ %d }\n",arr[i]);
        }

        for(int i=0; i<size; i++)
            for(int j=i+1; j<size; j++)
            {
                printf("{ %d %d }\n",arr[i],arr[j]);
            }
        for(int i=0; i<size; i++)
        {
            for(int j=i+1; j<size; j++)
                for(int m=j+1; m<size; m++)
                {
                    printf("{ %d %d %d }\n",arr[i],arr[j],arr[m]);
                }
        }
        for(int i=0; i<size; i++)
        {
            for(int j=i+1; j<size; j++)
                for(int m=j+1; m<size; m++)
                    for(int n=m+1; n<size; n++)
                    {
                        printf("{ %d %d %d %d }\n",arr[i],arr[j],arr[m],arr[n]);
                    }
        }
        for(int i=0; i<size; i++)
        {
            for(int j=i+1; j<size; j++)
                for(int m=j+1; m<size; m++)
                    for(int n=m+1; n<size; n++)
                        for(int c=n+1; c<size; c++)
                        {
                            printf("{ %d %d %d %d %d }\n",arr[i],arr[j],arr[m],arr[n],arr[c]);
                        }
        }
        for(int i=0; i<size; i++)
        {
            for(int j=i+1; j<size; j++)
                for(int m=j+1; m<size; m++)
                    for(int n=m+1; n<size; n++)
                        for(int c=n+1; c<size; c++)
                            for(int k=c+1; k<size; k++)

                            {
                                printf("{ %d %d %d %d %d %d }\n",arr[i],arr[j],arr[m],arr[n],arr[c],arr[k]);
                            }
        }
        printf("{ %d %d %d %d %d %d %d }",arr[0],arr[1],arr[2],arr[3],arr[4],arr[5],arr[6]);
    }
    if(size==8)
    {
        printf("{ }\n");

        for(int i=0; i<size; i++)
        {
            printf("{ %d }\n",arr[i]);
        }

        for(int i=0; i<size; i++)
            for(int j=i+1; j<size; j++)
            {
                printf("{ %d %d }\n",arr[i],arr[j]);
            }
        for(int i=0; i<size; i++)
        {
            for(int j=i+1; j<size; j++)
                for(int m=j+1; m<size; m++)
                {
                    printf("{ %d %d %d }\n",arr[i],arr[j],arr[m]);
                }
        }
        for(int i=0; i<size; i++)
        {
            for(int j=i+1; j<size; j++)
                for(int m=j+1; m<size; m++)
                    for(int n=m+1; n<size; n++)
                    {
                        printf("{ %d %d %d %d }\n",arr[i],arr[j],arr[m],arr[n]);
                    }
        }
        for(int i=0; i<size; i++)
        {
            for(int j=i+1; j<size; j++)
                for(int m=j+1; m<size; m++)
                    for(int n=m+1; n<size; n++)
                        for(int c=n+1; c<size; c++)
                        {
                            printf("{ %d %d %d %d %d }\n",arr[i],arr[j],arr[m],arr[n],arr[c]);
                        }
        }
        for(int i=0; i<size; i++)
        {
            for(int j=i+1; j<size; j++)
                for(int m=j+1; m<size; m++)
                    for(int n=m+1; n<size; n++)
                        for(int c=n+1; c<size; c++)
                            for(int k=c+1; k<size; k++)

                            {
                                printf("{ %d %d %d %d %d %d }\n",arr[i],arr[j],arr[m],arr[n],arr[c],arr[k]);
                            }
        }
        for(int i=0; i<size; i++)
        {
            for(int j=i+1; j<size; j++)
                for(int m=j+1; m<size; m++)
                    for(int n=m+1; n<size; n++)
                        for(int c=n+1; c<size; c++)
                            for(int k=c+1; k<size; k++)
                               for(int v=k+1; v<size; v++)

                            {
                                printf("{ %d %d %d %d %d %d %d }\n",arr[i],arr[j],arr[m],arr[n],arr[c],arr[k],arr[v]);
                            }
        }
        printf("{ %d %d %d %d %d %d %d %d }",arr[0],arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7]);
    }
    if(size==9)
    {
        printf("{ }\n");

        for(int i=0; i<size; i++)
        {
            printf("{ %d }\n",arr[i]);
        }

        for(int i=0; i<size; i++)
            for(int j=i+1; j<size; j++)
            {
                printf("{ %d %d }\n",arr[i],arr[j]);
            }
        for(int i=0; i<size; i++)
        {
            for(int j=i+1; j<size; j++)
                for(int m=j+1; m<size; m++)
                {
                    printf("{ %d %d %d }\n",arr[i],arr[j],arr[m]);
                }
        }
        for(int i=0; i<size; i++)
        {
            for(int j=i+1; j<size; j++)
                for(int m=j+1; m<size; m++)
                    for(int n=m+1; n<size; n++)
                    {
                        printf("{ %d %d %d %d }\n",arr[i],arr[j],arr[m],arr[n]);
                    }
        }
        for(int i=0; i<size; i++)
        {
            for(int j=i+1; j<size; j++)
                for(int m=j+1; m<size; m++)
                    for(int n=m+1; n<size; n++)
                        for(int c=n+1; c<size; c++)
                        {
                            printf("{ %d %d %d %d %d }\n",arr[i],arr[j],arr[m],arr[n],arr[c]);
                        }
        }
        for(int i=0; i<size; i++)
        {
            for(int j=i+1; j<size; j++)
                for(int m=j+1; m<size; m++)
                    for(int n=m+1; n<size; n++)
                        for(int c=n+1; c<size; c++)
                            for(int k=c+1; k<size; k++)

                            {
                                printf("{ %d %d %d %d %d %d }\n",arr[i],arr[j],arr[m],arr[n],arr[c],arr[k]);
                            }
        }
        for(int i=0; i<size; i++)
        {
            for(int j=i+1; j<size; j++)
                for(int m=j+1; m<size; m++)
                    for(int n=m+1; n<size; n++)
                        for(int c=n+1; c<size; c++)
                            for(int k=c+1; k<size; k++)
                               for(int v=k+1; v<size; v++)

                            {
                                printf("{ %d %d %d %d %d %d %d }\n",arr[i],arr[j],arr[m],arr[n],arr[c],arr[k],arr[v]);
                            }
        }
          for(int i=0; i<size; i++)
        {
            for(int j=i+1; j<size; j++)
                for(int m=j+1; m<size; m++)
                    for(int n=m+1; n<size; n++)
                        for(int c=n+1; c<size; c++)
                            for(int k=c+1; k<size; k++)
                               for(int v=k+1; v<size; v++)
                                  for(int b=v+1; b<size; b++)
                            {
                                printf("{ %d %d %d %d %d %d %d %d }\n",arr[i],arr[j],arr[m],arr[n],arr[c],arr[k],arr[v],arr[b]);
                            }
        }
        printf("{ %d %d %d %d %d %d %d %d %d}",arr[0],arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7],arr[8]);
    }
}
