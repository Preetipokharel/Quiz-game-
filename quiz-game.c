
#include <stdio.h>

// Function prototypes
void quizGame();

int main() {
    int choice;
    
    while (1) {
        printf("\nMenu:\n");
        printf("1. Play Quiz Game\n");
        printf("2. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        if (choice == 2) {
            printf("Exiting...\n");
            break;
        }
        
        switch (choice) {
            case 1:
                quizGame();
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}

// Function to play a simple quiz game
void quizGame() {
    int score = 0, answer;
    
    printf("\nQuiz Game: Answer the following questions\n");
    
    printf("1. What is the largest organ in human body?\n");
    printf("1) Stomach  2) Liver  3) Skin  4) lungs\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 3) score++;
    
    printf("\n2. What is the process by which plant prepare food\n");
    printf("1) Phosphorolysis  2) Photosynthesis  3) Glycolysis  4) glycogenolysis\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2) score++;
    
    printf("\n3. Who wrote 'Harry Potter'?\n");
    printf("1) Charles Dickens  2) William Shakespeare  3) J.K. Rowling  4) Mark Twain\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 3) score++;
    
    printf("\nYour final score: %d/3\n", score);
}
