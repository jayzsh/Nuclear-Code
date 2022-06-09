#include <stdio.h>
#define NUM 6

struct Student
{
  int roll;
  char name[100];
  int age;
  char addr[200];
} stud[NUM];

void print_age_14()
{
  printf("\nStudents with age 14 are: \n");
  for (int i = 0; i < 6; i++)
    if (stud[i].age == 14)
      printf("%s\n", stud[i].name);
}

void print_even_roll()
{
  printf("\nStudents with even roll no. are: \n");
  for (int i = 0; i < 6; i++)
    if (stud[i].roll % 2 == 0 && stud[i].roll != 0)
      printf("%s\n", stud[i].name);
}

void print_with_roll()
{
  printf("\nStudents with roll number: \n");
  for (int i = 0; i < 6; i++)
    if (stud[i].roll) {
      printf(
        "Roll: %d, Name: %s, Age: %d, Address: %s\n",
        stud[i].roll,
        stud[i].name,
        stud[i].age,
        stud[i].addr
      );
    }
}

int main()
{
  int roll, age;
  char name[100], addr[200];
  
  for (int i = 0; i < NUM; i++) {
    printf("Enter roll (0 to skip this), name, age (11 - 14 only) and address of student %d\n", i);
    scanf("%d\n", &roll); stud[i].roll = roll;
    gets(name); strcpy(stud[i].name, name);
    scanf("%d\n", &age); stud[i].age = age;
    gets(addr); strcpy(stud[i].addr, addr);
    fflush(stdin);
  }
  
  print_age_14();
  print_even_roll();
  print_with_roll();
}