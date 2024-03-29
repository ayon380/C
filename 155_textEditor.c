#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <limits.h>
#include <process.h>

int i, j, ec, fg, ec2;
char fn[20], e, c;
FILE *fp1, *fp2, *fp, *t1, *t2, *t3;
void Create();
void Append();
void Delete();
void Display();
void undo()
{
    printf("\n\tEnter the file name: ");
    scanf("%s", fn);
    fp1 = fopen(fn, "r");
    while (!feof(fp1))
    {
        c = getc(fp1);
        printf("%c", c);
    }
    fclose(fp1);
}
void save(char *s)
{
    t1 = fopen("t1.txt", "w");
    t2 = fopen("t2.txt", "w");
    t3 = fopen("t3.txt", "w");
    static int c = 0;
    fp1 = fopen(s, "r");
    if (c == 0)
    {
        
    }
    c++;
}
void main()
{
    do
    {

        printf("\n\t\t*** TEXT EDITOR ***");
        printf("\n\n\tMENU:\n\t-----\n ");
        printf("\n\t1.CREATE\n\t2.DISPLAY\n\t3.APPEND\n\t4.DELETE\n\t5.EXIT\n6 to undo");
        printf("\n\tEnter your choice: ");
        scanf("%d", &ec);
        switch (ec)
        {
        case 1:
            Create();
            break;
        case 2:
            Display();
            break;
        case 3:
            Append();
            break;
        case 4:
            Delete();
            break;
        case 5:
            exit(0);
            break;
        case 6:
            undo();
        }
    } while (1);
}
void Create()
{
    fp1 = fopen("temp.txt", "w");
    printf("\n\tEnter the text and press '.' to save\n\n\t");
    while (1)
    {
        c = getchar();
        fputc(c, fp1);
        if (c == '.')
        {
            fclose(fp1);
            printf("\n\tEnter then new filename: ");
            scanf("%s", fn);
            fp1 = fopen("temp.txt", "r");
            fp2 = fopen(fn, "w");
            while (!feof(fp1))
            {
                c = getc(fp1);
                putc(c, fp2);
            }
            fclose(fp2);
            break;
        }
    }
}
void Display()
{
    printf("\n\tEnter the file name: ");
    scanf("%s", fn);
    fp1 = fopen(fn, "r");
    if (fp1 == NULL)
    {
        printf("\n\tFile not found!");
        goto end1;
    }
    while (!feof(fp1))
    {
        c = getc(fp1);
        printf("%c", c);
    }
end1:
    fclose(fp1);
    printf("\n\n\tPress any key to continue...");
    getch();
}
void Delete()
{
    printf("\n\tEnter the file name: ");
    scanf("%s", fn);
    fp1 = fopen(fn, "r");
    if (fp1 == NULL)
    {
        printf("\n\tFile not found!");
        goto end2;
    }
    fclose(fp1);
    if (remove(fn) == 0)
    {
        printf("\n\n\tFile has been deleted successfully!");
        goto end2;
    }
    else
        printf("\n\tError!\n");
end2:
    printf("\n\n\tPress any key to continue...");
    getch();
}
void Append()
{
    printf("\n\tEnter the file name: ");
    scanf("%s", fn);
    fp1 = fopen(fn, "r");
    if (fp1 == NULL)
    {
        printf("\n\tFile not found!");
        goto end3;
    }
    while (!feof(fp1))
    {
        c = getc(fp1);
        printf("%c", c);
    }
    fclose(fp1);
    printf("\n\tType the text and press 'Ctrl+S' to append.\n");
    fp1 = fopen(fn, "a");
    while (1)
    {
        c = getch();
        if (c == 19)
            goto end3;
        if (c == 13)
        {
            c = '\n';
            printf("\n\t");
            fputc(c, fp1);
        }
        else
        {
            printf("%c", c);
            fputc(c, fp1);
        }
    }
end3:
    fclose(fp1);
    getch();
}