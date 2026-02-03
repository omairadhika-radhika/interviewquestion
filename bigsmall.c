#include <stdio.h>

int main()
{
    int big;
    int small;
    int goal;
    printf("enter the no of big\n");
    scanf("%d",&big);
    printf("enter the no of small\n");
    scanf("%d",&small);
    printf("enter the no of goal\n");
    scanf("%d",&goal);
    int required=goal/5;
    if (required<=big)
    {
        int rem=goal-(required*5);
        if (rem<=small)
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
            int rem=goal-(big*5);
            if (rem<=small)
            {
                printf("true");
            }
            else
            {
                printf("false");
            }
        }
}