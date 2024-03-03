#ifndef DECK_H
#define DECK_H

#include <stdlib.h>

/**
 * kind_e_enum- Enumeration of card suits.
 * @SPADE: Spades suit.
 * @HEART: Hearts suit.
 * @CLUB: Clubs suit.
 * @DIAMOND: Diamonds suit.
 */
typedef kind_e_enum
{
	SPADE = 0,
	HEART,
	CLUB,
	DIAMOND
} kind_t;

/**
 * struct card_s - Playing card
 *
 * @value: Value of the card
 * From "Ace" to "King"
 * @kind: Kind of the card
 */
typedef struct card_s
{
	const char *value;
	const kind_t kind;
} card_t;

/**
 * struct node_deck - Deck of card
 *
 * @card: Pointer to the card of the node
 * @prev: Pointer to the previous node of the list
 * @next: Pointer to the next node of the list
 */
typedef struct node_deck
{
	const card_t *card;
	struct node_deck *prev;
	struct node_deck *next;
} deck_node_t;

void sort_deck(deck_node_t **deck);

#endif /* DECK_H */
