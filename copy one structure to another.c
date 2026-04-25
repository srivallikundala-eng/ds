#include<stdio.h>
struct student
{
	int roll_no;
	char name[10];
	float per;
};
int main()
{
	struct student s1={101,"valli",85.22},s2;
	printf("%d %s %f",s1.roll_no,s1.name,s1.per);
	s2=s1;
	printf("\n%d %s %f",s2.roll_no,s2.name,s2.per);
	return 0;
}
