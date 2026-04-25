#include<stdio.h>
struct adress
{
	char street[10];
	char city[10];
	long int pcode;
};
struct student
{
	int roll_no;
	char name[10];
	float per;
	struct adress a;
};
int main()
struct student s={613,"srivalli",85.55,{"aditya","kmg",533450}};
printf("%d %s %f %s %s %ld",s.roll_no,s.name,s.per,s.a.street,s.a.city,s.a.pcode);
return 0;
}
