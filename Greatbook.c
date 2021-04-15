#include<stdio.h>
struct Student
{
Char Sname[100];
Int scores[100];
Char grade;
Float result;
};
Typedef struct Student student;
Struct GradeBook
{
Char course[100];
int num_weights;
float weights[100];
int num_student;
Student students[100];
};
Typedef struct GradeBook gradebook;
Void
input_1(gradebook * one)
{
int i;
printf(‘Enter course name:”);
scanf(“%d”,&one->course);
printf(“Enter number of weights :”);
scanf(“%d”,&one->num_weights):
printf(“Enter number of students:”);
scanf(“%d”,&one->num_student);
printf(‘Enter the weights:”);
for(i=0;i<one->num_weights;i++)
scanf(“%f:,&one->weights[i]);
for(i=0;i<one->num_student;i++)
}
}
}
Void
input_n(int n.gradebook gb[])
{
for(int i =0;i<n;i++)
input_1(&gb[i]);
}
Char
scores_to_grade(float res)
{
if(res>=0;&&res<60)
return ‘F’;
else if(res>=60&& res<70)
return ‘D’;
Else if (res>=70&&res<80)
return ‘C’;
else  if(res>=80&&res<90)
return ‘B’;
Else
return ;A’;
}
Void 
compute_score_1(gradebook*one)
{
Float w+0;
for(int i =0;i<one->num_weights;i++)
w+=one->weights[i];
Int i;
for(i=0;i<one->num_student;i++)
{
one->student[i].result=0.0;
for{i=0;i<one->num_student;i++)
{
one->student[i].result);
}
Void 
compute_score_n(int n,gradebook gb[])
{
for(i=0;i<n;i++)
compute_score_1(&gb[i]);
}
Void
output_1(gradebook*one)
{
printf(“%s\n”,one->course);
for(int i=0;i<one->num_student;i++)
printf(“%s\t%f\t%c\n”,one->students[i].Sname,one->students[i];result,one->students[i].grade);
}
Void
output_n(int n,gradebook gb[])
{
for(int i=0;i<n;i++)
output_1(&gb[i]);
}
Int 
main()
{
Int n;
printf(‘Enter the number of gradebooks”);
scanf(‘%d”,&n);
Gradebook gb[n];
input_n(n,gb);
compute_score_n(n,gb);
output_n(n.gb);
return 0;
}
