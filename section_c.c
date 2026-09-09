#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *numbers;
    int i;
    int total = 0;
    float average;

    printf("============================================\n");
    printf(" SECTION C - POINTERS AND DYNAMIC MEMORY\n");
    printf("============================================\n");
    printf("Name: Ekirapa Japheth\n");
    printf("Registration Number: HDB212-D1-0023/2021\n");
    printf("Course: BBIT\n\n");

    numbers = (int *)malloc(15 * sizeof(int));

    if(numbers == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter 15 integers:\n");

    for(i = 0; i < 15; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        total = total + numbers[i];
    }

    average = (float)total / 15;

    printf("\n============================================\n");
    printf("                 RESULTS\n");
    printf("============================================\n");
    printf("Total: %d\n", total);
    printf("Average: %.2f\n", average);

    free(numbers);

    printf("\nMemory has been freed successfully.\n");
    printf("Program completed successfully.\n");

    return 0;
}
