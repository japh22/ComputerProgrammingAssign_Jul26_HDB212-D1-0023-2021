#include <stdio.h>

int main()
{
    int marks[10];
    int i;
    int highest, lowest;
    float average, total = 0;

    printf("====================================\n");
    printf("       SECTION A - ARRAYS\n");
    printf("====================================\n");
    printf("Name: Ekirapa Japheth\n");
    printf("Registration Number: HDB212-D1-0023/2021\n");
    printf("Course: BBIT\n\n");

    printf("Enter marks for 10 students:\n");

    for(i = 0; i < 10; i++)
    {
        printf("Enter mark for student %d: ", i + 1);
        scanf("%d", &marks[i]);
        total = total + marks[i];
    }

    average = total / 10;

    highest = marks[0];
    lowest = marks[0];

    for(i = 1; i < 10; i++)
    {
        if(marks[i] > highest)
        {
            highest = marks[i];
        }

        if(marks[i] < lowest)
        {
            lowest = marks[i];
        }
    }

    printf("\n====================================\n");
    printf("              RESULTS\n");
    printf("====================================\n");

    printf("Average mark: %.2f\n", average);
    printf("Highest mark: %d\n", highest);
    printf("Lowest mark: %d\n", lowest);

    printf("\nMarks greater than the average:\n");

    for(i = 0; i < 10; i++)
    {
        if(marks[i] > average)
        {
            printf("%d ", marks[i]);
        }
    }

    printf("\n\nProgram completed successfully.\n");

    return 0;
}
