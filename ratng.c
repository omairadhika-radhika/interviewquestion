include <stdio.h>

void  main()
{
    int you,date;
    printf("enter the ratng of you and date\n");
    scanf("%d %d",&you,&date);
    if (you<2||date<=2)
    {
        printf("0");
    }
    else if(you>=8||date>=8)
{    
    printf("2");
}
else{
    printf("1");
}
}#include <stdio.h>
void main()
{
int tea,candy;
printf("enter the amount tea and candy\n");
scanf("%d %d",&tea,&candy);
if(tea<5||candy<5)
{
    printf("0");
}
else if(tea>=2*candy||candy>2*tea)
{
    printf("2");
}
else
    {
    printf("0");
}
}