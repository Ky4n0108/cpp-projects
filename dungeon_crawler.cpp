#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <limits>

using namespace std;

// Function to clear input buffer
void clearInput() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

// Function to print a separator line
void printLine() {
    cout << "==================================================" << endl;
}

int main() {
    // Seed the random number generator
    srand(time(0));

    // Player Stats
    string playerName;
    int playerHP = 100;
    int playerMaxHP = 100;
    int playerAttack = 15;
    int numPotions = 3;
    int potionHeal = 30;
    int score = 0;

    // Enemies
    string enemies[] = { "Goblin", "Skeleton", "Orc", "Dark Wizard" };
    int maxEnemyHP = 50;
    int enemyAttackDamage = 10;
    
    // Boss Logic
    int enemiesDefeated = 0;
    int bossThreshold = 5;
    bool bossSpawned = false;

    // Introduction
    printLine();
    cout << "       WELCOME TO THE DARK DUNGEON       " << endl;
    printLine();
    cout << "Enter your hero's name: ";
    getline(cin, playerName);

    cout << "\nWelcome, " << playerName << "! Your journey begins now..." << endl;
    cout << "You have entered a dangerous dungeon. Survive as long as you can!" << endl;

    bool running = true;

    while (running) {
        printLine();
        
        // Spawn a random enemy
        int enemyHealth = rand() % maxEnemyHP + 10; // 10 to 60 HP
        string enemy = enemies[rand() % 4];
        
        cout << "\t# A wild " << enemy << " appears! #\n";

        // Combat Loop
        while (enemyHealth > 0) {
            cout << "\n\tYour HP: " << playerHP << endl;
            cout << "\t" << enemy << "'s HP: " << enemyHealth << endl;
            cout << "\n\tWhat would you like to do?" << endl;
            cout << "\t1. Attack" << endl;
            cout << "\t2. Drink Potion (" << numPotions << " left)" << endl;
            cout << "\t3. Run Away" << endl;
            cout << "\t> ";

            string input;
            cin >> input;

            if (input == "1") {
                // Player Attacks
                int damageDealt = rand() % playerAttack + 10; // 10 to 25 damage
                int damageTaken = rand() % enemyAttackDamage; // 0 to 10 damage

                enemyHealth -= damageDealt;
                playerHP -= damageTaken;

                cout << "\n\t> You strike the " << enemy << " for " << damageDealt << " damage." << endl;
                cout << "\t> The " << enemy << " attacks you for " << damageTaken << " damage." << endl;

                if (playerHP < 1) {
                    cout << "\n\t> You have taken too much damage, you are too weak to go on!" << endl;
                    break;
                }
            }
            else if (input == "2") {
                // Drink Potion
                if (numPotions > 0) {
                    playerHP += potionHeal;
                    if (playerHP > playerMaxHP) playerHP = playerMaxHP;
                    numPotions--;
                    cout << "\n\t> You drink a health potion, healing yourself for " << potionHeal << "." << endl;
                    cout << "\t> You now have " << playerHP << " HP." << endl;
                    cout << "\t> You have " << numPotions << " potions left." << endl;
                }
                else {
                    cout << "\n\t> You have no potions left! Defeat enemies for a chance to get one!" << endl;
                }
            }
            else if (input == "3") {
                // Run Away
                cout << "\n\t> You run away from the " << enemy << "!" << endl;
                break; // Exit combat loop
            }
            else {
                cout << "\n\tInvalid command!" << endl;
            }
        }

        // Check if player died
        if (playerHP < 1) {
            cout << "\nYou limp out of the dungeon, weak from battle." << endl;
            break;
        }

        // Result of battle (if didn't run away)
        if (enemyHealth <= 0) {
            if (bossSpawned) {
                cout << "\n\t*** YOU HAVE SLAIN THE ANCIENT DRAGON! ***" << endl;
                cout << "\t*** YOU ARE THE HERO OF LEGENDS! ***" << endl;
                score += 5000;
                break; // Win game
            }

            cout << "\n\t# " << enemy << " was defeated! #" << endl;
            cout << "\t# You have " << playerHP << " HP left. #" << endl;
            score += 100;
            enemiesDefeated++;

            // Chance to find a potion
            if (rand() % 100 < 30) { // 30% chance
                numPotions++;
                cout << "\t# The " << enemy << " dropped a potion! #" << endl;
                cout << "\t# You now have " << numPotions << " potions. #" << endl;
            }
        }

        printLine();
        cout << "What would you like to do now?" << endl;
        cout << "1. Continue fighting" << endl;
        cout << "2. Exit dungeon" << endl;
        cout << "> ";
        
        string input;
        cin >> input;

        while (input != "1" && input != "2") {
            cout << "Invalid command! > ";
            cin >> input;
        }

        if (input == "2") {
            cout << "\nYou exit the dungeon, successful from your adventures!" << endl;
            break;
        }
    }

    printLine();
    cout << "Game Over!" << endl;
    cout << "Final Score: " << score << endl;
    cout << "Thanks for playing!" << endl;
    printLine();

    // Keep window open
    cout << "Press Enter to exit...";
    clearInput();
    cin.get();

    return 0;
}
