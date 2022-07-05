#include <conio.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

static int n = 0;

struct student
{
    char name[30];
    char surname[30];
    char Gender[10];
    char bloodgroup[10];
    char bloodtype[5];
    long int acn[20];
    char fathername[60];
    char occupation[100];
    long int facn[20];
    char mothername[60];
    long int macn[12];
    char guardiansname[60];
    long int gacn[12];
    char email[60];
    long int phonenumber[13];
    char address[100];
    int year[4];
    int d[2];
    int mo[2];
    int class;
    char section[2];
    int rollno;
    char course[15];
    char sib;
    int dob;
    int mob;
    int yob;
    int tem;
    int tmm;
    int tsm;
    int thm;
    int tssm;
    int total;
    float percentage;
    float avg;
    int attendance;
    char eca[30];
    char tc[10];
} s;

int op;
void add();
void del();
void modify();
void rc();
void search();
void all();
void password();
void cpassword();
void id();
int main()
{

    int i, count = 0, a, n = 0, r, m, ms;

    printf("___________ Welcome to EDINU Institute Management system _______________\n\n");
    password();
    while (1)
    {
        printf("Please select your option\n");
        printf("1.Add a recoed\n2.Deleting a record\n3.Modifying a record\n4.Generating a student's report card\n5.Search for a student through admission number\n6.Display all students\n7.Change password\n8.student id\n9.Logout\n");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
        {
            add();
            break;
        }
        case 2:
        {
            del();
            break;
        }
        case 3:
        {
            modify();
            break;
        }
        case 4:
        {
            rc();
            break;
        }
        case 5:
        {
            search();
            break;
        }
        case 6:
        {
            all();
            break;
        }
        case 7:
        {
            password();
            cpassword();
            break;
        }
        case 8:
        {
            id();
            break;
        }
        case 9:
        {
            exit(0);
        }
        }
    }
}

void add()
{
    int i;
    int size;
    FILE *fp;
    size = sizeof(s);
    fp = fopen("Data.DAT", "ab");
    printf("Enter Name of the student-");
    scanf("%s", &s.name);
    printf("Enter surname of the student-");
    scanf("%s", &s.surname);
    printf("Enter the Gender of the student-");
    scanf("%s", &s.Gender);
    printf("Enter the blood group of the student");
    scanf("%s", &s.bloodgroup);
    printf("Enter the blood type of the student-");
    scanf("%s", &s.bloodtype);
    printf("Enter the student Aadhaar no-");
    scanf("%ld", &s.acn);
    printf("Enter the student's Father name-");
    scanf("%s", &s.fathername);
    printf("Enter occupation of student's father-");
    scanf("%s", &s.occupation);
    printf("Enter the Aadhaar card no of father-");
    scanf("%ld", &s.facn);
    printf("Enter the name of student's mother name-");
    scanf("%s", &s.mothername);
    printf("Enter the Aadhaar card no of mother-");
    scanf("%ld", &s.macn);
    printf("Enter the name of student's guardian's name-");
    scanf("%s", &s.guardiansname);
    printf("Enter the Aadhaar card no of guardian's-");
    scanf("%ld", &s.gacn);
    printf("Enter the phone no of the student-");
    scanf("%ld", &s.phonenumber);
    printf("Enter the email id of the student-");
    scanf("%s", &s.email);
    fflush(stdin);
    printf("Enter the address details of the student-");
    fgets(s.address, 100, stdin);
    printf("Enter the joining year of the student-");
    scanf("%d", &s.year);
    printf("Enter the joining date of student-");
    scanf("%d", &s.d);
    printf("Enter the joining month of student-");
    scanf("%d", &s.mo);
    printf("Enter the class of the student");
    scanf("%d", &s.class);
    printf("Enter the section of the student");
    scanf("%s", &s.section);
    printf("Enter the roll no of the student");
    scanf("%d", &s.rollno);
    printf("Do you have any sibling?");
    scanf("%s", &s.sib);
    printf("Enter the student's date of birth ");
    scanf("%d", &s.dob);
    printf("Enter the student's month of birth ");
    scanf("%d", &s.mob);
    printf("Enter the student's year of birth ");
    scanf("%d", &s.mob);
    printf("Enter total English mark of student");
    scanf("%d", &s.tem);
    printf("Enter total Maths mark of student");
    scanf("%d", &s.tmm);
    printf("Enter total science mark of student");
    scanf("%d", &s.tsm);
    printf("Enter total Hindi mark of student");
    scanf("%d", &s.thm);
    printf("Enter total social studies mark of student");
    scanf("%d", &s.tssm);
    printf("Enter total attendance of the student ");
    scanf("%d", &s.attendance);
    printf("Enter extra curricular activities Grade of the student");
    scanf("%s", &s.eca);
    printf("Did the student submit the TC");
    scanf("%s", &s.tc);
    s.total = s.tem + s.tmm + s.tsm + s.thm + s.tssm;
    s.percentage = (s.total / 6) * 100;
    fwrite(&s, size, 1, fp);
    fclose(fp);
    printf("\nRecord added successfully");
}

