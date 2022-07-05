#include <stdio.h>
#include <string.h>
int total;
int cap = 0;
int small = 0;
int j;
char a[1000], b[1000];
int vowels, consonants, space, number, count = 0;
void pt(char *str)
{

	for (int i = 0; str[i] != 0; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			cap++;
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			small++;
		}
		else
		{
		}
		j++;
	}
	for (int i = 0; str[i]; i++)
	{
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
		{

			if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
			{
				vowels++;
			}
			else
				consonants++;
		}

		if (str[i] >= 48 && str[i] <= 57)
		{
			count++;
		}
		else if (str[i] == ' ')
		{
			space++;
		}
	}
	total = strlen(str);
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			b[i] = str[i]-32;
		}
		else if (str[i] >= 65 && str[i] <= 90)
		{
			b[i] = str[i] + 32;
		}
		else
		b[i] = str[i];
	}
}

void st(char *kk)
{

	for (int i = 0; kk[i]; i++)
	{
		if (kk[i] == 82 || kk[i] == 114)
		{
			kk[i] = '*';
			a[i] = kk[i];
		}
		else if (kk[i] == 144 && kk[i] == 82)
		{
			kk[i] = '@';
			a[i] = kk[i];
		}
		a[i] = kk[i];
	}
}

int main()
{
	char str[1000];

	printf("enter any string:");
	gets(str);
	pt(str);

	printf("capital letter:%d\n",cap);
	printf("small letter:%d\n", small);
	printf("vowels:%d\n", vowels);
	printf("consonants = %d\n", consonants);
	printf("numbers = %d\n", count);
	printf(" white space= %d\n", space);
	printf("total words in the string:%d\n", total);
	printf("the converted string from capital to small and viceversa:%s\n", b);
	st(str);
	printf("the letter 'R' and 'r' converted to @ :%s\n", a);

	return 0;
}