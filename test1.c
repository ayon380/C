#include <string.h>
#include <stdio.h>
#include <stdlib.h>

// get the value of the next integer out of the string s
// quick and dirty
int next_int(char **s)
{
    char *q = *s;
    char *end = q + strlen(q);
    while (!isdigit(q[0]) && q < end)
        q++; // advance q to first digit
    char *p = q;
    while (isdigit(p[0]))
        p++; // advance q to character after last digit
    char tmp[p - q + 1];
    strncpy(tmp, q, p - q);
    tmp[p - q] = '\0';
    *s = p; // advance s to where p is
    return atoi(tmp);
}

// evaluate the simple expression q
// doesn't handle fancy stuff like precedence
int eval(char *q)
{
    int val = 0, len = strlen(q);
    char *t = q;
    while (1)
    {
        if (isdigit(t[0]))
        {
            val = next_int(&t);
        }
        else if (t[0] == '+')
        {
            val += next_int(&t);
        }
        else if (t[0] == '-')
        {
            val -= next_int(&t);
        }
        else if (t[0] == '*')
        {
            val *= next_int(&t);
        }
        else if (t[0] == '/')
        {
            val /= next_int(&t);
        }
        else if (t[0] == '\0')
        {
            break;
        }
        else
        {
            ++t;
        }
    }
    return val;
}

// solve the cryptarithmetic puzzle q
char *solve(char *q)
{
    // find c, the first unbound letter of q
    char c = 0;
    int i = 0, j = 0, len = strlen(q);
    for (i = 0; i < len; ++i)
    {
        if (isalpha(q[i]))
        {
            c = q[i];
            break;
        }
    }
    if (c == 0)
    { // if there are no unbound letters
        // extract op1 and op2 operands
        char *end = q + len;
        char *eq = strstr(q, "==");
        char op1[eq - q + 1], op2[end - eq - 1];
        strncpy(op1, q, eq - q);
        strncpy(op2, eq + 2, end - eq - 2);
        op1[eq - q] = '\0';
        op2[end - eq - 2] = '\0';
        // evaluate op1 and op2
        int eval1 = eval(op1), eval2 = eval(op2);
        if (eval1 == eval2)
        { // solved!
            char *r = (char *)malloc(len * sizeof(char));
            strcpy(r, q);
            return r;
        }
        else
        {
            return 0;
        }
    }
    else
    { // if c is the next unbound letter
        // find unused digits
        char dset[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        for (i = 0; i < len; ++i)
            if (isdigit(q[i]))
                dset[q[i] - '0'] = 1;
        for (i = 0; i < 10; ++i)
        {
            if (dset[i] == 0)
            { // if this digit i is unused
                // make a new string n with c replaced with i
                char *n = (char *)malloc(len * sizeof(char));
                for (j = 0; j < len; ++j)
                    n[j] = (q[j] == c) ? i + '0' : q[j];
                char *r = solve(n);
                free(n);
                if (r)
                    return r;
            }
        }
    }
    return 0;
}

int main()
{
    char *query = "ABCDE * A == EEEEEE";
    char *result = solve(query);
    if (result)
        puts(result);
    else
        puts("No solution found.");
    return 0;
}