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
	int nTypeSpeed = 30;
	int nFastTypeSpeed = 10;
	int nSlowTypeSpeed = 80;

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

		while(nTimeRemaining <= 7 && nReachedEnd == 0)
		{
			switch (nTimeRemaining)
			{
				case 0:
					ClearScreen();
					TypeWithColor(15, nTypeSpeed, "Welcome to");
					TypeWithColor(14, nTypeSpeed, "5 minutes to save the world!");
					TypeWithColor(15, nTypeSpeed, "Not your average hero game ;)");
					printf("\n");
					printf("\n");

					TypeWithColor(15, nTypeSpeed, "1.");
					TypeWithColor(14, nTypeSpeed, "Play");
					printf("\n");

					TypeWithColor(15, nTypeSpeed, "2.");
					TypeWithColor(11, nTypeSpeed, "Instructions");
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
					TypeWithColor(15, nTypeSpeed, "You are inside your");
					TypeWithColor(11, nTypeSpeed, "bedroom");
					TypeWithColor(15, nTypeSpeed, "outside your window you see a");
					TypeWithColor(12, nTypeSpeed, "horrific");
					TypeWithColor(15, nTypeSpeed, "sight.");
					printf("\n");

					TypeWithColor(15, nTypeSpeed, "Your");
					TypeWithColor(14, nTypeSpeed, "pet");
					TypeWithColor(15, nTypeSpeed, "is stuck in a");
					TypeWithColor(12, nTypeSpeed, "burning");
					TypeWithColor(15, nTypeSpeed, "tree.");
					printf("\n");
					printf("\n");

					//Choice
					TypeWithColor(15, nFastTypeSpeed, "What do you do?");
					printf("\n");

					//Option 1
					TypeWithColor(15, nTypeSpeed, "1.");
					TypeWithColor(14, nTypeSpeed, "Run");
					TypeWithColor(15, nTypeSpeed, "down the stairs as quick as possible.");
					printf("\n");

					//Option 2
					TypeWithColor(15, nTypeSpeed, "2.");
					TypeWithColor(12, nTypeSpeed, "Jump");
					TypeWithColor(15, nTypeSpeed, "down the stairs, risking your legs.");
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
							TypeWithColor(15, nTypeSpeed, "You are now in your");
							TypeWithColor(11, nTypeSpeed, "living room,");
							TypeWithColor(15, nTypeSpeed, "it seems that there is no one else home.");
							printf("\n");

							TypeWithColor(15, nTypeSpeed, "It also seems that someone left the");
							TypeWithColor(11, nTypeSpeed, "TV");
							TypeWithColor(15, nTypeSpeed, "turned on.");
							printf("\n");
							printf("\n");

							//Choice
							TypeWithColor(15, nFastTypeSpeed, "What do you do?");
							printf("\n");

							//Option 1
							TypeWithColor(15, nTypeSpeed, "1.");
							TypeWithColor(14, nTypeSpeed, "Sprint");
							TypeWithColor(15, nTypeSpeed, "towards the yard.");
							printf("\n");

							//Option 2
							TypeWithColor(15, nTypeSpeed, "2.");
							TypeWithColor(12, nTypeSpeed, "Watch TV");
							TypeWithColor(15, nTypeSpeed, "because, why not?.");
							printf("\n");
					}

					//If option 2 was picked (Jump Down Stairs)
					else if (Player_a.Choice1 == 2)
					{
							//Premise
							ClearScreen();
							TypeWithColor(12, nTypeSpeed, "You're legs are broken.");
							printf("\n");

							TypeWithColor(15, nTypeSpeed, "You're left leg looks like your right leg,");
							TypeWithColor(15, nTypeSpeed, "and you're right leg looks like it went through a");
							TypeWithColor(12, nTypeSpeed, "hydraulic press.");
							printf("\n");

							//More premise
							TypeWithColor(15, nTypeSpeed, "Otherwise your fine ^_^. Completely");
							TypeWithColor(12, nTypeSpeed, "fine.");
							printf("\n");

							//Even more premise
							TypeWithColor(15, nTypeSpeed, "You are now in your");
							TypeWithColor(11, nTypeSpeed, "living room,");
							TypeWithColor(15, nTypeSpeed, "it seems that there is no one else home.");
							TypeWithColor(15, nTypeSpeed, "It also seems that someone left the");
							TypeWithColor(11, nTypeSpeed, "TV");
							TypeWithColor(15, nTypeSpeed, "turned on.");
							printf("\n");
							printf("\n");

							//Choice
							TypeWithColor(15, nFastTypeSpeed, "What do you do?");
							printf("\n");

							//Option 1
							TypeWithColor(15, nTypeSpeed, "1.");
							TypeWithColor(12, nTypeSpeed, "Limp");
							TypeWithColor(15, nTypeSpeed, "towards the yard.");
							printf("\n");

							//Option 2
							TypeWithColor(15, nTypeSpeed, "2.");
							TypeWithColor(14, nTypeSpeed, "Roll");
							TypeWithColor(15, nTypeSpeed, "towards your yard, maybe your body can do what your legs can't");
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
							TypeWithColor(15, nTypeSpeed, "You are now in your");
							TypeWithColor(11, nTypeSpeed, "front yard,");
							TypeWithColor(15, nTypeSpeed, "the tree is still");
							TypeWithColor(12, nTypeSpeed, "burning");
							TypeWithColor(15, nTypeSpeed, "and the");
							TypeWithColor(12, nTypeSpeed, "fire");
							TypeWithColor(15, nTypeSpeed, "has almost reached your");
							TypeWithColor(14, nTypeSpeed, "pet.");
							printf("\n");

							TypeWithColor(12, nTypeSpeed, "Time is running out!");
							printf("\n");
							printf("\n");

							TypeWithColor(15, nFastTypeSpeed, "What do you do?");
							printf("\n");

							TypeWithColor(15, nTypeSpeed, "1.");
							TypeWithColor(12, nTypeSpeed, "Fortnite Dance");
							TypeWithColor(15, nTypeSpeed, "at the tree. This will work trust me.");
							printf("\n");

							TypeWithColor(15, nTypeSpeed, "2.");
							TypeWithColor(12, nTypeSpeed, "Use a ladder");
							TypeWithColor(15, nTypeSpeed, "to climb the tree. I mean, logically...?");
							printf("\n");
						}

						//If option 2 was picked (Watch TV)
						else if(Player_a.Choice2 == 2)
						{
							//Premise
							ClearScreen();
							TypeWithColor(12, nSlowTypeSpeed, "Why.");
							printf("\n");

							TypeWithColor(15, nTypeSpeed, "You casually make your way to the couch facing the");
							TypeWithColor(11, nTypeSpeed, "TV.");
							printf("\n");

							TypeWithColor(15, nTypeSpeed, "Outside the cries of");
							TypeWithColor(12, nTypeSpeed, "pain");
							TypeWithColor(15, nTypeSpeed, "and");
							TypeWithColor(12, nTypeSpeed, "agony");
							TypeWithColor(15, nTypeSpeed, "from your");
							TypeWithColor(14, nTypeSpeed, "pet,");
							TypeWithColor(15, nTypeSpeed, "almost made you feel guilty about your choices.");
							printf("\n");

							TypeWithColor(15, nTypeSpeed, "You come across a show which featured a burning tree");
							TypeWithColor(12, nTypeSpeed, "\"Ugh fine\"");
							TypeWithColor(15, nTypeSpeed, "you think to yourself, and begin to dial");
							TypeWithColor(12, nTypeSpeed, "emergency services");
							printf("\n");

							TypeWithColor(15, nTypeSpeed, "After a good 30 minutes");
							TypeWithColor(14, nTypeSpeed, "a firetruck arrived");
							TypeWithColor(15, nTypeSpeed, "as if by some miracle, your pet survived!");
							printf("\n");

							TypeWithColor(15, nTypeSpeed, "Congratulations for being super lazy!");
							nReachedEnd = 1;
						}
					}

					//If option 2 was picked (Jump Down Stairs)
					else if (Player_a.Choice1 == 2)
					{
							//If option 1 was picked (Limp towards yard)
							if (Player_a.Choice2 == 1)
							{
								//Premise
								ClearScreen();
								TypeWithColor(12, nTypeSpeed, "Pain.");
								TypeWithColor(15, nTypeSpeed, "the first thing you feel is");
								TypeWithColor(12, nTypeSpeed, "immense pain.");
								printf("\n");

								TypeWithColor(12, nTypeSpeed, "burning");
								TypeWithColor(15, nTypeSpeed, "and the");
								TypeWithColor(12, nTypeSpeed, "fire");
								TypeWithColor(15, nTypeSpeed, "has almost reached your");
								TypeWithColor(14, nTypeSpeed, "pet.");
								printf("\n");

								TypeWithColor(12, nTypeSpeed, "Time is running out!");
								printf("\n");
								printf("\n");

								TypeWithColor(15, nFastTypeSpeed, "What do you do?");
								printf("\n");

								TypeWithColor(15, nTypeSpeed, "1.");
								TypeWithColor(12, nTypeSpeed, "Fortnite Dance");
								TypeWithColor(15, nTypeSpeed, "at the tree. This will work trust me.");
								printf("\n");

								TypeWithColor(15, nTypeSpeed, "2.");
								TypeWithColor(12, nTypeSpeed, "Use a ladder");
								TypeWithColor(15, nTypeSpeed, "to climb the tree. I mean, logically...?");
								printf("\n");
							}

							//If option 2 was picked (Roll towards yard)
							else if (Player_a.Choice2 == 2)
							{

							}
					}

					if (nReachedEnd == 0)
					{
						printf(">>");
						scanf("%d", &Player_a.Choice3);
					}

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
							TypeWithColor(15, nTypeSpeed, "You, in your");
							TypeWithColor(12, nTypeSpeed, "panic");
							TypeWithColor(15, nTypeSpeed, "and");
							TypeWithColor(12, nTypeSpeed, "confusion");
							TypeWithColor(15, nTypeSpeed, "perfectly exucute the");
							TypeWithColor(14, nTypeSpeed, "\"Floss\"");
							TypeWithColor(15, nTypeSpeed, "and the");
							TypeWithColor(14, nTypeSpeed, "\"Default Dance\".");
							printf("\n");

							TypeWithColor(15, nTypeSpeed, "The sky disliked that.");
							printf("\n");

							TypeWithColor(15, nTypeSpeed, "In response to your");
							TypeWithColor(12, nTypeSpeed, "shameful display");
							TypeWithColor(15, nTypeSpeed, "and loss of dignity.");
							printf("\n");

							TypeWithColor(14, nTypeSpeed, "It rains.");
							TypeWithColor(15, nTypeSpeed, "Your horrible dancing has made it");
							TypeWithColor(11, nTypeSpeed, "rain");
							printf("\n");

							nReachedEnd = 2;
						}

						//If option 2 was picked (Use the Ladder)
						else if (Player_a.Choice3 == 2)
						{
							//Premise
							ClearScreen();
							TypeWithColor(15, nTypeSpeed, "Using the brain that every person is born with,");
							TypeWithColor(15, nTypeSpeed, "You cleverly grab the nearby");
							TypeWithColor(14, nTypeSpeed, "ladder");
							TypeWithColor(15, nTypeSpeed, "and prop it up against the side of the tree which isn't");
							TypeWithColor(12, nTypeSpeed, "burning.");
							printf("\n");

							TypeWithColor(15, nTypeSpeed, "Racing the");
							TypeWithColor(12, nTypeSpeed, "fire");
							TypeWithColor(15, nTypeSpeed, "you hastily coax your");
							TypeWithColor(14, nTypeSpeed, "pet");
							TypeWithColor(15, nTypeSpeed, "towards you.");
							printf("\n");

							TypeWithColor(15, nTypeSpeed, "Unfortunately your");
							TypeWithColor(14, nTypeSpeed, "pet");
							TypeWithColor(15, nTypeSpeed, "doesn't seem to be the smartest of animals.");
							printf("\n");

							TypeWithColor(15, nTypeSpeed, "Your");
							TypeWithColor(14, nTypeSpeed, "pet");
							TypeWithColor(15, nTypeSpeed, "doesn't heed your calls, and the");
							TypeWithColor(12, nTypeSpeed, "fire");
							TypeWithColor(15, nTypeSpeed, "gets ever closer.");
							printf("\n");

							TypeWithColor(15, nTypeSpeed, "The");
							TypeWithColor(15, nTypeSpeed, "fire");
							TypeWithColor(11, nTypeSpeed, "singes your left foot and you begin to");
							TypeWithColor(15, nTypeSpeed, "wobble.");
							printf("\n");

							TypeWithColor(15, nTypeSpeed, "Amazingly though, you find yourself");
							TypeWithColor(11, nTypeSpeed, "floating,");
							TypeWithColor(15, nTypeSpeed, "thinking quickly, although very confused, you consider your options.");
							printf("\n");
							printf("\n");

							TypeWithColor(15, nFastTypeSpeed, "What do you do?");
							printf("\n");

							TypeWithColor(15, nTypeSpeed, "1. Fly towards your cat and retrieve it from the");
							TypeWithColor(12, nTypeSpeed, "burning");
							TypeWithColor(15, nTypeSpeed, "tree.");
							printf("\n");

							TypeWithColor(15, nTypeSpeed, "2.");
							TypeWithColor(14, nTypeSpeed, "Fly");
							TypeWithColor(15, nTypeSpeed, "to the nearest fire station to get help.");
							printf("\n");
						}
					}
				}

				//If option 2 was picked (Jump Down Stairs)
				else if (Player_a.Choice1 == 2)
				{

				}

				if (nReachedEnd == 0)
				{
					printf(">>");
					scanf("%d", &Player_a.Choice4);
				}

				//Move to next case
				nTimeRemaining = 5;
			break;

			case 5:
				ClearScreen();

				//If option 1 was picked (Get the Pet)
				if(Player_a.Choice4 == 1)
				{
					//Premise
					ClearScreen();
					TypeWithColor(15, nTypeSpeed, "You");
					TypeWithColor(12, nTypeSpeed, "flail around");
					TypeWithColor(15, nTypeSpeed, "a little, trying to get the hang of your new");
					TypeWithColor(14, nTypeSpeed, "power.");
					printf("\n");

					TypeWithColor(15, nTypeSpeed, "Slowly, you ");
					TypeWithColor(11, nTypeSpeed, "drift");
					TypeWithColor(15, nTypeSpeed, "yourself over to your");
					TypeWithColor(14, nTypeSpeed, "pet.");
					printf("\n");
					printf("\n");

					TypeWithColor(15, nTypeSpeed, "Your");
					TypeWithColor(14, nTypeSpeed, "pet");
					TypeWithColor(12, nTypeSpeed, "disliked");
					TypeWithColor(15, nTypeSpeed, "that.");
					printf("\n");
					printf("\n");

					TypeWithColor(15, nTypeSpeed, "Your pet, looks at you with");
					TypeWithColor(12, nTypeSpeed, "fear");
					TypeWithColor(15, nTypeSpeed, "and inches away from you slowly.");
					printf("\n");

					TypeWithColor(14, nTypeSpeed, "With pleading desperation, you continue to");
					TypeWithColor(15, nTypeSpeed, "Make your way towards your");
					TypeWithColor(14, nTypeSpeed, "pet");
					printf("\n");

					nReachedEnd = 3;
				}

			break;

			case 6:
				ClearScreen();
				TypeWithColor(15, nTypeSpeed, "This game is about");
				TypeWithColor(11, nTypeSpeed, "choices");
				TypeWithColor(15, nTypeSpeed, "each time you make a different");
				TypeWithColor(11, nTypeSpeed, "choice");
				TypeWithColor(15, nTypeSpeed, "you get a different ending.");
				printf("\n");

				TypeWithColor(15, nTypeSpeed, "We encourage replaying >w<.");
				printf("\n");

				TypeWithColor(15, nTypeSpeed, "If a word is");
				TypeWithColor(14, nTypeSpeed, "yellow");
				TypeWithColor(15, nTypeSpeed, "then that");
				TypeWithColor(11, nTypeSpeed, "choice");
				TypeWithColor(15, nTypeSpeed, "is a safer one, but not always the better one.");
				printf("\n");

				TypeWithColor(15, nTypeSpeed, "If a word is");
				TypeWithColor(12, nTypeSpeed, "red");
				TypeWithColor(15, nTypeSpeed, "then that");
				TypeWithColor(11, nTypeSpeed, "choice");
				TypeWithColor(15, nTypeSpeed, "is a riskier one, and may result in some consequences.");
				printf("\n");

				TypeWithColor(15, nTypeSpeed, "If a word is");
				TypeWithColor(11, nTypeSpeed, "blue");
				TypeWithColor(15, nTypeSpeed, "it means that it is decribing where you currently are, and what it looks like.");
				printf("\n");
				printf("\n");

				TypeWithColor(15, nTypeSpeed, "1.");
				TypeWithColor(14, nTypeSpeed, "Return");
				TypeWithColor(15, nTypeSpeed, "to main menu.");
				printf("\n");

				TypeWithColor(15, nTypeSpeed, "2.");
				TypeWithColor(12, nTypeSpeed, "Bloopers");
				TypeWithColor(15, nTypeSpeed, "in the code.");
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
				TypeWithColor(15, nTypeSpeed, "I'll fill this up at a later date...");
				printf("\n");

				TypeWithColor(15, nTypeSpeed, "1.");
				TypeWithColor(14, nTypeSpeed, "Return");
				TypeWithColor(15, nTypeSpeed, "to main menu.");
				printf("\n");

				printf(">>");
				scanf("%d", &Player_a.Choice0);

				if(Player_a.Choice0 == 1)
				{
					nTimeRemaining = 0;
				}

				break;
			}//End of switch
		}//End of main game loop

		if (nReachedEnd == 1)
		{
			printf("\n");
			TypeWithColor(14, nTypeSpeed, "Reached Ending One: Immense Lethargy");
			break;
		}

		if (nReachedEnd == 2)
		{
			printf("\n");
			TypeWithColor(14, nTypeSpeed, "Reached Ending Two: Immense Shame");
			break;
		}

		if (nReachedEnd == 3)
		{
			printf("\n");
			TypeWithColor(14, nTypeSpeed, "Reached Ending Three: ...Into the Fire");
			break;
		}

	}//End of game
	while(nPlaying == 1);
}//End of main

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
