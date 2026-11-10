#include <stdio.h>
#define MAX 5

int stack[MAX] = {10, 20, 30};
int top = 2;

void peek()
{
    if(top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Top element is: %d\n", stack[top]);
    }
}

int main()
{
    printf("Stack elements:\n");

    for(int i = top; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }

    peek();

    return 0;
}
