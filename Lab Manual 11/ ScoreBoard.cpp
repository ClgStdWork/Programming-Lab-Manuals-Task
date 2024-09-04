#include <stdio.h>
#include <string.h>

#define TEAM_SIZE 12
#define NAME_LENGTH 50

// Structure to store player information
typedef struct {
    char name[NAME_LENGTH];
    int number;
    int points;
} Player;

// Function prototypes
void PopulateArray(Player team[], int size);
void DisplayScoreBoard(Player team[], int size);
Player FindTopScorer(Player team[], int size);

int main() {
    Player team[TEAM_SIZE]; // Array to store team players

    // Populate the array with player data
    PopulateArray(team, TEAM_SIZE);

    // Display the scoreboard
    DisplayScoreBoard(team, TEAM_SIZE);

    // Find and display the top scorer
    Player topScorer = FindTopScorer(team, TEAM_SIZE);
    printf("\nTop Scorer: %s (Number %d) with %d points\n", topScorer.name, topScorer.number, topScorer.points);

    return 0;
}

// Function to populate the array with user-provided data
void PopulateArray(Player team[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter details for player %d:\n", i + 1);
        
        printf("Name: ");
        scanf(" %[^\n]%*c", team[i].name); // Input name with spaces
        
        // Input validation for player's number
        do {
            printf("Number: ");
            scanf("%d", &team[i].number);
            if (team[i].number < 0) {
                printf("Invalid input! Player number cannot be negative.\n");
            }
        } while (team[i].number < 0);

        // Input validation for points scored
        do {
            printf("Points Scored: ");
            scanf("%d", &team[i].points);
            if (team[i].points < 0) {
                printf("Invalid input! Points cannot be negative.\n");
            }
        } while (team[i].points < 0);

        printf("\n");
    }
}

// Function to display the scoreboard with each player's details
void DisplayScoreBoard(Player team[], int size) {
    int totalPoints = 0;

    printf("\nScoreboard:\n");
    printf("-------------------------------------------------\n");
    printf("| %-5s | %-20s | %-10s |\n", "No.", "Name", "Points");
    printf("-------------------------------------------------\n");

    for (int i = 0; i < size; i++) {
        printf("| %-5d | %-20s | %-10d |\n", team[i].number, team[i].name, team[i].points);
        totalPoints += team[i].points; // Calculate total points
    }

    printf("-------------------------------------------------\n");
    printf("Total Points Scored by the Team: %d\n", totalPoints);
}

// Function to find the top scorer in the team
Player FindTopScorer(Player team[], int size) {
    Player topScorer = team[0]; // Assume the first player is the top scorer

    for (int i = 1; i < size; i++) {
        if (team[i].points > topScorer.points) {
            topScorer = team[i]; // Update top scorer if current player has more points
        }
    }

    return topScorer;
}
