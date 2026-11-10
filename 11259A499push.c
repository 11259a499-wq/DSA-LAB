#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

void push(int value)
{
    if(top == MAX - 1)
    {
        printf("Stack overflow\n");
    }
    else
    {
        stack[++top] = value;
        printf("%d pushed into stack\n", value);
    }
}

int main()
{
    int n, value;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        printf("Enter value: ");
        scanf("%d", &value);
        push(value);
    }

    return 0;
}
