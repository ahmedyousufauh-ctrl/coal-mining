#include<stdio.h>
#include<string.h>
struct student
{
	char name[20];
	int roll;
	float marks;
};
int main()
{
	struct student s;
	s.roll=50;
	s.marks=100;
	strcpy(s.name,"cholan");
	printf("%d %f %s",s.roll,s.marks,s.name);
    return 0;     	
}
