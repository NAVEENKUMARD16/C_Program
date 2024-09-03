#include <stdio.h>

int main() {
    int age;

    // Prompt the user to enter their age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Check eligibility to vote
    if (age >= 21) {
        printf("You are eligible to vote!\n");
    } else {
        printf("You are not eligible to vote yet.\n");
    }

    return 0;
}

