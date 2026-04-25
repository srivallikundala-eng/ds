#include<stdio.h>
#include<string.h>
struct employe
{
	int empno;
	char name[10];
	float salary;
}e1={101,"srivalli",9200},e2;
int main()
{
 struct employe e3={103,"junnu",4100},e4;
 e2.empno=102;
 strcpy(e2.name,"sravani");
 e2.salary=4100;
 printf("enter e4 empno");
 scanf("%d",&e4.empno);
 printf("enter e4 name");
 scanf("%s",&e4.name);
 printf("enter e4 salary");
 scanf("%f",&e4.salary);
 printf("%d %s %f",e1.empno,e1.name,e1.salary);
  printf("\n%d %s %f",e2.empno,e2.name,e2.salary);
  printf("\n%d %s %f",e3.empno,e3.name,e3.salary);
  printf("\n%d %s %f",e4.empno,e4.name,e4.salary);
 return 0;
}

