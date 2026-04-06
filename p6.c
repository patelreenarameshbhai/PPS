#include<stdio.h>
#include<string.h>
#define MAX 100
struct student
{
  char name[50];
  int roll_no;
  float marks;
  char grade;
};
int main()
{
struct student s[100];

  int n,i;
  printf("enter number of student");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("\n enter details of student %d",i+1);
    printf("\n enter name: ");
    scanf(" %s",s[i].name);
    printf("\n enter roll no");
    scanf("%d",&s[i].roll_no);
    printf("\n enter marks");
    scanf("%f",&s[i].marks);
    printf("\n enter grade ");
    scanf(" %c",&s[i].grade);
  }
  for(i=0;i<n;i++)
  {
    printf("\n student %d",i+1);
    printf("\n name =%s",s[i].name);
    printf("\n roll_no =%d",s[i].roll_no);
    printf("\n marks =%f",s[i].marks);
    printf("\n grade =%c",s[i].grade);
  }
  return 0;
  }
