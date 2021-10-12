#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
char name(void);
int game(int *a, int *b, int players_num,int m, int move,char *player_name);
int isPrime(int *a);
int main()
{
    int players_num=0;
    int m=0;
    int move=0;
    scanf("%d",&players_num);
    int *a,*b;
    a = (int*) malloc(players_num*sizeof(int));
    b = (int*) malloc(players_num*sizeof(int));
    char *player_name;
    player_name = (char *) malloc(100*sizeof(char));
    scanf("%d %d",a,b);
    for(int i = 0; i < players_num; i++)
        *(player_name+i)= name();
    game(a,b, players_num, m,  move, *player_name);
}
char name(void)
{
    char *name;
    name = (char*)malloc(100*sizeof(char));
    scanf("%s", name);
    return name;
}
int isprime(int *a)
{
    if(*a <= 1)
        return 0;
    if(*a > 1)
    {
        for (int i = 2; i < (*a) / 2; i++)
        {
            if (*a % i == 0)
                return 1;
            else
                return 0;
        }
    }
}
int game(int *a, int *b, int players_num,int m, int move,char *player_name)
{
    int c=0;
    int i=0;
    while(isprime(*(a+i)) == 0 && isprime(*(b+i)) == 0)
    {
        move= rand()% 6+1;
        if(move==1)
            *(a+i)= (*(a+i)+*(b+i))%7;
        if(move==2)
            *(a+i)= *(a+i)+*(b+i)+1;
        if(move==3)
            *(b+i) = (*(a+i) * *(b+i))%10;
        if(move==4)
            *(b+i) = *(a+i)-*(b+i);
        if(move==5)
            *(a+i) = (*(a+i)+ *(b+i)-4)%11;
        if(move==6)
            *(b+i) = (*(a+i)* *(b+i))%10;
    c++;
    m++;
    if(c>players_num)
        c=0;
    if(isprime(*(a+i)) == 1 || isprime(*(b+i)) == 1)
    {
        printf("%s\n",*(player_name+c));
        for(int j=0; j<m; j++)
            printf("%d %d\n",*(a+j),*(b+j));
    }
    i++;
    }
}
