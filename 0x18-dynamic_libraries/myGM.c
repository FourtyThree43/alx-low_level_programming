#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char* argv[]) {
    // Check that the user provided 6 command line arguments
    if (argc != 7) {
        printf("Usage: ./gm n1 n2 n3 n4 n5 bonus\n");
        return 1;
    }

    // Parse the user's chosen numbers from command line arguments
    int playerNumbers[6];
    for (int i = 1; i <= 6; i++) {
        int num = atoi(argv[i]);
        if (num < 1 || (i < 6 && num > 75) || (i == 6 && num > 15)) {
            printf("Invalid number: %d\n", num);
            return 1;
        }
        playerNumbers[i-1] = num;
    }

    // Generate the winning numbers
    srand(time(NULL));
    int winningNumbers[6];
    for (int i = 0; i < 5; i++) {
        int num;
        do {
            num = rand() % 75 + 1;
        } while (num == winningNumbers[0] || num == winningNumbers[1] || num == winningNumbers[2] || num == winningNumbers[3] || num == winningNumbers[4]);
        winningNumbers[i] = num;
    }
    winningNumbers[5] = rand() % 15 + 1;

    // Print out the winning numbers
    printf("Winning numbers: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", winningNumbers[i]);
    }
    printf("\n");

    // Check if the player's numbers match the winning numbers
    int numMatches = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (playerNumbers[i] == winningNumbers[j]) {
                numMatches++;
            }
        }
    }
    if (playerNumbers[5] == winningNumbers[5]) {
        printf("Bonus number matched!\n");
        numMatches++;
    }
    if (numMatches == 6) {
        printf("You win!\n");
    } else {
        printf("Better luck next time.\n");
    }

    return 0;
}
