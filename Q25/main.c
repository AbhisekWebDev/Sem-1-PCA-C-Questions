#include <stdio.h>
#include <stdlib.h>

#define MAX_STUDENTS 5

struct Student {
 char name[50];
 int marks;
};

int main()
{
     struct Student students[MAX_STUDENTS];
     int i, maxIndex = 0;
     // Input information for 5 students
     for (i = 0; i < MAX_STUDENTS; ++i) {
         printf("Enter name of student %d: ", i + 1);
         scanf("%s", students[i].name);
         printf("Enter marks of student %d: ", i + 1);
         scanf("%d", &students[i].marks);
     }
     // Finding the student with the highest marks
     for (i = 1; i < MAX_STUDENTS; ++i) {
        if (students[i].marks > students[maxIndex].marks) {
        maxIndex = i;
        }
     }
     printf("\nStudent with the highest marks:\n");
     printf("Name: %s\n", students[maxIndex].name);
     printf("Marks: %d\n", students[maxIndex].marks);

     return 0;
}
