#if defined _PLAYING_CARDS_INCLUDED
	#endinput
#endif
#define _PLAYING_CARDS_INCLUDED

#include <a_samp>

#if !defined MAX_CARD_SPRITE_LEN
    #define MAX_CARD_SPRITE_LEN (16)
#endif
#if !defined MAX_CARD_NAME_LEN
    #define MAX_CARD_NAME_LEN (18)
#endif

enum CardSets { 
    BACK_OF_CARD, 
    CARD_SET_SPADES, 
    CARD_SET_HEARTS, 
    CARD_SET_DIAMONDS, 
    CARD_SET_CLOVERS 
}; 

enum CardValues {
    CARD_VALUE_NONE,
    CARD_VALUE_ACE,
    CARD_VALUE_TWO,
    CARD_VALUE_THREE,
    CARD_VALUE_FOUR,
    CARD_VALUE_FIVE,
    CARD_VALUE_SIX,
    CARD_VALUE_SEVEN,
    CARD_VALUE_EIGHT,
    CARD_VALUE_NINE,
    CARD_VALUE_TEN,
    CARD_VALUE_JACK,
    CARD_VALUE_QUEEN,
    CARD_VALUE_KING
};

enum E_CARD_SPRITES {
    E_CARD_SPRITE[MAX_CARD_SPRITE_LEN],
    CardValues: E_CARD_VALUE,
    CardSets: E_CARD_SET
}

static const CardSprites[][E_CARD_SPRITES] = { 
    {"LD_CARD:cdback", CARD_VALUE_NONE, BACK_OF_CARD},
    {"LD_CARD:cd1c", CARD_VALUE_ACE, CARD_SET_CLOVERS},
    {"LD_CARD:cd1d", CARD_VALUE_ACE, CARD_SET_DIAMONDS},
    {"LD_CARD:cd1h", CARD_VALUE_ACE, CARD_SET_HEARTS},
    {"LD_CARD:cd1s", CARD_VALUE_ACE, CARD_SET_SPADES},
    {"LD_CARD:cd2c", CARD_VALUE_TWO, CARD_SET_CLOVERS},
    {"LD_CARD:cd2d", CARD_VALUE_TWO, CARD_SET_DIAMONDS},
    {"LD_CARD:cd2h", CARD_VALUE_TWO, CARD_SET_HEARTS},
    {"LD_CARD:cd2s", CARD_VALUE_TWO, CARD_SET_SPADES},
    {"LD_CARD:cd3c", CARD_VALUE_THREE, CARD_SET_CLOVERS},
    {"LD_CARD:cd3d", CARD_VALUE_THREE, CARD_SET_DIAMONDS},
    {"LD_CARD:cd3h", CARD_VALUE_THREE, CARD_SET_HEARTS},
    {"LD_CARD:cd3s", CARD_VALUE_THREE, CARD_SET_SPADES},
    {"LD_CARD:cd4c", CARD_VALUE_FOUR, CARD_SET_CLOVERS},
    {"LD_CARD:cd4d", CARD_VALUE_FOUR, CARD_SET_DIAMONDS},
    {"LD_CARD:cd4h", CARD_VALUE_FOUR, CARD_SET_HEARTS},
    {"LD_CARD:cd4s", CARD_VALUE_FOUR, CARD_SET_SPADES},
    {"LD_CARD:cd5c", CARD_VALUE_FIVE, CARD_SET_CLOVERS},
    {"LD_CARD:cd5d", CARD_VALUE_FIVE, CARD_SET_DIAMONDS},
    {"LD_CARD:cd5h", CARD_VALUE_FIVE, CARD_SET_HEARTS},
    {"LD_CARD:cd5s", CARD_VALUE_FIVE, CARD_SET_SPADES},
    {"LD_CARD:cd6c", CARD_VALUE_SIX, CARD_SET_CLOVERS},
    {"LD_CARD:cd6d", CARD_VALUE_SIX, CARD_SET_DIAMONDS},
    {"LD_CARD:cd6h", CARD_VALUE_SIX, CARD_SET_HEARTS},
    {"LD_CARD:cd6s", CARD_VALUE_SIX, CARD_SET_SPADES},
    {"LD_CARD:cd7c", CARD_VALUE_SEVEN, CARD_SET_CLOVERS},
    {"LD_CARD:cd7d", CARD_VALUE_SEVEN, CARD_SET_DIAMONDS},
    {"LD_CARD:cd7h", CARD_VALUE_SEVEN, CARD_SET_HEARTS},
    {"LD_CARD:cd7s", CARD_VALUE_SEVEN, CARD_SET_SPADES},
    {"LD_CARD:cd8c", CARD_VALUE_EIGHT, CARD_SET_CLOVERS},
    {"LD_CARD:cd8d", CARD_VALUE_EIGHT, CARD_SET_DIAMONDS},
    {"LD_CARD:cd8h", CARD_VALUE_EIGHT, CARD_SET_HEARTS},
    {"LD_CARD:cd8s", CARD_VALUE_EIGHT, CARD_SET_SPADES},
    {"LD_CARD:cd9c", CARD_VALUE_NINE, CARD_SET_CLOVERS},
    {"LD_CARD:cd9d", CARD_VALUE_NINE, CARD_SET_DIAMONDS},
    {"LD_CARD:cd9h", CARD_VALUE_NINE, CARD_SET_HEARTS},
    {"LD_CARD:cd9s", CARD_VALUE_NINE, CARD_SET_SPADES},
    {"LD_CARD:cd10c", CARD_VALUE_TEN, CARD_SET_CLOVERS},
    {"LD_CARD:cd10d", CARD_VALUE_TEN, CARD_SET_DIAMONDS},
    {"LD_CARD:cd10h", CARD_VALUE_TEN, CARD_SET_HEARTS},
    {"LD_CARD:cd10s", CARD_VALUE_TEN, CARD_SET_SPADES},
    {"LD_CARD:cd11c", CARD_VALUE_JACK, CARD_SET_CLOVERS},
    {"LD_CARD:cd11d", CARD_VALUE_JACK, CARD_SET_DIAMONDS},
    {"LD_CARD:cd11h", CARD_VALUE_JACK, CARD_SET_HEARTS},
    {"LD_CARD:cd11s", CARD_VALUE_JACK, CARD_SET_SPADES},
    {"LD_CARD:cd12c", CARD_VALUE_QUEEN, CARD_SET_CLOVERS},
    {"LD_CARD:cd12d", CARD_VALUE_QUEEN, CARD_SET_DIAMONDS},
    {"LD_CARD:cd12h", CARD_VALUE_QUEEN, CARD_SET_HEARTS},
    {"LD_CARD:cd12s", CARD_VALUE_QUEEN, CARD_SET_SPADES},
    {"LD_CARD:cd13c", CARD_VALUE_KING, CARD_SET_CLOVERS},
    {"LD_CARD:cd13d", CARD_VALUE_KING, CARD_SET_DIAMONDS},
    {"LD_CARD:cd13h", CARD_VALUE_KING, CARD_SET_HEARTS},
    {"LD_CARD:cd13s", CARD_VALUE_KING, CARD_SET_SPADES}
};

