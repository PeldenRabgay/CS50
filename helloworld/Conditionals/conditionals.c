#include<stdio.h>

int main(void)
{
    int x;
    int y;
    printf("enter the value of x\n");
    scanf("%d",&x);
    printf("enter the value of y\n");
    scanf("%d",&y);

    if (x>y)
    {
        printf("x is greter than y");
    }
    else
    {
printf("x is smaller than y");
    }
    return 0;
}