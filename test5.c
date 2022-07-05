#include <stdio.h>
#include <conio.h>
static int n = 0;
struct STUDENT
{
	int age, roll_no, maths, physics, chemistry, total;
	char name[10];
	float avg;
};
int main()
{
	void add();
	void password();
	void displayAll();
	void record();
	void del();
	void marksheet();
	void modify();
	void changePassword();
	int i, count = 0, a, n = 0, r, m, ms;
	printf("\n\t\t\t\t========================================================\n");
	printf("\n\t\t\t\t\t\t   STUDENT RECORDS\n");
	printf("\n\t\t\t\t========================================================\n");

	while (1)
	{
		printf("\n----------------------");
		printf("\nchoose an option below");
		printf("\n----------------------");
		printf("\n1.add a record");
		printf("\n2.delete a record");
		printf("\n3.modify a record");
		printf("\n4.generate marksheet");
		printf("\n5.search a record");
		printf("\n6.display all records");
		printf("\n7.change password");
		printf("\n8.exit");
		printf("\n----------------------\n");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
		{
			password();
			add();
			break;
		}
		case 2:
		{
			password();
			del();
			break;
		}
		case 3:
		{
			password();
			modify();
			break;
		}
		case 4:
		{
			marksheet();
			break;
		}
		case 5:
		{
			record();
			break;
		}
		case 6:
		{
			displayAll();
			break;
		}
		case 7:
		{
			password();
			changePassword();
			break;
		}
		case 8:
		{
			exit(0);
		}
		}
	}
}
void add()
{
	int i;
	struct STUDENT s;
	int size;
	FILE *fp;					  // file pointer
	size = sizeof(s);			  // sizeof() returns the size of variable in bytes
	fp = fopen("Data.DAT", "ab"); // Creating an object of  file for performing functions on it,ab means append mode ,.dat is a binary file
	printf("\nenter roll no for record\n");
	scanf("%d", &s.roll_no);
	printf("enter name\n");
	scanf("%s", s.name);
	printf("enter age\n");
	scanf("%d", &s.age);
	printf("enter maths marks\n");
	scanf("%d", &s.maths);
	printf("enter physics marks\n");
	scanf("%d", &s.physics);
	printf("enter chemistry marks\n");
	scanf("%d", &s.chemistry);
	s.total = s.maths + s.physics + s.chemistry;
	s.avg = s.total / 3;
	fwrite(&s, size, 1, fp); // writing all the details of students in the file ,& operator is required in fwrite()
	fclose(fp);				 // closing the file
	printf("\nrecord successfully added");
}

