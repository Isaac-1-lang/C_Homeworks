#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Define an enum for the four suits of a deck of cards
enum Suit {
    CLUB = 1, DIAMOND, HEART, SPADE
};

// Function to get the name of the suit
char* getSuitName(enum Suit suit) {
    switch (suit) {
        case CLUB: return "Club";
        case DIAMOND: return "Diamond";
        case HEART: return "Heart";
        case SPADE: return "Spade";
        default: return "Invalid";
    }
}

// Function to deal a random card
void dealCard() {
    int suit = rand() % 4 + 1;  // Random suit (1-4)
    int rank = rand() % 13 + 1;  // Random rank (1-13)

    enum Suit cardSuit = (enum Suit)suit;
    printf("You have drawn the %d of %s.\n", rank, getSuitName(cardSuit));
}

int main() {
    // Initialize random number generator
    srand(time(0));

    // Deal a card
    dealCard();

    return 0;
}
