#include<stdio.h>

int main()
{
  int rollno, std, maths, physics, english, chemistry, cs,pe;
  char name[30], school_name[30],mother_name[30],father_name[30];

  printf("Enter your Roll No:");
  scanf("%d", &rollno);

  printf("Enter your Name:");
  scanf(" %s", name);
  
  printf("Enter your Mother Name:");
  scanf(" %s", mother_name);
  
  printf("Enter your Father Name:");
  scanf(" %s", father_name);

  printf("Enter your School Name:");
  scanf(" %s", school_name);
  
  printf("Enter your Standard:");
  scanf("%d", &std);

  printf("Enter marks of Maths:");
  scanf("%d", &maths);

  printf("Enter marks of Physics:");
  scanf("%d", &physics);

  printf("Enter marks of English:");
  scanf("%d", &english);

  printf("Enter marks of Chemistry:");
  scanf("%d", &chemistry);

  printf("Enter marks of Computer Science:");
  scanf("%d", &cs);

  printf("Enter marks of Physical Education:");
  scanf("%d", &pe);

  printf("***************************************************\n");
  printf("MARKSHEET OF STANDARD:%d, %s\n", std, school_name);
  printf("***************************************************\n");
  printf("Roll No.: %d Student Name: %s\n", rollno, name);
  printf("***************************************************\n");
  printf("SUBJECT\t\t\tMARKS\n");
  printf("***************************************************\n");
  printf("MATHEMATICS\t\t %d \n", maths);
  printf("PHYSICS\t\t\t %d \n", physics);
  printf("ENGLISH\t\t\t %d \n", english);
  printf("CHEMISTRY\t\t %d \n", chemistry);
  printf("COMPUTER SCIENCE\t %d \n", cs);
  printf("PHYSICAL EDUCATION\t %d \n", cs);
  printf("***************************************************\n");
  printf("Total Marks:\t\t%d\n", maths+physics+english+cs+pe+chemistry);
  printf("***************************************************\n");

  return 0;
}