void del()
{
    FILE *fp, *fp1;
    struct student s1;
    int id, found = 0;
    fp = fopen("Data.DAT", "rb");
    fp1 = fopen("temp.dat", "wb");

    printf("Enter the roll number of the student you want to delete: ");
    scanf("%d", &id);
    while (1)
    {
        fread(&s, sizeof(s), 1, fp);
        if (feof(fp))
        {
            break;
        }
        if (s.rollno == id)
        {
            found = 1;
        }
        else
        {
            fwrite(&s, sizeof(s1), 1, fp1);
        }
    }
    fclose(fp);
    fclose(fp1);

    if (found == 0)
    {
        printf("Sorry,No record found\n\n");
    }
    else
    {
        fp = fopen("Data.DAT", "wb");
        fp1 = fopen("temp.dat", "rb");
        while (1)
        {
            fread(&s, sizeof(s1), 1, fp1);

            if (feof(fp1))
            {
                break;
            }
            fwrite(&s, sizeof(s), 1, fp);
        }
        fclose(fp);
        fclose(fp1);
    }
}
void modify()
{
    FILE *fp, *fp1;
    struct student s;
    int id, found = 0;

    fp = fopen("Data.DAT", "rb");
    fp1 = fopen("temp.dat", "wb");

    printf("\nEnter student roll no you want to Modify:");
    scanf("%d", &id);

    while (1)
    {
        fread(&s, sizeof(s), 1, fp);

        if (feof(fp))
        {
            break;
        }
        if (s.rollno == id)
        {
            found = 1;
            printf("Enter Name of the student-");
            scanf("%s", &s.name);
            printf("Enter surname of the student-");
            scanf("%s", &s.surname);
            printf("Enter Gender of the student-");
            scanf("%s", &s.Gender);
            printf("Enter the Blood group of the student-");
            scanf("%s", &s.bloodgroup);
            printf("Enter the Blood type of the student-");
            scanf("%s", &s.bloodtype);
            printf("Enter the student Aadhaar no-");
            scanf("%ld", &s.acn);
            printf("Enter the student's Father name-");
            scanf("%s", &s.fathername);
            printf("Enter occupation of student's father-");
            scanf("%s", &s.occupation);
            printf("Enter the Aadhaar card no of father-");
            scanf("%ld", &s.facn);
            printf("Enter the name of student's mother name-");
            scanf("%s", &s.mothername);
            printf("Enter the Aadhaar card no of mother-");
            scanf("%ld", &s.macn);
            printf("Enter the name of student's guardian's name-");
            scanf("%s", &s.guardiansname);
            printf("Enter the Aadhaar card no of guardian's-");
            scanf("%ld", &s.gacn);
            printf("Enter the email id of the student-");
            scanf("%s", &s.email);
            fflush(stdin);
            printf("Enter the address details of the student-");
            fgets(s.address, 100, stdin);
            printf("Enter the joining year of the student-");
            scanf("%d", &s.year);
            printf("Enter the joining date of student-");
            scanf("%d", &s.d);
            printf("Enter the joining month of student-");
            scanf("%d", &s.mo);
            printf("Enter the class of the student");
            scanf("%d", &s.class);
            printf("Enter the section of the student");
            scanf("%s", &s.section);
            printf("Enter the roll no of the student");
            scanf("%d", &s.rollno);
            printf("Do you have any sibling?");
            scanf("%s", &s.sib);
            printf("Enter the student's date of birth ");
            scanf("%d", &s.dob);
            printf("Enter the student's month of birth ");
            scanf("%d", &s.mob);
            printf("Enter the student's year of birth ");
            scanf("%d", &s.mob);
            printf("Enter total English mark of student");
            scanf("%d", &s.tem);
            printf("Enter total Maths mark of student");
            scanf("%d", &s.tmm);
            printf("Enter total science mark of student");
            scanf("%d", &s.tsm);
            printf("Enter total Hindi mark of student");
            scanf("%d", &s.thm);
            printf("Enter total social studies mark of student");
            scanf("%d", &s.tssm);
            printf("Enter total attendance of the student ");
            scanf("%d", &s.attendance);
            printf("Enter extra curricular activities Grade of the student");
            scanf("%s", &s.eca);
            printf("Did the student submit the TC");
            scanf("%s", &s.tc);

            s.total = s.tem + s.tmm + s.tsm + s.thm + s.tssm;
            s.percentage = (s.total / 6) * 100;
            fwrite(&s, sizeof(s), 1, fp1);
        }
    }

    fclose(fp);
    fclose(fp1);

    if (found == 0)
    {
        printf("Sorry No Record Student Found\n\n");
    }
    else
    {
        fp = fopen("Data.DAT", "wb");
        fp1 = fopen("temp.dat", "rb");

        while (1)
        {
            fread(&s, sizeof(s), 1, fp1);

            if (feof(fp1))
            {
                break;
            }
            fwrite(&s, sizeof(s), 1, fp);
        }
    }
    fclose(fp);
    fclose(fp1);
}

