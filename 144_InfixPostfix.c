#include <stdio.h>
#include <stdlib.h>
struct Node
{
    char val;
    struct Node *next;
};
void push(struct Node **head, char a)
{
    struct Node *q = (struct Node *)malloc(sizeof(struct Node));
    struct Node *w;
    w = *head;
    q->val = a;
    q->next = w;
    *head = q;
}
void pop(struct Node **head)
{
    if (*head == NULL)
    {
        return;
    }
    struct Node *q = (struct Node *)malloc(sizeof(struct Node));
    struct Node *w;
    q = *head;
    w = q;
    q = q->next;
    *head = q;
    free(w);
}
int empty(struct Node *head)
{
    if (head == NULL)
    {
        return 1;
    }
    return 0;
}
char top(struct Node *head)
{
    return head->val;
}
void display(struct Node *head)
{
    while (head != NULL)
    {
        printf("%c ->", head->val);
        head = head->next;
    }
    printf("\n");
}
int precedence(char c)
{
    if (c == '^')
    {
        return 3;
    }
    else if (c == '*' || c == '/')
    {
        return 2;
    }
    else if (c == '+' || c == '-')
    {
        return 1;
    }
    else
    { 
        return -1;
    }
}
void postfix(char str[], int n)
{
    char ans[n];
    struct Node *head = NULL;
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        char c = str[i];
        if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
            ans[j] = str[i];
            j++;
        }
        else if (c == '(')
        {
            push(&head, '(');
        }
        else if (c == ')')
        {
            while (top(head) != '(')
            {
                ans[j] = top(head);
                j++;
                pop(&head);
            }
            pop(&head);
        }
        else
        {
            while (empty(head) == 0 && precedence(c) <= precedence(top(head)))
            {
                ans[j] = top(head);
                j++;
                pop(&head);
            }
            push(&head, c);
        }
    }
    while (empty(head) == 0)
    {
        ans[j] = top(head);
        j++;
        pop(&head);
    }
    ans[j] = '\0';
    printf("%s", ans);
}
int main()
{
    int n = 100;
    char str[n];
    scanf("%s", &str);
    postfix(str, n);
    return 0;
}