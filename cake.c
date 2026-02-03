include <stdio.h>

void main()
{
    int small;
    int big;
    int cake;
    printf("enter the amount of small bars\n");
    scanf("%d",&small);
    printf("enter the amount of big bars\n");
    scanf("%d",&big);
    printf("enter the amount of cake\n");
    scanf("%d",&cake);
    int required=cake/5;
    if (required>=big)
    {
        int rem=cake-(required*5);
        if (rem<=small)
        {
            printf("%d",rem);
        }
        else
        {
            printf("-1");
        }
    }
        else
        {
            int rem=cake-(big*5);
            if (rem<=small)
            {
                printf("%d",rem);
            }
            else
            {
                printf("-1");
            }
        }
}