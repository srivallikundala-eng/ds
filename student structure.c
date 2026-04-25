#include<stdio.h>
#include<string.h>
struct student
{
	 int rollno;
	char name[10];
	float per;
}s1={101,"valli",92.22},s2;
int main()
{
struct student s3={103,"sri",82.45},s4;
s2.rollno=102;
s2.per =73.25;
strcpy(s2.name,"sravani");
printf("enter s4 rollno");
scanf("%d",&s4.rollno);
printf("enter s4 per");
scanf("%f",&s4.per);
printf("enter s4 name");
scanf("%s",&s4.name);
printf("%d %s %f",s1.rollno,s1.name,s1.per);
printf("\n%d %s %f",s2.rollno,s2.name,s2.per);
printf("\n%d %s %f",s3.rollno,s3.name,s3.per);
printf("\n%d %s %f",s4.rollno,s4.name,s4.per);
return 0;
}

	

