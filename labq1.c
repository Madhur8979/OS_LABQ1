#include<stdio.h>
#include<unistd.h>
int main()
{
_Bool flag[2]={1,1};
int turn;
int first;
int j;
int k;
int count;
int pro[2];
printf("****************************************** PETERSON'S SOLUTION FOR CRITICAL SECTION ********************************************\n\n");
printf("enter your tow process named in integer\n");
for(int i=0; i<2; i++)
{
 scanf("%d",&pro[i]);
}
for(int i=0;count!=0;i++)
{
printf("which process you want to enter\n\n");
scanf("%d",&first);
printf("You select %d\n\n",first);
if(first==pro[0])
{
j=1;
k=0;
}
else
{
j=0;
k=1;
}
flag[k]=0;
turn=j;
while(flag[j] && turn==k);
{
printf("your process %d is in critical section\n\n",pro[k]);
flag[k]=1;
}
printf("if you want to exit press 0\n");
printf("if you want to continue press 1\n");
scanf("%d",&count);
}
}

