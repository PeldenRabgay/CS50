#include<stdio.h>

int main(void)
{

    int x = get_int("enter x");
    int y = get_int("enter y");

    if(x>y)
    {
        printf("x is greater than y");
    }
    else if(x<y)
    {
        printf("x is lesser than y");
    }
    else
    {
       printf("x is equal to y");   
    }
    return 0;
}