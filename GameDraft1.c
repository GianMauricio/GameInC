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

/*
struct Player
{
	int Arms;
	int Legs;
	int Energy;
	int Observation;
	char location[];
} Player_a;
*/

void main()
{
	int choice;
	int nTimeRemaining = 1;
	int nTimeTaken = 0;
/*
	struct Player Player_a;

	//Initiaization of the Player_a struct
	Player_a.Arms = 1;
	Player_a.Legs = 1;
	Player_a.Energy = 100;
	Player_a.Observation = 0;
	strcpy(Player_a.location, "Room");
*/

	//These will serve as the premise
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
	char q2[] = "You're already in your lawn where the burning tree is. You see a hose to your left and a dog to your right. ";

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
				TypeWithColor(15s, 50, endA2);
				printf("\n");

				printf(">>");s
				scanf("%d", &choice);
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
