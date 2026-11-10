#include <stdio.h>
#define MAX 5

int stack[MAX] = {10, 20, 30};
int top = 2;

void pop()
{
    if(top == -1)
    {
        printf("Stack underflow\n");
    }
    else
    {
        printf("%d popped from stack\n", stack[top]);
        top--;
    }
}

int main()
{
    printf("Stack before pop:\n");

    for(int i = top; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }

    pop();

    printf("Stack after pop:\n");

    for(int i = top; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }

    return 0;
}
