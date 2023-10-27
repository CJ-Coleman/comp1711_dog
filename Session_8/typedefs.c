#include <stdio.h>

typedef struct 
{
    char name [20];
    char studentID [10];
    unsigned mark;
}student;

int main()
{
    int n = 3;
    int i;
    student new_students [3];

    for (i = 1; i <= 3; i++)
    {
        sprintf(new_students[i].name,"Student %i", i);
        sprintf(new_students[i].studentID, "1852769128%i", i);
        new_students[i].mark = 35 + (13 + (i * 17)) % 65;
    }
    /*
    printf("Student name: %s", new_student.name);
    printf("\nStudent ID: %s", new_student.studentID);
    printf("\nFinal Mark: %u", new_student.mark);
    printf("\n");
    */
    




    return 0;
    
}