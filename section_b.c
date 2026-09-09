#include <stdio.h>

struct Student
{
    char admissionNumber[30];
    char name[50];
    char course[50];
    int age;
    float catMarks;
};

void captureStudent(struct Student *student, int number)
{
    printf("\nEnter information for Student %d\n", number);

    printf("Admission Number: ");
    scanf(" %[^\n]", student->admissionNumber);

    printf("Student Name: ");
    scanf(" %[^\n]", student->name);

    printf("Course: ");
    scanf(" %[^\n]", student->course);

    printf("Age: ");
    scanf("%d", &student->age);

    printf("CAT Marks: ");
    scanf("%f", &student->catMarks);
}

void displayStudent(struct Student student, int number)
{
    printf("\n----------------------------------------\n");
    printf("Student %d\n", number);
    printf("----------------------------------------\n");
    printf("Admission Number: %s\n", student.admissionNumber);
    printf("Student Name: %s\n", student.name);
    printf("Course: %s\n", student.course);
    printf("Age: %d\n", student.age);
    printf("CAT Marks: %.2f\n", student.catMarks);
}

float calculateAverage(struct Student students[], int size)
{
    float total = 0;
    int i;

    for(i = 0; i < size; i++)
    {
        total = total + students[i].catMarks;
    }

    return total / size;
}

int main()
{
    struct Student students[5];
    float average;
    int i;

    printf("============================================\n");
    printf("       SECTION B - STUDENT RECORD\n");
    printf("============================================\n");
    printf("Name: Ekirapa Japheth\n");
    printf("Registration Number: HDB212-D1-0023/2021\n");
    printf("Course: BBIT\n");

    for(i = 0; i < 5; i++)
    {
        captureStudent(&students[i], i + 1);
    }

    printf("\n\n============================================\n");
    printf("             STUDENT RECORDS\n");
    printf("============================================\n");

    for(i = 0; i < 5; i++)
    {
        displayStudent(students[i], i + 1);
    }

    average = calculateAverage(students, 5);

    printf("\n============================================\n");
    printf("Average CAT Marks: %.2f\n", average);
    printf("============================================\n");

    printf("\nProgram completed successfully.\n");

    return 0;
}
