#include "playing-cards.inc"

main() 
{
    new sprite[MAX_CARD_SPRITE_LEN];
    new name[MAX_CARD_NAME_LEN];

    GetPlayingCardSprite(CARD_SET_SPADES, CARD_VALUE_THREE, sprite);
    GetPlayingCardName(CARD_SET_SPADES, CARD_VALUE_THREE, name);
    printf("[%s]: %s", name, sprite);

    GetPlayingCardSprite(CARD_SET_HEARTS, CARD_VALUE_EIGHT, sprite);
    GetPlayingCardName(CARD_SET_HEARTS, CARD_VALUE_EIGHT, name);
    printf("[%s]: %s", name, sprite);

    GetPlayingCardSprite(CARD_SET_DIAMONDS, CARD_VALUE_KING, sprite);
    GetPlayingCardName(CARD_SET_DIAMONDS, CARD_VALUE_KING, name);
    printf("[%s]: %s", name, sprite);

    GetPlayingCardSprite(CARD_SET_CLOVERS, CARD_VALUE_JACK, sprite);
    GetPlayingCardName(CARD_SET_CLOVERS, CARD_VALUE_JACK, name);
    printf("[%s]: %s", name, sprite);

    // Inconsistent set/value handling
    GetPlayingCardSprite(CARD_SET_CLOVERS, CardValues:-1, sprite);
    GetPlayingCardName(CARD_SET_CLOVERS, CardValues:-1, name);
    printf("[%s]: %s", name, sprite);

    GetPlayingCardSprite(CardSets: -1, CARD_VALUE_JACK, sprite);
    GetPlayingCardName(CardSets: -1, CARD_VALUE_JACK, name);
    printf("[%s]: %s", name, sprite);
}
