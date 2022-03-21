#include<stdio.h>
#include<string.h>

int main(){
int i,n,j,distinct=0,p=0;
char name[100];
gets(name);
n=strlen(name);
for(i=0;i<n;i++)
{
    for ( j = i+1; j <= n; j++)
    {
        if (name[i]==name[j])
        {
            p=1;
        }
        
    
    }
    
    if (p=0)
    {
        distinct++;
    }
    
}

if (distinct%2!=0)
{
    printf("IGNORE HIM!");
}
else if(distinct%2==0)
printf("CHAT WITH HER!");

printf("%d",distinct);
return 0 ;
}