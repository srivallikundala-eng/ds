#include<stdio.h>
union student
{
	int roll_no;
	char name[10];
	float per;
};
int main()
{
	union student s={101,"sravani",85.52};
	printf("%d %s %f",s.roll_no,s.name,s.per);
	return 0;
}
