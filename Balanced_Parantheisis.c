#include<stdio.h>
struct stack
{
    char item[20];
    int top;
}S;
char pop()
{
    char x;
    x=S.item[S.top];
    S.top--;
    return x;
      }

void push(char x)
{
    S.top++;
    S.item[S.top]=x;

}
char stacktop()
{
    char x;
    x=S.item[S.top];
    return x;
}
int IsEmpty()
{
    if(S.top==-1)
        return 1;
    else
        return 0;
}
int main()
{
    char expression[20],x;
    int i=0;
    S.top=-1;
    int flag=0;
    scanf("%s",expression);
    while(expression[i]!='\0')
    {
        x=expression[i];
        if(x=='(')
            push(x);
        else
        {
            if(IsEmpty()==1)
            {
               flag=1;
               break;
            }
            else
            {
                pop();
            }
        }
    i++;
    }

    if(flag==1)
        printf("Invalid Expression");
    else
    {
        if(IsEmpty())
            printf("Yo Valid Expression");
        else
            printf("Invalid Expression");

    }

}