void password()
{
	FILE *fp; // File pointer
	int i = 0, count = 0;
	printf("\nenter password");
	char ch[6], c[6], a, b;
	fp = fopen("password.txt", "r"); // Creating an object of  file for performing functions on it, "r" means read mode
	while ((b = getc(fp)) != EOF)	 // getc() function reads every char one at a time , the while loop continues until it reaches end of file(EOF)
	{
		c[i] = b; // the passord is then stored in c[] array
		i++;
	}
	for (i = 0; i < 6; i++)
	{
		a = getch(); // getch() returns the charcter immediately without hitting enter , this also reads  one char at a time
		ch[i] = a;	 // the entered password is stored in ch[] array
		printf("*");
		if (ch[i] == c[i]) // checking if the characters are same one by one
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
		printf("\nlogin failed re ");
		password();
	}
	fclose(fp); // fclose() function closes the file
}
void displayAll()
{
	FILE *fp; // file pointer
	struct STUDENT s;
	fp = fopen("Data.DAT", "rb"); // rb = read mode , b for binary file
	printf("\n========================================================\n\n");
	printf("\t\t All Student Details\n\n");
	printf("========================================================\n\n");
	while (1)
	{
		fread(&s, sizeof(s), 1, fp); // reading all the details from the file
		if (feof(fp))				 // feof checks if it has reached EOF or not
		{
			break;
		}
		printf("\nrollno:%d\t", s.roll_no);
		printf("name:%s\t", s.name);
		printf("age:%d\t", s.age);
		printf("total:%d\n", s.total);
	}
	printf("========================================================\n\n");

	fclose(fp);
}
void record()
{
	FILE *fp;
	struct STUDENT s;
	int id, found = 0;
	fp = fopen("Data.DAT", "rb"); // rb = read mode , b for binary file
	printf("\nEnter the student roll no:");
	scanf("%d", &id);
	while (1)
	{
		fread(&s, sizeof(s), 1, fp); // reading the student details from the file
		if (feof(fp))				 // feof checks if it has reached EOF or not
		{
			break;
		}
		if (s.roll_no == id) // checking if roll no exists or not
		{
			found = 1;
			printf("\n========================================================\n\n");
			printf("\t\t Student Record of %d\n\n", s.roll_no);
			printf("========================================================\n\n");
			printf("rollno:%d\t", s.roll_no);
			printf("name:%s\t", s.name);
			printf("age:%d\t", s.age);
			printf("total:%d\n", s.total);
			printf("========================================================\n\n");
		}
	}
	if (found == 0)
	{
		printf("\nSorry No Record Found");
	}
	fclose(fp);
}
void del()
{
	FILE *fp, *fp1;
	struct STUDENT s, s1;
	int id, found = 0;

	fp = fopen("Data.DAT", "rb");
	fp1 = fopen("temp.dat", "wb"); // w =write,b=binary

	printf("\nEnter student roll no you want to Delete:");
	scanf("%d", &id);
	while (1)
	{
		fread(&s, sizeof(s), 1, fp); // reading the student details

		if (feof(fp)) // checking end of file
		{
			break;
		}
		if (s.roll_no == id)
		{
			found = 1;
		}
		else
		{
			fwrite(&s, sizeof(s), 1, fp1); /*here , it is writing all the records of students other than the student matching the roll no*/
		}
	}
	fclose(fp);	 // saving the files
	fclose(fp1); // saving the files

	if (found == 0)
	{
		printf("Sorry No Record Found\n\n");
	}
	else
	{
		fp = fopen("Data.DAT", "wb");
		fp1 = fopen("temp.dat", "rb");

		while (1)
		{
			fread(&s, sizeof(s), 1, fp1); // reading all the contents into the stream

			if (feof(fp1))
			{
				break;
			}
			fwrite(&s, sizeof(s), 1, fp); // writing all the contents from the temp file
		}
	}
	fclose(fp);
	fclose(fp1);
}
void marksheet()
{
	FILE *fp;
	struct STUDENT s;
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
		if (s.roll_no == id)
		{
			found = 1;
			printf("\n========================================================\n\n");
			printf("\t\t Student Marksheet of %d\n\n", s.roll_no);
			printf("========================================================\n\n");

			printf("rollno:%d\t", s.roll_no);
			printf("name:%s\t", s.name);
			printf("maths:%d\t", s.maths);
			printf("physics:%d\t", s.physics);
			printf("chemistry:%d\t", s.chemistry);
			printf("total:%d\t", s.total);
			printf("average:%2f\n", s.avg);

			printf("========================================================\n\n");
		}
	}
	if (found == 0)
	{
		printf("\nSorry No Record Found");
	}
	fclose(fp);
}
void modify()
{
	FILE *fp, *fp1;
	struct STUDENT s;
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
		else if (s.roll_no == id)
		{
			found = 1;
			printf("enter roll no for record\n");
			scanf("%d", &s.roll_no);
			printf("enter name\n");
			scanf("%s", s.name);
			printf("enter age\n");
			scanf("%d", &s.age);
			printf("enter maths marks\n");
			scanf("%d", &s.maths);
			printf("enter physics marks\n");
			scanf("%d", &s.physics);
			printf("enter chemistry marks\n");
			scanf("%d", &s.chemistry);
			s.total = s.maths + s.physics + s.chemistry;
			s.avg = s.total / 3;
			fwrite(&s, sizeof(s), 1, fp1); // writing the modified values onto the fle
		}
		else
		{
			fwrite(&s, sizeof(s), 1, fp1); // writing unmodified values onto temp file
		}
	}
	fclose(fp);
	fclose(fp1);
	if (found == 0)
	{
		printf("Sorry No Record Found\n\n");
	}
	else
	{
		fp = fopen("Data.DAT", "wb");
		fp1 = fopen("temp.dat", "rb");

		while (1)
		{
			fread(&s, sizeof(s), 1, fp1); // reading onto stream

			if (feof(fp1))
			{
				break;
			}
			fwrite(&s, sizeof(s), 1, fp); // writing modified in original file
		}

		fclose(fp);
		fclose(fp1);
	}
}
void changePassword()
{
	FILE *fp;
	int i;
	char ch[6], c[6], count = 0;
	fp = fopen("password.txt", "w"); // w means write only
	printf("\nenter new passowrd with 6 character");
	scanf("%s", ch);
	printf("\nre-enter password");
	scanf("%s", c);
	for (i = 0; i < 6; i++)
	{
		if (ch[i] == c[i])
			count++;
	}
	if (count == 6)
	{
		fprintf(fp, "%s", ch); // printing onto the text file
		printf("\npassword successfully changed");
	}
	else
	{
		printf("\nnot matching");
		changePassword();
	}
	fclose(fp);
}
