/*
*	Author: Gian Mauricio
*	AUthor: Cyle Marty
*	Ext. Reference: StackOverflow
*	Purpose: Draft for the game using Story 1
* 	Notes: Any and all changes to the game will be reflected here
*/

#include <windows.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void TypeWithColor(int ColorCode, int TypeSpeed, char text[]);

//Stores the players' choices
struct Player
{
	int Choice0;
	int Choice1;
	int Choice2;
	int Choice3;
	int Choice4;
	int Choice5;
} Player_a;


void main()
{
	int nPlaying = 1;

	do
	{
		int nTimeRemaining = 0;
		int nReachedEnd = 0;

		//Creation of new struct based on Player
		struct Player Player_a;

		//Initiaization of the Player_a struct
		Player_a.Choice1 = 0;
		Player_a.Choice2 = 0;
		Player_a.Choice3 = 0;
		Player_a.Choice4 = 0;
		Player_a.Choice5 = 0;

		while(nTimeRemaining <= 7)
		{
			switch (nTimeRemaining)
			{
				case 0:
					ClearScreen();
					TypeWithColor(15, 50, "Welcome to");
					TypeWithColor(14, 50, "5 minutes to save the world!");
					TypeWithColor(15, 50, "Not your average hero game ;)");
					printf("\n");
					printf("\n");

					TypeWithColor(15, 50, "1.");
					TypeWithColor(14, 50, "Play");
					printf("\n");

					TypeWithColor(15, 50, "2.");
					TypeWithColor(11, 50, "Instructions");
					printf("\n");

					printf(">>");
					scanf("%d", &Player_a.Choice0);

					if(Player_a.Choice0 == 1)
					{
						nTimeRemaining = 1;
					}

					else if (Player_a.Choice0 == 2)
					{
						nTimeRemaining = 6;
					}

				break;

				case 1:
					//Premise
					ClearScreen();
					TypeWithColor(15, 50, "You are inside your");
					TypeWithColor(11, 50, "bedroom");
					TypeWithColor(15, 50, "outside your window you see a");
					TypeWithColor(12, 50, "horrific");
					TypeWithColor(15, 50, "sight.");
					printf("\n")

					TypeWithColor(15, 50, "Your");
					TypeWithColor(14, 50, "pet");
					TypeWithColor(15, 50, "is stuck in a");
					TypeWithColor(12, 50, "burning");
					TypeWithColor(15, 50, "tree.");
					printf("\n");
					printf("\n");

					//Choice
					TypeWithColor(15, 30, "What do you do?");
					printf("\n");

					//Option 1
					TypeWithColor(15, 50, "1.");
					TypeWithColor(14, 50, "Run");
					TypeWithColor(15, 50, "down the stairs as quick as possible.");
					printf("\n");

					//Option 2
					TypeWithColor(15, 50, "2.");
					TypeWithColor(12, 50, "Jump");
					TypeWithColor(15, 50, "down the stairs, risking your legs.");
					printf("\n");

					printf(">>");
					scanf("%d", &Player_a.Choice1);

					//Move to next case
					nTimeRemaining = 2;
				break;

				case 2:
					//If option 1 was picked (Run Down Stairs)
					if (Player_a.Choice1 == 1)
					{
							//Premise
							ClearScreen();
							TypeWithColor(15, 50, "You are now in your");
							TypeWithColor(11, 50, "living room,");
							TypeWithColor(15, 50, "it seems that there is no one else home.");
							printf("\n");

							TypeWithColor(15, 50, "It also seems that someone left the");
							TypeWithColor(11, 50, "TV");
							TypeWithColor(15, 50, "turned on.");
							printf("\n");
							printf("\n");

							//Choice
							TypeWithColor(15, 30, "What do you do?");
							printf("\n");

							//Option 1
							TypeWithColor(15, 50, "1.");
							TypeWithColor(14, 50, "Sprint");
							TypeWithColor(15, 50, "towards the yard.");
							printf("\n");

							//Option 2
							TypeWithColor(15, 50, "2.");
							TypeWithColor(12, 50, "Watch TV");
							TypeWithColor(15, 50, "because, why not?.");
							printf("\n");
					}

					//If option 2 was picked (Jump Down Stairs)
					else if (Player_a.Choice1 == 2)
					{
							//Premise
							ClearScreen();
							TypeWithColor(12, 50, "You're legs are broken.");
							printf("\n");

							TypeWithColor(15, 50, "You're left leg looks like your right leg,");
							TypeWithColor(15, 50, "and you're right leg looks like it went through a");
							TypeWithColor(12, 50, "hydraulic press.");
							printf("\n");

							//More premise
							TypeWithColor(15, 50, "Otherwise your fine ^_^. Completely");
							TypeWithColor(12, 50, "fine.");
							printf("\n");

							//Even more premise
							TypeWithColor(15, 50, "You are now in your");
							TypeWithColor(11, 50, "living room,");
							TypeWithColor(15, 50, "it seems that there is no one else home.");
							TypeWithColor(15, 50, "It also seems that someone left the");
							TypeWithColor(11, 50, "TV");
							TypeWithColor(15, 50, "turned on.");
							printf("\n");
							printf("\n");

							//Choice
							TypeWithColor(15, 30, "What do you do?");
							printf("\n");

							//Option 1
							TypeWithColor(15, 50, "1.");
							TypeWithColor(12, 50, "Limp");
							TypeWithColor(15, 50, "towards the yard.");
							printf("\n");

							//Option 2
							TypeWithColor(15, 50, "2.");
							TypeWithColor(14, 50, "Roll");
							TypeWithColor(15, 50, "towards your yard, maybe your body can do what your legs can't");
							printf("\n");
					}

					printf(">>");
					scanf("%d", &Player_a.Choice2);

					//Move to next case
					nTimeRemaining = 3;
				break;

				case 3:
					//If option 1 was picked (Run Down Stairs)
					if (Player_a.Choice1 == 1)
					{
						//If option 1 was picked (Sprint towards yard)
						if(Player_a.Choice2 == 1)
						{
							//Premise
							ClearScreen();
							TypeWithColor(15, 50, "You are now in your");
							TypeWithColor(11, 50, "front yard,");
							TypeWithColor(15, 50, "the tree is still");
							TypeWithColor(12, 50, "burning");
							TypeWithColor(15, 50, "and the");
							TypeWithColor(12, 50, "fire");
							TypeWithColor(15, 50, "has almost reached your");
							TypeWithColor(14, 50, "pet.");
							printf("\n");

							TypeWithColor(12, 50, "Time is running out!");
							printf("\n");
							printf("\n");

							TypeWithColor(15, 30, "What do you do?");
							printf("\n");

							TypeWithColor(15, 50, "1.");
							TypeWithColor(12, 50, "Fortnite Dance");
							TypeWithColor(15, 50, "at the tree. This will work trust me.");
							printf("\n");

							TypeWithColor(15, 50, "2.");
							TypeWithColor(12, 50, "Use a ladder");
							TypeWithColor(15, 50, "to climb the tree. I mean, logically...?");
							printf("\n");
						}

						//If option 2 was picked (Watch TV)
						else if(Player_a.Choice2 == 2)
						{
							//Premise
							ClearScreen();
							TypeWithColor(12, 50, "Why.");
							printf("\n");

							TypeWithColor(15, 50, "You casually make your way to the couch facing the");
							TypeWithColor(11, 50, "TV.");
							printf("\n");

							TypeWithColor(15, 50, "Outside the cries of");
							TypeWithColor(12, 50, "pain");
							TypeWithColor(15, 50, "and");
							TypeWithColor(12, 50, "agony");
							TypeWithColor(15, 50, "from your");
							TypeWithColor(14, 50, "pet,");
							TypeWithColor(15, 50, "almost made you feel guilty about your choices.");
							printf("\n");

							TypeWithColor(15, 50, "You come across a show which featured a burning tree");
							TypeWithColor(12, 50, "\"Ugh fine\"");
							TypeWithColor(15, 50, "you think to yourself, and begin to dial");
							TypeWithColor(12, 50, "emergency services");
							printf("\n");

							TypeWithColor(15, 50, "After a good 30 minutes");
							TypeWithColor(14, 50, "a firetruck arrived");
							TypeWithColor(15, 50, "as if by some miracle, your pet survived!");
							printf("\n");

							TypeWithColor(15, 50, "Congratulations for being super lazy!");
							nReachedEnd = 1;
						}
					}

					//If option 2 was picked (Jump Down Stairs)
					else if (Player_a.Choice1 == 2)
					{
							ClearScreen();
							TypeWithColor(12, 50, "You're legs are broken.");
							TypeWithColor(15, 50, "You're left leg looks like your right leg,");
							TypeWithColor(15, 50, "and you're rihgt leg looks like it went through a");
							TypeWithColor(12, 50, "meat tenderizer.");
							printf("\n");

							TypeWithColor(15, 50, "Otherwise your fine ^_^. Completely");
							TypeWithColor(14, 50, "fine.");
							printf("\n");

							TypeWithColor(15, 50, "You are now in your");
							TypeWithColor(11, 50, "living room,");
							TypeWithColor(15, 50, "it seems that there is no one else home.");
							TypeWithColor(15, 50, "It seems that someone left the");
							TypeWithColor(11, 50, "TV");
							TypeWithColor(15, 50, "turned on.");
							printf("\n");
							printf("\n");

							TypeWithColor(15, 30, "What do you do?");
							printf("\n");

							TypeWithColor(15, 50, "1.");
							TypeWithColor(12, 50, "Limp");
							TypeWithColor(15, 50, "towards the yard.");
							printf("\n");

							TypeWithColor(15, 50, "2.");
							TypeWithColor(14, 50, "Roll");
							TypeWithColor(15, 50, "towards your yard, maybe your body can do what your legs can't");
							printf("\n");
					}

					printf(">>");
					scanf("%d", &Player_a.Choice2);

					//Move to next case
					nTimeRemaining = 4;
				break;

				case 4:
				//If option 1 was picked (Run Down Stairs)
				if (Player_a.Choice1 == 1)
				{
					//If option 1 was picked (Sprint towards yard)
					if(Player_a.Choice2 == 1)
					{
						//If option 1 was picked (Fortnite Dance)
						if(Player_a.Choice3 == 1)
						{
							//Premise
							ClearScreen();
							TypeWithColor(15, 50, "You, in your");
							TypeWithColor(12, 50, "panic");
							TypeWithColor(15, 50, "and");
							TypeWithColor(12, 50, "confusion");
							TypeWithColor(15, 50, "perfectly exucute the");
							TypeWithColor(14, 50, "\"Floss\"");
							TypeWithColor(15, 50, "and the")
							TypeWithColor(14, 50, "\"Default Dance\".");
							printf("\n");

							TypeWithColor(15, 50, "The sky disliked that.");
							printf("\n");

							TypeWithColor(15, 50, "In response to your");
							TypeWithColor(12, 50, "shameful display");
							TypeWithColor(15, 50, "and loss of dignity.");
							printf("\n");

							TypeWithColor(14, 50, "It rains.");
							TypeWithColor(15, 50, "Your horrible dancing has made it");
							TypeWithColor(11, 50, "rain");
							printf("\n");

							nReachedEnd = 2;
						}
					}

					//If option 2 was picked (Watch TV)
					else if(Player_a.Choice2 == 2)
					{
						//Premise
						ClearScreen();
						TypeWithColor(12, 50, "Why.");
						printf("\n");

						TypeWithColor(15, 50, "You casually make your way to the couch facing the");
						TypeWithColor(11, 50, "TV.");
						printf("\n");

						TypeWithColor(15, 50, "Outside the cries of");
						TypeWithColor(12, 50, "pain");
						TypeWithColor(15, 50, "and");
						TypeWithColor(12, 50, "agony");
						TypeWithColor(15, 50, "from your");
						TypeWithColor(14, 50, "pet,");
						TypeWithColor(15, 50, "almost made you feel guilty about your choices.");
						printf("\n");

						TypeWithColor(15, 50, "You come across a show which featured a burning tree");
						TypeWithColor(12, 50, "\"Ugh fine\"");
						TypeWithColor(15, 50, "you think to yourself, and begin to dial");
						TypeWithColor(12, 50, "emergency services");
						printf("\n");

						TypeWithColor(15, 50, "After a good 30 minutes");
						TypeWithColor(14, 50, "a firetruck arrived");
						TypeWithColor(15, 50, "as if by some miracle, your pet survived!");
						printf("\n");

						TypeWithColor(15, 50, "Congratulations for being super lazy!");
						nReachedEnd = 1;
					}
				}

				//If option 2 was picked (Jump Down Stairs)
				else if (Player_a.Choice1 == 2)
				{
						ClearScreen();
						TypeWithColor(12, 50, "You're legs are broken.");
						TypeWithColor(15, 50, "You're left leg looks like your right leg,");
						TypeWithColor(15, 50, "and you're rihgt leg looks like it went through a");
						TypeWithColor(12, 50, "meat tenderizer.");
						printf("\n");

						TypeWithColor(15, 50, "Otherwise your fine ^_^. Completely");
						TypeWithColor(14, 50, "fine.");
						printf("\n");

						TypeWithColor(15, 50, "You are now in your");
						TypeWithColor(11, 50, "living room,");
						TypeWithColor(15, 50, "it seems that there is no one else home.");
						TypeWithColor(15, 50, "It seems that someone left the");
						TypeWithColor(11, 50, "TV");
						TypeWithColor(15, 50, "turned on.");
						printf("\n");
						printf("\n");

						TypeWithColor(15, 30, "What do you do?");
						printf("\n");

						TypeWithColor(15, 50, "1.");
						TypeWithColor(12, 50, "Limp");
						TypeWithColor(15, 50, "towards the yard.");
						printf("\n");

						TypeWithColor(15, 50, "2.");
						TypeWithColor(14, 50, "Roll");
						TypeWithColor(15, 50, "towards your yard, maybe your body can do what your legs can't");
						printf("\n");
				}

				printf(">>");
				scanf("%d", &Player_a.Choice2);

				//Move to next case
				nTimeRemaining = 4;
			break;
				case 6:
					ClearScreen();
					TypeWithColor(15, 50, "This game is about");
					TypeWithColor(11, 50, "choices");
					TypeWithColor(15, 50, "each time you make a different");
					TypeWithColor(11, 50, "choice");
					TypeWithColor(15, 50, "you get a different ending.");
					printf("\n");

					TypeWithColor(15, 50, "We encourage replaying >w<.");
					printf("\n");

					TypeWithColor(15, 50, "If a word is");
					TypeWithColor(14, 50, "yellow");
					TypeWithColor(15, 50, "then that");
					TypeWithColor(11, 50, "choice");
					TypeWithColor(15, 50, "is a safer one, but not always the better one.");
					printf("\n");

					TypeWithColor(15, 50, "If a word is");
					TypeWithColor(12, 50, "red");
					TypeWithColor(15, 50, "then that");
					TypeWithColor(11, 50, "choice");
					TypeWithColor(15, 50, "is a riskier one, and may result in some consequences.");
					printf("\n");

					TypeWithColor(15, 50, "If a word is");
					TypeWithColor(11, 50, "blue");
					TypeWithColor(15, 50, "it means that it is decribing where you currently are, and what it looks like.");
					printf("\n");
					printf("\n");

					TypeWithColor(15, 50, "1.");
					TypeWithColor(14, 50, "Return");
					TypeWithColor(15, 50, "to main menu.");
					printf("\n");

					TypeWithColor(15, 50, "2.");
					TypeWithColor(12, 50, "Bloopers");
					TypeWithColor(15, 50, "in the code.");
					printf("\n");

					printf(">>");
					scanf("%d", &Player_a.Choice0);

					if(Player_a.Choice0 == 1)
					{
						nTimeRemaining = 0;
					}

					else if (Player_a.Choice0 == 2)
					{
						nTimeRemaining = 7;
					}

				break;

				case 7:
					ClearScreen();
					TypeWithColor(15, 50, "I'll fill this up at a later date...");
					printf("\n");

					TypeWithColor(15, 50, "1.");
					TypeWithColor(14, 50, "Return");
					TypeWithColor(15, 50, "to main menu.");
					printf("\n");

					printf(">>");
					scanf("%d", &Player_a.Choice0);

					if(Player_a.Choice0 == 1)
					{
						nTimeRemaining = 0;
					}

					break;
			}

			if (nReachedEnd == 1)
				TypeWithColor(14, 50, "Reached Ending One: Immense Lethargy");

			if (nReachedEnd == 2)
				TypeWithColor(14, 50, "Reached Ending Two: Immense Shame");
		}
	}
	while(nPlaying == 1);

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
Light Blue   |   11
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

		SetConsoleTextAttribute(Output, (15 & 0x0F));
}

//Cleans the screen
void ClearScreen()
{
	system("@cls||clear");
}
