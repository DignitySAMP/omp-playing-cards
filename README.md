# playing-cards.inc

[![sampctl](https://img.shields.io/badge/sampctl-playing_cards-2f2f2f.svg?style=for-the-badge)](https://github.com/DignitySAMP/playing-cards)

<!--
Short description of your library, why it's useful, some examples, pictures or
videos. Link to your forum release thread too.

Remember: You can use "forumfmt" to convert this readme to forum BBCode!

What the sections below should be used for:

`## Installation`: Leave this section un-edited unless you have some specific
additional installation procedure.

`## Testing`: Whether your library is tested with a simple `main()` and `print`,
unit-tested, or demonstrated via prompting the player to connect, you should
include some basic information for users to try out your code in some way.

And finally, maintaining your version number`:

* Follow [Semantic Versioning](https://semver.org/)
* When you release a new version, update `VERSION` and `git tag` it
* Versioning is important for sampctl to use the version control features

Happy Pawning!
-->

## Installation

Simply install to your project:

```bash
sampctl package install DignitySAMP/omp-playing-cards
```

Include in your code and begin using the library:

```pawn
#include <playing-cards>
```

## Usage
### Constants
- `MAX_CARD_SPRITE_LEN = 16`
     - The maximum length of a card sprite.
- `MAX_CARD_NAME_LEN = 18`
    - The maximum length of a card name.

### Functions
- `GetPlayingCardSprite`
    - Retrieves the sprite for a specific card, passed by set and value. 

- `GetPlayingCardName`
    - Retrieves the name of a specific card, passed by set and value. 

## Examples

<!--
Write your code documentation or examples here. If your library is documented in
the source code, direct users there. If not, list your API and describe it well
in this section. If your library is passive and has no API, simply omit this
section.
-->

### Getting a card sprite, referenced by set type and card value.
```pawn
new sprite[MAX_CARD_SPRITE_LEN];
GetPlayingCardSprite(CARD_SET_SPADES, CARD_VALUE_THREE, sprite); // output: "LD_CARD:cd3s"
```

### Getting a card name, referenced by set type and card value.
```pawn
new name[MAX_CARD_NAME_LEN];
GetPlayingCardName(CARD_SET_SPADES, CARD_VALUE_THREE, name); // output: "3 of Spades"
```

## Testing

<!--
Depending on whether your package is tested via in-game "demo tests" or
y_testing unit-tests, you should indicate to readers what to expect below here.
-->

To test, simply run the package:

```bash
sampctl package run
```
