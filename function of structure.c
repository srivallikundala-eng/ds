#include<stdio.h>
#include<string.h>
struct student
{
	int roll_no;
	char name[10];
	float per;
}s1={101,"sravani",96.22},s2;
int main()
{
	struct student s3={103,"junnu",74.25};
	printf("enter s2 values");
	scanf("%d %s %f",&s2.roll_no,&s2.name,&s2.per);
	display(s1);
	display(s2);
	display(s3);
	return 0;
}