static const CardNames[][MAX_CARD_NAME_LEN] = {
    "Card Back",
    "Ace of Clovers",
    "Ace of Diamonds",
    "Ace of Hearts",
    "Ace of Spades",
    "2 of Clovers",
    "2 of Diamonds",
    "2 of Hearts",
    "2 of Spades",
    "3 of Clovers",
    "3 of Diamonds",
    "3 of Hearts",
    "3 of Spades",
    "4 of Clovers",
    "4 of Diamonds",
    "4 of Hearts",
    "4 of Spades",
    "5 of Clovers",
    "5 of Diamonds",
    "5 of Hearts",
    "5 of Spades",
    "6 of Clovers",
    "6 of Diamonds",
    "6 of Hearts",
    "6 of Spades",
    "7 of Clovers",
    "7 of Diamonds",
    "7 of Hearts",
    "7 of Spades",
    "8 of Clovers",
    "8 of Diamonds",
    "8 of Hearts",
    "8 of Spades",
    "9 of Clovers",
    "9 of Diamonds",
    "9 of Hearts",
    "9 of Spades",
    "10 of Clovers",
    "10 of Diamonds",
    "10 of Hearts",
    "10 of Spades",
    "Jack of Clovers",
    "Jack of Diamonds",
    "Jack of Hearts",
    "Jack of Spades",
    "Queen of Clovers",
    "Queen of Diamonds",
    "Queen of Hearts",
    "Queen of Spades",
    "King of Clovers",
    "King of Diamonds",
    "King of Hearts",
    "King of Spades"
};

/**  
 * <summary>Get the sprite string for a playing card.</summary>
 * <param name="set">The card set to match</param>
 * <param name="value">The card value to match</param>
 * <param name="sprite">An array into which to store the sprite, passed by reference</param>
 * <param name="len">The length of the string that should be stored.</param>
 * <returns>Sprite string to be used in textdraws. "Unknown" if the card is invalid</returns>
*/
stock GetPlayingCardSprite(CardSets: set, CardValues: value, sprite[], len=sizeof(sprite)) {
    format(sprite, len, "Unknown");
    for(new i, j = sizeof(CardSprites); i < j; i ++) {
        if(CardSprites[i][E_CARD_SET] == set && CardSprites[i][E_CARD_VALUE] == value) {
            format(sprite, len, "%s", CardSprites[i][E_CARD_SPRITE]);
            break;
        }
    }
}

/**  
 * <summary>Get the name of a playing card.</summary>
 * <param name="set">The card set to match</param>
 * <param name="value">The card value to match</param>
 * <param name="sprite">An array into which to store the name, passed by reference</param>
 * <param name="len">The length of the string that should be stored.</param>
 * <returns>Name of a playing card. "Unknown" if the card is invalid</returns>
*/
stock GetPlayingCardName(CardSets: set, CardValues: value, name[], len=sizeof(name)) {
    format(name, len, "Unknown");
    for(new i, j = sizeof(CardSprites); i < j; i ++) {
        if(CardSprites[i][E_CARD_SET] == set && CardSprites[i][E_CARD_VALUE] == value) {
            format(name, len, "%s", CardNames[i]);
            break;
        }
    }
}