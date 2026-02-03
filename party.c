#include <stdio.h>

void main()
{
    int cigars;
    int weekend;
    printf("enter the cigars\n");
    scanf("%d %d",&cigars);
    printf("enter the weekend\n");
    scanf("%d %d",&weekend);
if(weekend==1)
{
    if (cigars>=40)
{
    printf("true");
}
else
{
    printf("false");
}
}
else
{
    if(cigars>=40&&cigars<=60)
{
    printf("true");
}
else
{
    printf("false");
}
}
}

