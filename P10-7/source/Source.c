#include <stdio.h>
struct card
{
	char *face;
	char *suit;
};
int main(void)
{
	struct card aCard;
	struct card *cardPrt;

	aCard.face  = "Ace";
	aCard.suit =  "Spades";

	cardPrt = &aCard;

	printf("%s%s%s\n%s%s%s\n%s%s%s\n", aCard.face, " of ", aCard.suit,
		cardPrt->face, " of ", cardPrt->suit,
		(*cardPrt).face, " of ", (*cardPrt).suit);
	return 0;


}