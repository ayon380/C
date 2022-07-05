#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int lexicographic_sort(const char *a, const char *b)
{
    return strcmp(a, b);
}
int lexicographic_sort_reverse(const char *a, const char *b)
{
    return strcmp(b, a);
}
int sort_by_number_of_distinct_characters(const char *a, const char *b)
{
    int c1 = 0, c2 = 0;
    int arr1[26] = {0}, arr2[26] = {0};
    for (int i = 0; i < strlen(a); i++)
    {
        arr1[a[i] - 'a'] = 1;
    }
    for (int i = 0; i < strlen(b); i++)
    {
        arr2[b[i] - 'a'] = 1;
    }
    for (int i = 0; i < 26; i++)
    {
        if (arr1[i])
        {
            c1++;
        }
        if (arr2[i])
        {
            c2++;
        }
    }
    if (c1 != c2)
    {
        return c1 > c2;
    }
    else
    {
        return strcmp(a, b) > 0;
    }
}
int sort_by_length(const char *a, const char *b)
{
    int q = strlen(a);
    int w = strlen(b);
    if (q != w)
    {
        return q > w;
    }
    else
    {
        return strcmp(a, b) > 0;
    }
}

void string_sort(char **arr, const int len, int (*cmp_func)(const char *a, const char *b))
{
}

int main()
{
    int n;
    scanf("%d", &n);
    a = n;
    char **arr;
    arr = (char **)malloc(n * sizeof(char *));

    for (int i = 0; i < n; i++)
    {
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }

    string_sort(arr, n, lexicographic_sort);
    for (int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for (int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for (int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for (int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");
}