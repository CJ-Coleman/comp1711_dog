#include <stdio.h>

struct student
{
    char name [20];
    char studentID [10];
    unsigned mark;
};

int main()
{
    struct student new_student = {
         .name ="Mike Oxlong",
         .studentID = "28932123",
         .mark = 35
          };

    /*
    printf("Student name: %s", new_student.name);
    printf("\nStudent ID: %s", new_student.studentID);
    printf("\nFinal Mark: %u", new_student.mark);
    printf("\n");
    */
    




    return 0;
    
}