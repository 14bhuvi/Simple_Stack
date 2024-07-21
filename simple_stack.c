#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int top==-1;
int stack[100];
int i, item,n, op;
void traverse()
{
    if (top==-1)
    {
        printf("\nStack is underflow.");
    }
    else
    {
        for(i=top;i>=0;i--)
        {
            printf("\n%d",stack[i]);
        }
    }
}
void push()
{
    printf("\n enter item:");
    scanf("%d",&item);
    if(top==n-1)
    {
        printf("\n overflow");
    }
    else
    {
        top=top+1;
        stack[top]=item;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("\n underflow");
    }
    else
    {
        printf("\n delete item is %d",stack[top]);
        top=top-1;
    }
}
int main()
{
    printf("\n enter size of the stack");
    scanf("%d",&n);
    while(true)
    {
        printf("\n1)push\n2)pop\n3)traverse\n4)to exit");
        printf("\nEnter your choice:");
        scanf("%d",&op);
        switch(op)
        {
            case 1:
            push(); break(); getch();
            case 2:
            pop(); break(); getch();
            case 3:
            traverse(); break(); getch();
            case 4:
            exit(0);
        }
    }
}
