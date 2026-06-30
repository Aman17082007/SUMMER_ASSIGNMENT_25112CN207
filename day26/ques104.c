// program to create quiz application
#include <stdio.h>

int main()
{
    int answer, score = 0;

    printf("===== Quiz Application =====\n");

    // Question 1
    printf("\n1. What is the capital of India?");
    printf("\n1. Mumbai");
    printf("\n2. New Delhi");
    printf("\n3. Kolkata");
    printf("\n4. Chennai");
    printf("\nEnter your answer: ");
    scanf("%d", &answer);

    if (answer == 2)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong!\n");
    }

    // Question 2
    printf("\n2. Which language is used for C programming?");
    printf("\n1. Python");
    printf("\n2. Java");
    printf("\n3. C");
    printf("\n4. HTML");
    printf("\nEnter your answer: ");
    scanf("%d", &answer);

    if (answer == 3)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong!\n");
    }

    // Question 3
    printf("\n3. How many days are there in a week?");
    printf("\n1. 5");
    printf("\n2. 6");
    printf("\n3. 7");
    printf("\n4. 8");
    printf("\nEnter your answer: ");
    scanf("%d", &answer);

    if (answer == 3)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong!\n");
    }

    // Display final score
    printf("\n===== Quiz Completed =====\n");
    printf("Your score is: %d/3\n", score);

    if (score == 3)
        printf("Excellent!\n");
    else if (score == 2)
        printf("Good job!\n");
    else
        printf("Keep practicing!\n");

    return 0;
}