#include<stdio.h>
int main()
{
char name[ ] = "Hamza Khan ";
int age = 17;
char student_class[ ] = "F.E";
char division = 'C';
char uin[ ] = "UIN261P045";
printf("==============================\n");
printf("    STUDENT PROFILE           \n");
printf("==============================\n");
printf("Name:\t\t%s\nAge:\t\t%d\nClass:\t\t%s\nDivision:\t%c\nUIN:\t\t%s\n",
name, age, student_class, division, uin);
printf("==============================\n");
return 0;
}