void rc()
{
    FILE *fp;
    struct student s;
    int id, found = 0;
    fp = fopen("Data.DAT", "rb");
    printf("\nEnter the student roll no:");
    scanf("%d", &id);
    while (1)
    {
        fread(&s, sizeof(s), 1, fp);
        if (feof(fp))
        {
            break;
        }
        if (s.rollno == id)
        {
            found = 1;
            printf("\n========================================================================\n\n");
            printf("\t\t Student REPORT CARD of %d\n\n", s.rollno);
            printf("==========================================================================\n\n");

            printf("rollno:%d\t", s.rollno);
            printf("name:%s\t", s.name);
            printf("Surname:%s\t", s.surname);
            printf("Gender:%s", s.Gender);

            printf("Maths:%d\t", s.tmm);
            printf("English:%d\t", s.tem);
            printf("Science:%d\t", s.tsm);
            printf("Hindi:%d\t", s.thm);
            printf("Social Studies:%d\t", s.tssm);
            printf("Total attendance=%d\t", s.attendance);
            printf("Extre curricular activites:%s\t", s.eca);
            printf(":TC submission:%s\t", s.tc);
            printf("total:%d\t", s.total);
            printf("average:%f\n", s.percentage);
        }
    }
    if (found == 0)
    {
        printf("\nSorry No Record Found");
    }
    fclose(fp);
}

void search()
{
    FILE *fp;
    struct student s;
    int id, found = 0;
    fp = fopen("Data.DAT", "rb");
    printf("\nEnter the student roll no:");
    scanf("%d", &id);
    while (1)
    {
        fread(&s, sizeof(s), 1, fp);
        if (feof(fp))
        {
            break;
        }
        if (s.rollno == id)
        {
            found = 1;
            printf("\n=================================================================\n\n");
            printf("\t\t Student Record of %d\n\n", s.rollno);
            printf("================================================================\n\n");
            printf("Name of the student-%s\n", s.name);
            printf("Roll no of the student-%d\n", s.rollno);
            printf("class of the student-%d\n", s.class);
            printf("Section of the student-%s\n", s.section);

            printf("=============================================================\n\n");
        }
    }
    if (found == 0)
    {
        printf("\nSorry No Record Found");
    }
    fclose(fp);
}

void all()
{
    FILE *fp;
    struct student s;

    fp = fopen("Data.DAT", "rb");

    printf("\n===============================================================\n\n");
    printf("\t\t All student Details\n\n");
    printf("===============================================================\n\n");

    while (1)
    {
        fread(&s, sizeof(s), 1, fp);

        if (feof(fp))
        {
            break;
        }

        printf("\nrollno:%d\n", s.rollno);
        printf("name:%s\n", s.name);
    }
    printf("====================================================================\n\n");

    fclose(fp);
}

void password()
{
    FILE *fp;
    int i = 0, count = 0;
    char c[6], ch[6], a, b;
    printf("\nEnter 6 character password");
    fp = fopen("password.txt", "r");
    while ((b = getc(fp)) != EOF)
    {
        c[i] = b;
        i++;
    }
    for (i = 0; i < 6; i++)
    {
        a = getch();
        ch[i] = a;
        printf("*");
        if (ch[i] == c[i])
        {
            count++;
        }
    }
    if (count == 6)
    {
        printf("\nlogin success");
    }
    else
    {
        printf("\nlogin failed ");
        password();
    }
    fclose(fp);
}
void cpassword()
{
    FILE *p;
    char ch[6], c[6];
    printf("\n enter  the new password");
    scanf("%s", ch);
    p = fopen("password.txt", "w");

    for (int i = 0; i < 6; i++)
    {
        fprintf(p, "%c", ch[i]);
    }

    fclose(p);
}

void id()
{
    FILE *fp;
    struct student s;
    int id, found = 0;
    fp = fopen("Data.DAT", "rb");
    printf("\nEnter the student roll no;");
    scanf("%d", &id);
    while (1)
    {
        fread(&s, sizeof(s), 1, fp);
        if (feof(fp))
        {
            break;
        }
        if (s.rollno == id)
        {
            found = 1;
            printf("\n========================================================================\n\n");
            printf("\t\t Student ID CARD of %d\n\n", s.rollno);
            printf("==========================================================================\n\n");

            printf("rollno:%d\n", s.rollno);
            printf("name:%s\n", s.name);
            printf("Surname:%s\n", s.surname);
            printf("Gender:%s\n", s.Gender);
            printf("phone  no-%d\n", s.phonenumber);
            printf("Fathers Name-%s\n", s.fathername);
            printf("Class-%d\n", s.class);
            printf("Sectiom-%s\n", s.section);
            printf("address-%s\n", s.address);
        }
    }
    if (found == 0)
    {
        printf("\nSorry No ID Found");
    }
    fclose(fp);
}