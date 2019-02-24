/*
*	Author: Gian Mauricio
*	AUthor: Cyle Marty
*	Ext. Reference: StackOverflow
*	Purpose: Draft for the game using Story 1
* 	Notes: Any and all changes to the game will be reflected here
*/

#include <windows.h>
#include <string.h>
#include <stdio.h>

void TypeWithColor(int ColorCode, int TypeSpeed, char text[]);

//Stores the players' choices
struct Player
{
	int Choice1;
	int Choice2;
	int Choice3;
	int Choice4;
	int Choice5;
} Player_a;


void main()
{
	int nTimeRemaining = 1;

	//Creation of new struct based on Player
	struct Player Player_a;

	//Initiaization of the Player_a struct
	Player_a.Choice1 = 0;
	Player_a.Choice2 = 0;
	Player_a.Choice3 = 0;
	Player_a.Choice4 = 0;
	Player_a.Choice5 = 0;

	//These will serve as the premise for choice 1
	char Content[] = "Your";
		char pet[] = "pet";
		char moreContent[] = "is stuck in a";
		char burning[] = "burning";
		char lastContent[] = "tree.";

	//These belong to Case 1 (1 Choice, 2 options)
	char firstChoice[] = "What do you do?";
		char startA1[] = "1.";
		char actionA1[] = "Run";
		char endA1[] = "down as quick as fuck down the stairs.";

		char startA2[] = "2.";
		char actionA2[] = "Jump";
		char endA2[] = "down the stairs.";

	//This belongs to Case 2 (1 Choice, )
	char secondChoice[] = "You're already in your lawn where the burning tree is. You see a hose to your left and a dog to your right. ";

	while(nTimeRemaining < 11)
	{
		switch (nTimeRemaining)
		{
				case 1:
					TypeWithColor(15, 50, Content);
					TypeWithColor(14, 50, pet);
					TypeWithColor(15, 50, moreContent);
					TypeWithColor(12, 50, burning);
					TypeWithColor(15, 50, lastContent);
					printf("\n");

					TypeWithColor(15, 30, firstChoice);
					printf("\n");

					TypeWithColor(15, 50, startA1);
					TypeWithColor(14, 50, actionA1);
					TypeWithColor(15, 50, endA1);
					printf("\n");

					TypeWithColor(15, 50, startA2);
					TypeWithColor(12, 50, actionA2);
					TypeWithColor(15, 50, endA2);
					printf("\n");

					printf(">>");
					scanf("%d", &Player_a.Choice1);

					nTimeRemaining = 2;
					break;

				case 2:

		}
	}
}

/*
Codex:

Name         | Value
             |
Black        |   0
Blue         |   1
Green        |   2
Cyan         |   3
Red          |   4
Magenta      |   5
Brown        |   6
Light Gray   |   7
Dark Gray    |   8
Light Blue   |   9
Light Green  |   10
Light Cyan   |   11
Light Red    |   12
Light Magenta|   13
Yellow       |   14
White        |   15
*/
void TypeWithColor(int ColorCode, int TypeSpeed, char text[])
{
		//Using size_t ensures that the array is fully represented
		size_t nTextLength = strlen(text);
		int nCurrentCharacter = 0;

		//Takes the background attribute
	  WORD wColor;
	  HANDLE Output = GetStdHandle(STD_OUTPUT_HANDLE);
	  CONSOLE_SCREEN_BUFFER_INFO Screen;


    if(GetConsoleScreenBufferInfo(Output, &Screen))
    {
	       //To mask out all but the background attribute, and to add the color
	       wColor = (Screen.wAttributes & 0xF0) + (ColorCode & 0x0F);
	       SetConsoleTextAttribute(Output, wColor);
    }

    //Types out the input string
    while(nCurrentCharacter <= nTextLength)
		{
	    	printf("%c", text[nCurrentCharacter]);
	    	//Delays the execution of the next character by a certain amount of time
	    	Sleep(TypeSpeed);
				nCurrentCharacter += 1;
		}
}
