#include <stdio.h>

int num;

void insert(int *array)
{
    int i;
    for (i = 0; i < num; i++)
    {
        printf("Enter the valur of %dth Term : ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("Array after insertion :");
    for (i = 0; i < num; i++)
    {
        printf("%d\t", array[i]);
    }
}
int main()
{
    printf("Enter the size of array : ");
    scanf("%d", &num);
    int array[num];
    int choice, c;
    insert(array);
    printf("\nDo you wish to delete any Input? (Yes=1/No=2)\n");
    printf("Enter your choice : ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        int position;
        printf("Enter the position which you want to delete : ");
        scanf("%d", &position);
        position -= 1;
        for (int j = position; j < num; j++)
        {
            array[j] = array[j + 1];
            c++;
        }
        printf("Array after deletion :");
        for (int j = 0; j < num-1; j++)
        {
            printf("%d\t", array[j]);
        }
    }
    if (choice == 2)
    {
        printf("END!");
    }
    return 0;
}