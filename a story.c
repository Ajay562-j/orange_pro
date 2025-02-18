#include <stdio.h>

int main() {
    int choice;

    printf("Welcome to the Adventure!\n");
    printf("You are walking in the woods and come to a fork in the path.\n");
    printf("Do you:\n");
    printf("1.Take the left path\n");
    printf("2.Take the right path\n");
    printf("Choose (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("\nYou take the left path and find a peaceful clearing with flowers.\n");
        printf("You relax and enjoy the scenery. You win!\n");
    } else if (choice == 2) {
        printf("\nYou take the right path and encounter a hungry bear!\n");
        printf("The bear chases you away, and you decide to return home. Better luck next time!\n");
    } else {
        printf("\nInvalid choice. You stand at the fork forever, unsure what to do.\n");
    }

    return 0;
}

