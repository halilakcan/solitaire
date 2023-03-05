#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DECK_SIZE 52
#define MAX_CARDS_IN_STACK 13
#define MAX_STACKS 7
#define MAX_MOVES 3

enum Suit { CLUBS, DIAMONDS, HEARTS, SPADES };
enum Rank { ACE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING };

struct Card {
    enum Suit suit;
    enum Rank rank;
    int face_down;
};

struct Stack {
    int num_cards;
    struct Card cards[MAX_CARDS_IN_STACK];
};

struct Game {
    int num_moves;
    struct Stack draw_pile;
    struct Stack discard_pile;
    struct Stack foundation_stacks[4];
    struct Stack play_stacks[MAX_STACKS];
};

// Initialize a deck of cards
void init_deck(struct Card deck[]) {
    int i, j, k = 0;
    for (i = CLUBS; i <= SPADES; i++) {
        for (j = ACE; j <= KING; j++) {
            deck[k].suit = i;
            deck[k].rank = j;
            deck[k].face_down = 1;
            k++;
        }
    }
}

// Shuffle the deck of cards
void shuffle_deck(struct Card deck[]) {
    int i, j;
    struct Card temp;
    for (i = 0; i < DECK_SIZE; i++) {
        j = rand() % DECK_SIZE;
        temp = deck[i];
        deck[i] = deck[j];
        deck[j] = temp;
    }
}

// Initialize the draw pile and discard pile
void init_draw_discard_piles(struct Game *game) {
    int i;
    for (i = 0; i < DECK_SIZE; i++) {
        if (i < 24) {
            game->draw_pile.cards[i] = game->play_stacks[i % 7].cards[0];
            game->draw_pile.cards[i].face_down = 1;
            game->play_stacks[i % 7].num_cards--;
        }
        else {
            game->discard_pile.cards[i - 24] = game->play_stacks[i % 7].cards[0];
            game->discard_pile.cards[i - 24].face_down = 0;
            game->play_stacks[i % 7].num_cards--;
        }
    }
    game->draw_pile.num_cards = 24;
    game->discard_pile.num_cards = 28;
}

// Initialize the game
void init_game(struct Game *game) {
    int i, j;
    struct Card deck[DECK_SIZE];
    init_deck(deck);
    shuffle_deck(deck);
    game->num_moves = 0;
    game->draw_pile.num_cards = 0;
    game->discard_pile.num_cards = 0;
    for (i = 0; i < 4; i++) {
        game->foundation_stacks[i].num_cards = 0;
    }
    for (i = 0; i < 7; i++) {
        game->play_stacks[i].num_cards = i + 1;
        for (j = 0; j <= i; j++) {
            game->play_stacks[i].cards[j] = deck[i + 7
