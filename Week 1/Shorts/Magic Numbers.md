Magic numbers refer to constants in code that's purpose may not be immediately obvious to someone who's unaware of why that constant was set.

Constants are actually looked down upon and we try to avoid this. Say we have a function for a deck of cards:

cards deck_cards(deck name)
{
	for (int i = 0; i < 52; i++)
	{
		//deal a card
	}
}

The magic number is 52. A standard deck of cards but its not exactly clear what that 52 is doing in the code. It may be clearer to declare it like this:

int deck_size = 52;
for (int i = 0, i < deck_size; i++)

This could cause other problems however. What if there is another function that changes deck_size in some way? This then throws this process off or be abused by a bad actor.

C provides preprecoessor directive (Or macro) for creating symbolic constants.

#define NAME REPLACEMENT

When the program is compiled, define will go through your code and replace NAME with REPLACEMENT.

If include is similar to copy and paste, then define is like find and replace.

Its common to place constants in ALL CAPS to make it clear of their status. Which would change our original example to:

#define DECKSIZE 52

card deal_cards(deckname)
{
	for(int i = 0; i < DECKSIZE; i++)
	{
		//deal a card
	}
}

This makes the decksize unable to be manipulated unexpectedly. Conversely, say you want to use a different size of deck (Germany uses 32) instead of having to comb the code and replace each reference of 52, I can just change this one macro.