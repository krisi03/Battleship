#include <stdio.h>
#include <stdlib.h>

int main()
{

    welcomeScreen();

}
void welcomeScreen (void) {
	printf("*******************THIS IS THE REAL GAME***************************\n");
	printf("\n\n");
	printf ("                         INSURANCE                       \n");
	//printf("\n");
	printf ("                       K O R A B 4 E\n");
	printf("\n\n");
	printf ("*******************************************************************\n");
	printf ("\n\n");
	printf ("RULES OF THE GAME:\n");
	printf("1. This is a two player game.\n");
	printf("2. Player 1 is you and Player 2 is the computer.\n");
	printf("3. Player 1 should choose coordinats of his ships to be generated manually or randomly\n");
	printf("4. Player 1 should enter the price of his insurance for his ships\n");
	printf("5. There are five types of ships to be placed by longest length to the\n");
	printf("   shortest; [c] Catamaran has 5 cells, [y] Yacht has 4 cells, [r] Cruiser\n");
	printf("   has 3 cells, [s] Submarine has 3 cells, [d] Drift boat has 2 cells\n");
	printf("6. The computer randomly selects which player goes first\n");
	printf("7. The game begins as each player tries to guess the location of the ships\n");
	printf("   of the other player's board; [*] hit and [m] miss\n");
	printf("8. First player who snik all ships wins\n\n");
    }

