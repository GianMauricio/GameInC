/*
*	Author: Gian Mauricio
*	AUthor: Cyle Marty
*	Ext. Reference: StackOverflow
*	Purpose: Draft for the game using Story 1
* 	Notes: Any and all changes to the game will be reflected here
*				 : Code bloopers are still empty..?
* Functions:
* 	1. TypeWithColor: Displays a string of characters with a type effect
* 			and a color (Further detailed in function)
*		2. ClearScreen: Clears the current contents of the terminal
*		3. Main: contains the menu and the game loop
*/

#include <windows.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void TypeWithColor(int ColorCode, int TypeSpeed, char text[]);
void ClearScreen();

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
	int nTypeSpeed = 25;
	int nFastTypeSpeed = 10;
	int nSlowTypeSpeed = 100;
	int Version = 0;

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
							TypeWithColor(14, nTypeSpeed, "Limp");
							TypeWithColor(15, nTypeSpeed, "towards the yard.");
							printf("\n");

							//Option 2
							TypeWithColor(15, nTypeSpeed, "2.");
							TypeWithColor(12, nTypeSpeed, "Shout");
							TypeWithColor(15, nTypeSpeed, "for help, maybe someone will hear you.");
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
							TypeWithColor(14, nTypeSpeed, "Use a ladder");
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
							TypeWithColor(10, nTypeSpeed, "almost made you feel guilty");
							TypeWithColor(15, nTypeSpeed, "about your choices.");
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

								TypeWithColor(15, nTypeSpeed, "The");
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
								TypeWithColor(14, nTypeSpeed, "Grab");
								TypeWithColor(15, nTypeSpeed, "the nearby");
								TypeWithColor(11, nTypeSpeed, "rope.");
								printf("\n");

								TypeWithColor(15, nTypeSpeed, "2.");
								TypeWithColor(12, nTypeSpeed, "Stumble");
								TypeWithColor(15, nTypeSpeed, "towards the nearby");
								TypeWithColor(11, nTypeSpeed, "ladder.");
								printf("\n");
							}

							//If option 2 was picked (Shout for help)
							else if (Player_a.Choice2 == 2)
							{
								//Premise
								ClearScreen();
								TypeWithColor(15, nTypeSpeed, "The");
								TypeWithColor(12, nTypeSpeed, "fire");
								TypeWithColor(15, nTypeSpeed, "has almost reached your");
								TypeWithColor(14, nTypeSpeed, "pet.");
								printf("\n");

								TypeWithColor(15, nTypeSpeed, "The");
								TypeWithColor(12, nTypeSpeed, "pain");
								TypeWithColor(15, nTypeSpeed, "in your legs is too much for you, and you");
								TypeWithColor(12, nTypeSpeed, "collapse");
								TypeWithColor(15, nTypeSpeed, "to the ground.");
								printf("\n");

								TypeWithColor(15, nTypeSpeed, "Not knowing what else to do, you");
								TypeWithColor(12, nTypeSpeed, "desperately");
								TypeWithColor(15, nTypeSpeed, "cry out for");
								TypeWithColor(14, nTypeSpeed, "help.");
								printf("\n");

								TypeWithColor(15, nTypeSpeed, "In a shocking turn of events, shockwaves");
								TypeWithColor(12, nTypeSpeed, "ripple");
								TypeWithColor(15, nTypeSpeed, "outwards from your mouth and");
								TypeWithColor(12, nTypeSpeed, "lambast");
								TypeWithColor(15, nTypeSpeed, "the house, quickly");
								TypeWithColor(12, nTypeSpeed, "demolishing");
								TypeWithColor(15, nTypeSpeed, "it.");
								printf("\n");

								TypeWithColor(15, nSlowTypeSpeed, "\"That\'s not good\"");
								printf("\n");

								TypeWithColor(15, nTypeSpeed, "You think to yourself as you observe the");
								TypeWithColor(12, nTypeSpeed, "rubble");
								TypeWithColor(15, nTypeSpeed, "and");
								TypeWithColor(12, nTypeSpeed, "detritus");
								TypeWithColor(15, nTypeSpeed, "which was once your home.");
								printf("\n");
								printf("\n");

								TypeWithColor(14, nSlowTypeSpeed, "\"Meow\"");
								printf("\n");

								TypeWithColor(15, nTypeSpeed, "Comes a");
								TypeWithColor(14, nTypeSpeed, "sound");
								TypeWithColor(15, nTypeSpeed, "from behind you.");
								printf("\n");

								TypeWithColor(15, nTypeSpeed, "It seems that your");
								TypeWithColor(14, nTypeSpeed, "sonic outcry");
								TypeWithColor(15, nTypeSpeed, "managed to extinguish the");
								TypeWithColor(12, nTypeSpeed, "fire");
								TypeWithColor(15, nTypeSpeed, "which once engangered your");
								TypeWithColor(14, nTypeSpeed, "pet.");
								printf("\n");

								nReachedEnd = 5;
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
								TypeWithColor(10, nTypeSpeed, "perfectly exucute");
								TypeWithColor(15, nTypeSpeed, "the");
								TypeWithColor(14, nSlowTypeSpeed, "\"Floss\"");
								TypeWithColor(15, nTypeSpeed, "and the");
								TypeWithColor(14, nSlowTypeSpeed, "\"Default Dance\"");
								TypeWithColor(14, nSlowTypeSpeed, "despite never having practiced them before.");
								printf("\n");

								TypeWithColor(15, nTypeSpeed, "The sky disliked that.");
								printf("\n");

								TypeWithColor(15, nTypeSpeed, "In response to your");
								TypeWithColor(12, nTypeSpeed, "shameful display");
								TypeWithColor(15, nTypeSpeed, "and loss of dignity.");
								printf("\n");

								TypeWithColor(10, nTypeSpeed, "It rains.");
								TypeWithColor(15, nTypeSpeed, "Your horrible dancing has made it");
								TypeWithColor(11, nTypeSpeed, "rain");
								printf("\n");

								TypeWithColor(15, nTypeSpeed, "On the bright side, your");
								TypeWithColor(14, nTypeSpeed, "pet");
								TypeWithColor(15, nTypeSpeed, "is no longer in danger of");
								TypeWithColor(12, nTypeSpeed, "burning");
								TypeWithColor(15, nTypeSpeed, "to");
								TypeWithColor(14, nTypeSpeed, "death.");
								printf("\n");

								TypeWithColor(15, nTypeSpeed, "On the not bright side, as you celebrate your shameful victory your");
								TypeWithColor(14, nTypeSpeed, "pet");
								TypeWithColor(15, nTypeSpeed, "develops");
								TypeWithColor(12, nTypeSpeed, "pneumonia");
								TypeWithColor(15, nTypeSpeed, "and");
								TypeWithColor(12, nTypeSpeed, "dies");
								TypeWithColor(15, nTypeSpeed, "a week after.");
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
								TypeWithColor(10, nTypeSpeed, "floating,");
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
						//If option 1 was picked (Limp towards yard)
						if (Player_a.Choice2 == 1)
						{
							//If option 1 was picked (Use rope)
							if (Player_a.Choice3 == 1)
							{
								//Premise
								ClearScreen();
								TypeWithColor(15, nTypeSpeed, "Thinking quickly,");
								TypeWithColor(15, nTypeSpeed, "You grab the nearby");
								TypeWithColor(14, nTypeSpeed, "rope.");
								printf("\n");

								TypeWithColor(15, nTypeSpeed, "You're about ");
								TypeWithColor(11, nTypeSpeed, "10 feet");
								TypeWithColor(15, nTypeSpeed, "from the base of the tree.");
								printf("\n");

								TypeWithColor(15, nTypeSpeed, "From here you can think of two possibleuses for the");
								TypeWithColor(14, nTypeSpeed, "rope;");
								TypeWithColor(15, nTypeSpeed, "you could easily throw the rope around a branch which isn't");
								TypeWithColor(12, nTypeSpeed, "burning");
								TypeWithColor(15, nTypeSpeed, "and");
								TypeWithColor(14, nTypeSpeed, "rope-climb");
								TypeWithColor(15, nTypeSpeed, "towards your cat.");
								printf("\n");

								TypeWithColor(15, nTypeSpeed, "Or, you could attempt to");
								TypeWithColor(12, nTypeSpeed, "lasso");
								TypeWithColor(15, nTypeSpeed, "your ");
								TypeWithColor(14, nTypeSpeed, "pet");
								TypeWithColor(15, nTypeSpeed, "out of the tree, the rope seems long enough for this.");
								printf("\n");
								printf("\n");

								TypeWithColor(15, nFastTypeSpeed, "What do you do?");
								printf("\n");

								TypeWithColor(15, nTypeSpeed, "1.");
								TypeWithColor(12, nTypeSpeed, "Lasso");
								TypeWithColor(15, nTypeSpeed, "your");
								TypeWithColor(15, nTypeSpeed, "pet");
								TypeWithColor(15, nTypeSpeed, "out of the tree.");
								printf("\n");

								TypeWithColor(15, nTypeSpeed, "2.");
								TypeWithColor(14, nTypeSpeed, "Rope-climb");
								TypeWithColor(15, nTypeSpeed, "towards");
								TypeWithColor(15, nTypeSpeed, "your");
								TypeWithColor(15, nTypeSpeed, "pet");
								TypeWithColor(15, nTypeSpeed, "and grab it out of the tree.");
								printf("\n");
							}

							//If option 2 was picked (Use ladder)
							else if (Player_a.Choice3 == 2)
							{
								//Premise
								ClearScreen();
								TypeWithColor(15, nTypeSpeed, "You");
								TypeWithColor(12, nTypeSpeed, "crawl");
								TypeWithColor(15, nTypeSpeed, "towards the");
								TypeWithColor(14, nTypeSpeed, "ladder.");
								printf("\n");

								TypeWithColor(15, nTypeSpeed, "You try to stand up but your legs");
								TypeWithColor(12, nTypeSpeed, "betray");
								TypeWithColor(15, nTypeSpeed, "you.");
								printf("\n");

								TypeWithColor(15, nTypeSpeed, "Not knowing what else to do,");
								TypeWithColor(15, nTypeSpeed, "you use your arms");
								TypeWithColor(15, nTypeSpeed, "to heave the");
								TypeWithColor(14, nTypeSpeed, "ladder,");
								TypeWithColor(10, nTypeSpeed, "and throw it towards the tree!");
								printf("\n");

								TypeWithColor(15, nTypeSpeed, "You then");
								TypeWithColor(12, nTypeSpeed, "crawl");
								TypeWithColor(15, nTypeSpeed, "towards the");
								TypeWithColor(14, nTypeSpeed, "ladder,");
								TypeWithColor(15, nTypeSpeed, "and when you get to it\'s base...");
								printf("\n");

								TypeWithColor(15, nTypeSpeed, "You");
								TypeWithColor(15, nTypeSpeed, "pull yourself up the");
								TypeWithColor(14, nTypeSpeed, "ladder,");
								TypeWithColor(10, nTypeSpeed, "3 rungs at a time.");
								printf("\n");

								TypeWithColor(15, nTypeSpeed, "You lift your entire body up into the");
								TypeWithColor(12, nTypeSpeed, "burning");
								TypeWithColor(15, nTypeSpeed, "tree, and run towards your");
								TypeWithColor(14, nTypeSpeed, "pet.");
								printf("\n");

								TypeWithColor(15, nTypeSpeed, "You grab your");
								TypeWithColor(14, nTypeSpeed, "pet");
								TypeWithColor(15, nTypeSpeed, "and hold them close to you;");
								TypeWithColor(15, nTypeSpeed, "then you remember the");
								TypeWithColor(12, nTypeSpeed, "fire.");
								printf("\n");

								TypeWithColor(15, nTypeSpeed, "You turn around and face the");
								TypeWithColor(12, nTypeSpeed, "fire");
								TypeWithColor(15, nTypeSpeed, "and notice that the");
								TypeWithColor(14, nTypeSpeed, "ladder");
								TypeWithColor(15, nTypeSpeed, "is just inches away from you, but the");
								TypeWithColor(12, nTypeSpeed, "fire");
								TypeWithColor(15, nTypeSpeed, "is spreading towards it fast!");
								printf("\n");
								printf("\n");

								TypeWithColor(15, nFastTypeSpeed, "What do you do?");
								printf("\n");

								TypeWithColor(15, nTypeSpeed, "1. Use your newfound");
								TypeWithColor(10, nTypeSpeed, "strength");
								TypeWithColor(15, nTypeSpeed, "to climb down the");
								TypeWithColor(14, nTypeSpeed, "ladder");
								TypeWithColor(15, nTypeSpeed, "whilst still holding your");
								TypeWithColor(14, nTypeSpeed, "pet.");
								printf("\n");

								TypeWithColor(15, nTypeSpeed, "2.");
								TypeWithColor(12, nTypeSpeed, "Jump");
								TypeWithColor(15, nTypeSpeed, "off of the tree with your");
								TypeWithColor(14, nTypeSpeed, "pet");
								TypeWithColor(15, nTypeSpeed, "and hope for a good landing.");
								printf("\n");
							}
						}
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
					//If option 1 was picked (Run Down Stairs)
					if (Player_a.Choice1 == 1)
					{
						//If option 1 was picked (Sprint towards yard)
						if(Player_a.Choice2 == 1)
						{
							//If option 2 was picked (Use the ladder)
							if(Player_a.Choice3 == 2)
							{
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

									TypeWithColor(15, nTypeSpeed, "Slowly, you");
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

									TypeWithColor(15, nTypeSpeed, "With pleading desperation, you continue to");
									TypeWithColor(15, nTypeSpeed, "make your way towards your");
									TypeWithColor(14, nTypeSpeed, "pet.");
									printf("\n");

									TypeWithColor(15, nTypeSpeed, "Both you and your");
									TypeWithColor(14, nTypeSpeed, "pet");
									TypeWithColor(15, nTypeSpeed, "are now being closed in by the");
									TypeWithColor(12, nTypeSpeed, "fire.");
									printf("\n");

									TypeWithColor(15, nTypeSpeed, "In a last ditch effort, you");
									TypeWithColor(14, nTypeSpeed, "lunge");
									TypeWithColor(15, nTypeSpeed, "towards your");
									TypeWithColor(14, nTypeSpeed, "pet");
									TypeWithColor(15, nTypeSpeed, "and");
									TypeWithColor(12, nTypeSpeed, "tackle");
									TypeWithColor(14, nTypeSpeed, "them to the ground");
									printf("\n");

									TypeWithColor(15, nTypeSpeed, "As you and your");
									TypeWithColor(14, nTypeSpeed, "pet");
									TypeWithColor(12, nTypeSpeed, "careen");
									TypeWithColor(15, nTypeSpeed, "to the ground, you see a");
									TypeWithColor(12, nTypeSpeed, "burning");
									TypeWithColor(15, nTypeSpeed, "branch fall towards the both of you.");
									printf("\n");

									TypeWithColor(15, nTypeSpeed, "Thinking fast, you grasp your");
									TypeWithColor(14, nTypeSpeed, "pet");
									TypeWithColor(15, nTypeSpeed, "close to you as you");
									TypeWithColor(12, nTypeSpeed, "tumble.");
									printf("\n");

									TypeWithColor(15, nTypeSpeed, "You land, your");
									TypeWithColor(14, nTypeSpeed, "pet");
									TypeWithColor(15, nTypeSpeed, "lands beside you, the");
									TypeWithColor(12, nTypeSpeed, "burning branch");
									TypeWithColor(15, nTypeSpeed, "lands...");
									printf("\n");
									printf("\n");

									TypeWithColor(12, nSlowTypeSpeed, "...On You");
									printf("\n");
									printf("\n");

									TypeWithColor(15, nSlowTypeSpeed, "You begin to lose consiousness...");
									printf("\n");

									TypeWithColor(15, nTypeSpeed, "When you come to you see your");
									TypeWithColor(14, nTypeSpeed, "pet");
									TypeWithColor(15, nTypeSpeed, "right beside the IV drip.");
									printf("\n");

									TypeWithColor(15, nTypeSpeed, "You have");
									TypeWithColor(12, nTypeSpeed, "third-degree burns");
									TypeWithColor(15, nTypeSpeed, "all across your back and side");
									printf("\n");

									TypeWithColor(15, nTypeSpeed, "But, at least you saved your cat!");

									nReachedEnd = 3;
								}

								//If option 2 was picked (Fly to the station)
								else if(Player_a.Choice4 == 2)
								{
									//Premise
									ClearScreen();
									TypeWithColor(15, nTypeSpeed, "You");
									TypeWithColor(12, nTypeSpeed, "flail around");
									TypeWithColor(15, nTypeSpeed, "a little, trying to get the hang of your new");
									TypeWithColor(14, nTypeSpeed, "power.");
									printf("\n");

									TypeWithColor(15, nTypeSpeed, "Slowly, you");
									TypeWithColor(11, nTypeSpeed, "drift");
									TypeWithColor(15, nTypeSpeed, "yourself away from your yard and into th main road");
									printf("\n");

									TypeWithColor(15, nTypeSpeed, "Drifting");
									TypeWithColor(12, nTypeSpeed, "slowly,");
									TypeWithColor(15, nTypeSpeed, "you make your way to the");
									TypeWithColor(11, nTypeSpeed, "fire station.");
									printf("\n");

									TypeWithColor(15, nTypeSpeed, "You land.");
									printf("\n");

									TypeWithColor(15, nTypeSpeed, "Making your way");
									TypeWithColor(11, nTypeSpeed, "inside");
									TypeWithColor(15, nTypeSpeed, "the station, you request urgent");
									TypeWithColor(14, nTypeSpeed, "help,");
									TypeWithColor(15, nTypeSpeed, "It takes all of");
									TypeWithColor(12, nTypeSpeed, "5 minutes");
									TypeWithColor(15, nTypeSpeed, "and a firetruck in on the way to your house...");
									printf("\n");
									printf("\n");

									TypeWithColor(12, nTypeSpeed, "Sadly,");
									TypeWithColor(15, nTypeSpeed, "it seems like the truck did not arrive on time,");
									TypeWithColor(15, nTypeSpeed, "You see a");
									TypeWithColor(12, nTypeSpeed, "burnt");
									TypeWithColor(15, nTypeSpeed, "tree, and a very");
									TypeWithColor(12, nTypeSpeed, "dead");
									TypeWithColor(14, nTypeSpeed, "pet.");
									printf("\n");

									nReachedEnd = 4;
								}
							}
						}
					}

					//If option 2 was picked (Jump Down Stairs)
					else if (Player_a.Choice1 == 2)
					{
						//If option 1 was picked (Limp towards yard)
						if(Player_a.Choice2 == 1)
						{
							//If option 2 was picked (Use the ladder)
							if(Player_a.Choice3 == 2)
							{
								//If option 1 was picked (Use Unreasonable strength)
								if(Player_a.Choice4 == 1)
								{
									//Premise
									ClearScreen();
									TypeWithColor(15, nTypeSpeed, "You thunder towards the");
									TypeWithColor(14, nTypeSpeed, "ladder,");
									TypeWithColor(15, nTypeSpeed, "and plant your feet firmly on the first rung,");
									TypeWithColor(15, nTypeSpeed, "ignoring the");
									TypeWithColor(12, nTypeSpeed, "pain.");
									printf("\n");

									TypeWithColor(15, nTypeSpeed, "Using the free hand you have, and your");
									TypeWithColor(12, nTypeSpeed, "broken legs,");
									TypeWithColor(15, nTypeSpeed, "you contort down the");
									TypeWithColor(14, nTypeSpeed, "ladder,");
									TypeWithColor(15, nTypeSpeed, "bracing the");
									TypeWithColor(12, nTypeSpeed, "pain");
									TypeWithColor(15, nTypeSpeed, "as you go.");
									printf("\n");

									TypeWithColor(15, nTypeSpeed, "As you approach the ground you miss");
									TypeWithColor(12, nTypeSpeed, "miss");
									TypeWithColor(15, nTypeSpeed, "the last rung and your footing");
									TypeWithColor(12, nTypeSpeed, "slips.");
									printf("\n");

									TypeWithColor(15, nTypeSpeed, "You hit the ground,");
									TypeWithColor(12, nSlowTypeSpeed, "hard.");
									printf("\n");


									TypeWithColor(15, nTypeSpeed, "You are stricken with a bout of immense");
									TypeWithColor(12, nTypeSpeed, "pain,");
									TypeWithColor(15, nTypeSpeed, "your hands");
									TypeWithColor(10, nTypeSpeed, "clench");
									TypeWithColor(15, nTypeSpeed, "with");
									TypeWithColor(12, nTypeSpeed, "pain");
									TypeWithColor(15, nTypeSpeed, "but you regain your footing.");
									printf("\n");

									TypeWithColor(15, nTypeSpeed, "As you regain your senses, the first thing you notice is a");
									TypeWithColor(12, nTypeSpeed, "wet");
									TypeWithColor(15, nTypeSpeed, "feeling in one of your hands.");
									printf("\n");

									TypeWithColor(15, nTypeSpeed, "Looking at it you notice the");
									TypeWithColor(12, nTypeSpeed, "blood");
									TypeWithColor(15, nTypeSpeed, "and the");
									TypeWithColor(12, nTypeSpeed, "guts.");
									printf("\n");

									TypeWithColor(15, nTypeSpeed, "Looking down in");
									TypeWithColor(12, nTypeSpeed, "fear");
									TypeWithColor(15, nTypeSpeed, "you see the");
									TypeWithColor(12, nTypeSpeed, "remains");
									TypeWithColor(15, nTypeSpeed, "of your once beloved");
									TypeWithColor(14, nTypeSpeed, "pet.");
									printf("\n");

									nReachedEnd = 6;
								}

								//If option 2 was picked (Jump out of the tree)
								else if(Player_a.Choice4 == 2)
								{
									//Premise
									ClearScreen();
									TypeWithColor(15, nTypeSpeed, "You");
									TypeWithColor(12, nTypeSpeed, "jumped,");
									TypeWithColor(15, nTypeSpeed, "despite your better judgement.");
									printf("\n");

									TypeWithColor(15, nTypeSpeed, "Time seems to");
									TypeWithColor(10, nTypeSpeed, "slow to a crawl");
									TypeWithColor(15, nTypeSpeed, "as you fall to the ground.");
									printf("\n");

									TypeWithColor(15, nTypeSpeed, "You begin to think of what life");
									TypeWithColor(11, nTypeSpeed, "choices");
									TypeWithColor(15, nTypeSpeed, "led to this point, was your");
									TypeWithColor(14, nTypeSpeed, "pet");
									TypeWithColor(15, nTypeSpeed, "really worth all this");
									TypeWithColor(12, nTypeSpeed, "pain?");
									printf("\n");

									TypeWithColor(15, nTypeSpeed, "As you see the ground inching ever closer, you begin to get");
									TypeWithColor(12, nTypeSpeed, "grim thoughts,");
									TypeWithColor(15, nTypeSpeed, "what if you don\'t walk away from this?");
									printf("\n");

									TypeWithColor(15, nTypeSpeed, "You");
									TypeWithColor(12, nSlowTypeSpeed, "shudder.");
									printf("\n");

									TypeWithColor(15, nTypeSpeed, "You try to reassure yourself,");
									TypeWithColor(14, nTypeSpeed, "rationalizing");
									TypeWithColor(15, nTypeSpeed, "and");
									TypeWithColor(14, nTypeSpeed, "hoping.");
									printf("\n");

									TypeWithColor(15, nTypeSpeed, "The ground is so close now, you decide to take stock; your legs are in");
									TypeWithColor(12, nTypeSpeed, "pain,");
									TypeWithColor(15, nTypeSpeed, "you\'re clasping your");
									TypeWithColor(14, nTypeSpeed, "pet");
									TypeWithColor(14, nTypeSpeed, "close to you.");
									printf("\n");

									TypeWithColor(15, nTypeSpeed, "The ground is less than a meter away, you contemplate...");
									printf("\n");

									nReachedEnd = 7;
								}
							}

							//If option 1 was picked (Use the rope)
							else if (Player_a.Choice3 == 1)
							{
								//If option 1 was picked (Lasso)
								if(Player_a.Choice4 == 1)
								{
									//Premise
									ClearScreen();
									TypeWithColor(15, nTypeSpeed, "You deftly loop the rope into a crude");
									TypeWithColor(14, nTypeSpeed, "lasso,");
									TypeWithColor(15, nTypeSpeed, "then you eye your");
									TypeWithColor(14, nTypeSpeed, "pet,");
									TypeWithColor(15, nTypeSpeed, "trying to get the best angle.");
									printf("\n");

									TypeWithColor(15, nTypeSpeed, "Time seems to");
									TypeWithColor(10, nTypeSpeed, "slow to a crawl");
									TypeWithColor(15, nTypeSpeed, "as you aim.");
									printf("\n");

									TypeWithColor(15, nTypeSpeed, "You hurl the lasso towards your");
									TypeWithColor(14, nTypeSpeed, "pet");
									TypeWithColor(15, nTypeSpeed, "and hope that you aimed correctly.");
									printf("\n");

									TypeWithColor(15, nTypeSpeed, "The rope lands and your");
									TypeWithColor(14, nTypeSpeed, "pet is caught within the loop!");
									printf("\n");

									TypeWithColor(15, nTypeSpeed, "You pull");
									TypeWithColor(12, nTypeSpeed, "hard");
									TypeWithColor(15, nTypeSpeed, "hoping to get your pet away from the");
									TypeWithColor(12, nTypeSpeed, "fire");
									TypeWithColor(15, nTypeSpeed, "as fast as possible.");
									printf("\n");

									TypeWithColor(15, nTypeSpeed, "Your");
									TypeWithColor(14, nTypeSpeed, "pet");
									TypeWithColor(10, nTypeSpeed, "flies through the air");
									TypeWithColor(15, nTypeSpeed, "and lands with a");
									TypeWithColor(12, nTypeSpeed, "thump.");
									printf("\n");

									TypeWithColor(15, nTypeSpeed, "You");
									TypeWithColor(12, nSlowTypeSpeed, "shudder.");
									printf("\n");

									TypeWithColor(15, nTypeSpeed, "You approach the place where your,");
									TypeWithColor(14, nTypeSpeed, "pet");
									TypeWithColor(15, nTypeSpeed, "landed, still fighting the");
									TypeWithColor(12, nTypeSpeed, "pain");
									TypeWithColor(15, nTypeSpeed, "in your legs.");
									printf("\n");

									TypeWithColor(15, nTypeSpeed, "The site almost makes you");
									TypeWithColor(12, nTypeSpeed, "vomit,");
									TypeWithColor(15, nTypeSpeed, "your");
									TypeWithColor(14, nTypeSpeed, "pet");
									TypeWithColor(14, nTypeSpeed, "has the rope around their neck.");
									printf("\n");

									nReachedEnd = 8;
								}

								//If option 2 was picked (Climb tree)
								else if(Player_a.Choice4 == 2)
								{
									//Premise
									ClearScreen();
									TypeWithColor(15, nTypeSpeed, "You deftly loop the rope into a crude");
									TypeWithColor(14, nTypeSpeed, "lasso,");
									TypeWithColor(15, nTypeSpeed, "then you eye your");
									TypeWithColor(14, nTypeSpeed, "pet,");
									TypeWithColor(15, nTypeSpeed, "trying to get the best angle.");
									printf("\n");

									TypeWithColor(15, nTypeSpeed, "Time seems to");
									TypeWithColor(10, nTypeSpeed, "slow to a crawl");
									TypeWithColor(15, nTypeSpeed, "as you aim.");
									printf("\n");

									TypeWithColor(15, nTypeSpeed, "You hurl the lasso towards a branch near your");
									TypeWithColor(14, nTypeSpeed, "pet");
									TypeWithColor(15, nTypeSpeed, "and hope that you aimed correctly.");
									printf("\n");

									TypeWithColor(15, nTypeSpeed, "The rope lands and");
									TypeWithColor(15, nTypeSpeed, "you pull");
									TypeWithColor(12, nTypeSpeed, "hard,");
									TypeWithColor(15, nTypeSpeed, "the rope goes taught in your hands, having lassoed the branch successfully.");
									printf("\n");

									TypeWithColor(15, nTypeSpeed, "Wasting no time, you brace the rope and begin");
									TypeWithColor(12, nTypeSpeed, "free-climbing");
									TypeWithColor(10, nTypeSpeed, "towards your pet.");
									printf("\n");

									TypeWithColor(15, nTypeSpeed, "You reach the top of the rope and");
									TypeWithColor(14, nTypeSpeed, "climb");
									TypeWithColor(15, nTypeSpeed, "onto the branch.");
									printf("\n");

									TypeWithColor(15, nTypeSpeed, "You approach your");
									TypeWithColor(14, nTypeSpeed, "pet");
									TypeWithColor(15, nTypeSpeed, "and grab it from behind, the");
									TypeWithColor(12, nTypeSpeed, "pain");
									TypeWithColor(15, nTypeSpeed, "in your legs makes it quite hard to balance.");
									printf("\n");

									TypeWithColor(15, nTypeSpeed, "But you manage to saunter back to the");
									TypeWithColor(14, nTypeSpeed, "rope");
									TypeWithColor(15, nTypeSpeed, "only to find that it has");
									TypeWithColor(12, nTypeSpeed, "caught fire.");
									printf("\n");

									nReachedEnd = 9;
								}
							}
						}
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

					TypeWithColor(15, nTypeSpeed, "If a word is");
					TypeWithColor(10, nTypeSpeed, "green");
					TypeWithColor(15, nTypeSpeed, "it means that it is decribing an unexpected super human act!");
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
					TypeWithColor(15, nFastTypeSpeed, "Curious little");
					TypeWithColor(14, nFastTypeSpeed, "player");
					TypeWithColor(15, nFastTypeSpeed, "aren\'t you?");
					printf("\n");
					printf("\n");

					TypeWithColor(15, nFastTypeSpeed, "- Choices of the player always lead to the same ending.");
					TypeWithColor(10, nFastTypeSpeed, "(Fixed)");
					printf("\n");

					TypeWithColor(15, nFastTypeSpeed, "- Punctuation marks shouldn\'t be colored");
					TypeWithColor(12, nFastTypeSpeed, "(Not fixed)");
					printf("\n");

					TypeWithColor(15, nFastTypeSpeed, "-");
					TypeWithColor(12, nFastTypeSpeed, "\"Marty is fat\"");
					TypeWithColor(15, nFastTypeSpeed, "was found in the code.");
					TypeWithColor(10, nFastTypeSpeed, "(Fixed?)");
					printf("\n");

					TypeWithColor(15, nFastTypeSpeed, "- Legacy code still persists on the Git.");
					TypeWithColor(10, nFastTypeSpeed, "(Fixed)");
					printf("\n");

					TypeWithColor(15, nFastTypeSpeed, "- Add foolproofing to the code.");
					TypeWithColor(12, nFastTypeSpeed, "(Not fixed)");
					printf("\n");

					TypeWithColor(15, nFastTypeSpeed, "- Persistent warning for");
					TypeWithColor(12, nFastTypeSpeed, "conflicting");
					TypeWithColor(15, nFastTypeSpeed, "types for the");
					TypeWithColor(10, nFastTypeSpeed, "ClearScreen");
					TypeWithColor(15, nFastTypeSpeed, "function.");
					TypeWithColor(10, nFastTypeSpeed, "(Fixed)");
					printf("\n");

					TypeWithColor(15, nFastTypeSpeed, "- Function for add sound doesn\'t work");
					TypeWithColor(12, nFastTypeSpeed, "(Not fixed)");
					printf("\n");

					TypeWithColor(15, nFastTypeSpeed, "- Function for add sound doesn\'t work");
					TypeWithColor(12, nFastTypeSpeed, "(Not fixed)");
					printf("\n");

					TypeWithColor(15, nFastTypeSpeed, "- Find ways to shorten the code");
					TypeWithColor(10, nFastTypeSpeed, "(Fixed)");
					printf("\n");

					TypeWithColor(15, nFastTypeSpeed, "- Function for typing and for changing the color can be consolidated");
					TypeWithColor(10, nFastTypeSpeed, "(Fixed)");
					printf("\n");

					TypeWithColor(15, nFastTypeSpeed, "- Implement");
					TypeWithColor(10, nFastTypeSpeed, "ChangeLog");
					TypeWithColor(10, nFastTypeSpeed, "(Fixed)");
					printf("\n");

					TypeWithColor(15, nFastTypeSpeed, "- Consider adding UI?");
					TypeWithColor(12, nFastTypeSpeed, "(Not fixed)");
					TypeWithColor(15, nFastTypeSpeed, "(Didn\'t even try TBH)");
					printf("\n");
					printf("\n");

					TypeWithColor(15, nTypeSpeed, "1.");
					TypeWithColor(14, nTypeSpeed, "Return");
					TypeWithColor(15, nTypeSpeed, "to main menu.");
					printf("\n");

					TypeWithColor(15, nTypeSpeed, "2.");
					TypeWithColor(14, nTypeSpeed, "View");
					TypeWithColor(15, nTypeSpeed, "full");
					TypeWithColor(10, nTypeSpeed, "ChangeLog.");
					printf("\n");

					printf(">>");
					scanf("%d", &Player_a.Choice0);

					if(Player_a.Choice0 == 1)
					{
						nTimeRemaining = 0;
					}

					else if(Player_a.Choice0 == 1)
					{
						nTimeRemaining = 8;
					}

				break;

				case 8:
					ClearScreen();
					TypeWithColor(15, nFastTypeSpeed, "Begin");
					TypeWithColor(10, nFastTypeSpeed, "ChangeLog.");
					printf("\n");
					printf("\n");

					TypeWithColor(15, nFastTypeSpeed, "Which version would you like to view?");
					printf("\n");
					printf("\n");

					TypeWithColor(15, nTypeSpeed, "1. Version 1");
					printf("\n");

					TypeWithColor(15, nTypeSpeed, "2. Version 2");
					printf("\n");

					TypeWithColor(15, nTypeSpeed, "3. Version 3");
					printf("\n");

					TypeWithColor(15, nTypeSpeed, "4. Version 4");
					printf("\n");

					printf(">>");
					scanf("%d", &Version);

					switch(Version)
					{
						case 1:
							TypeWithColor(15, nFastTypeSpeed, "Version 1:");
							printf("\n");

							TypeWithColor(10, nFastTypeSpeed, "- Tested switch structure");
							printf("\n");

							TypeWithColor(10, nFastTypeSpeed, "- Created basic function for typing effect");
							printf("\n");

							TypeWithColor(10, nFastTypeSpeed, "- Created basic function for color change");
							printf("\n");

							TypeWithColor(12, nFastTypeSpeed, "- Problem with story (there is none)");
							printf("\n");

							TypeWithColor(12, nFastTypeSpeed, "- Problem with ConsoleAttributes, causes exit return status error");
							printf("\n");
						break;

						case 2:
							TypeWithColor(15, nFastTypeSpeed, "Version 2:");
							printf("\n");

							TypeWithColor(12, nFastTypeSpeed, "- Deleted color fuction");
							printf("\n");

							TypeWithColor(10, nFastTypeSpeed, "- Created composite function for typing effect with color");
							printf("\n");

							TypeWithColor(12, nFastTypeSpeed, "- Deleted color change function");
							printf("\n");

							TypeWithColor(10, nFastTypeSpeed, "- Added story");
							printf("\n");

							TypeWithColor(12, nFastTypeSpeed, "- Problem with ConsoleAttributes, causes exit return status error");
							printf("\n");
						break;

						case 3:
							TypeWithColor(15, nFastTypeSpeed, "Version 3:");
							printf("\n");

							TypeWithColor(10, nFastTypeSpeed, "- Optimized the if-else statements to make them less obtuse");
							printf("\n");

							TypeWithColor(10, nFastTypeSpeed, "- Encoded about 50% of the story");
							printf("\n");

							TypeWithColor(12, nFastTypeSpeed, "- Encountered issues with switch statement lacking a default statement");
							printf("\n");
						break;

						case 4:
							TypeWithColor(15, nFastTypeSpeed, "Version 4:");
							printf("\n");

							TypeWithColor(10, nFastTypeSpeed, "- Added 2 endings to the original story");
							printf("\n");

							TypeWithColor(10, nFastTypeSpeed, "- Encoded about 90% of the story");
							printf("\n");

							TypeWithColor(12, nFastTypeSpeed, "- Encountered issues with switch statement lacking a default statement");
							printf("\n");
						break;
					}

					printf("\n");
					printf("\n");
					TypeWithColor(15, nTypeSpeed, "1.");
					TypeWithColor(14, nTypeSpeed, "Return");
					TypeWithColor(15, nTypeSpeed, "to main menu.");
					printf("\n");

					TypeWithColor(15, nTypeSpeed, "2.");
					TypeWithColor(14, nTypeSpeed, "View");
					TypeWithColor(15, nTypeSpeed, "another version.");
					printf("\n");

					printf(">>");
					scanf("%d", &Player_a.Choice0);

					if(Player_a.Choice0 == 1)
					{
						nTimeRemaining = 0;
					}

					else if(Player_a.Choice0 == 2)
					{
						nTimeRemaining = 8;
					}
				break;
			}//End of switch
		}//End of main game loop

		//Endings
		if (nReachedEnd == 1)
		{
			printf("\n");
			TypeWithColor(14, nTypeSpeed, "Reached Ending One: Immense Lethargy");
		}

		if (nReachedEnd == 2)
		{
			printf("\n");
			TypeWithColor(14, nTypeSpeed, "Reached Ending Two: Immense Shame");
		}

		if (nReachedEnd == 3)
		{
			printf("\n");
			TypeWithColor(14, nTypeSpeed, "Reached Ending Three: ...Into the Fire");
		}

		if (nReachedEnd == 4)
		{
			printf("\n");
			TypeWithColor(14, nTypeSpeed, "Reached Ending Four: Fly faster next time");
		}

		if (nReachedEnd == 5)
		{
			printf("\n");
			TypeWithColor(14, nTypeSpeed, "Reached Ending Five: At least you saved your pet");
		}

		if (nReachedEnd == 6)
		{
			printf("\n");
			TypeWithColor(14, nTypeSpeed, "Reached Ending Six: All that effort, for nothing");
		}

		if (nReachedEnd == 7)
		{
			printf("\n");
			printf("\n");
			TypeWithColor(14, nSlowTypeSpeed, "For one last time, you consider your options.");
			printf("\n");
			printf("\n");

			TypeWithColor(15, nTypeSpeed, "1. Pitch yourself down and");
			TypeWithColor(12, nSlowTypeSpeed, "shield");
			TypeWithColor(15, nSlowTypeSpeed, "your pet.");
			printf("\n");

			TypeWithColor(15, nTypeSpeed, "2. Pitch your");
			TypeWithColor(14, nTypeSpeed, "pet");
			TypeWithColor(15, nTypeSpeed, "down and");
			TypeWithColor(12, nSlowTypeSpeed, "shield");
			TypeWithColor(15, nSlowTypeSpeed, "yourself.");
			printf("\n");

			printf(">>");
			scanf("%d", &Player_a.Choice5);

			if (Player_a.Choice5 == 1)
			{
				ClearScreen();
				TypeWithColor(15, nTypeSpeed, "You\'re lying on your side, and you find it very hard to");
				TypeWithColor(12, nTypeSpeed, "breathe.");
				printf("\n");

				TypeWithColor(15, nTypeSpeed, "You know that you\'re");
				TypeWithColor(12, nTypeSpeed, "dying.");
				printf("\n");

				TypeWithColor(15, (nTypeSpeed + 20), "Your");
				TypeWithColor(12, (nTypeSpeed + 20), "consiousness fades.");
				printf("\n");

				TypeWithColor(15, (nTypeSpeed + 20), "You know that you\'re");
				TypeWithColor(12, (nTypeSpeed + 20), "dying.");
				printf("\n");

				TypeWithColor(15, (nTypeSpeed + 50), "You feel your");
				TypeWithColor(14, (nTypeSpeed + 50), "pet");
				TypeWithColor(15, (nTypeSpeed + 50), "climb out of your arms.");
				printf("\n");

				TypeWithColor(15, (nSlowTypeSpeed + 30), "And though, you know that you\'re");
				TypeWithColor(12, (nSlowTypeSpeed + 30), "dying;");
				TypeWithColor(15, (nSlowTypeSpeed + 30), "you can do so happily.");
				printf("\n");
				printf("\n");

				TypeWithColor(14, nSlowTypeSpeed, "Reached Ending Seven:");
				TypeWithColor(10, nSlowTypeSpeed, "A True Hero");
			}

			else if (Player_a.Choice5 == 2)
			{
				ClearScreen();
				TypeWithColor(15, nTypeSpeed, "You\'re lying on your side, and you find it very hard to");
				TypeWithColor(12, nTypeSpeed, "breathe.");
				printf("\n");
				printf("\n");

				TypeWithColor(12, nSlowTypeSpeed, "Blood.");
				printf("\n");
				printf("\n");

				TypeWithColor(15, nTypeSpeed, "The first thing you notice is the feeling of");
				TypeWithColor(12, nTypeSpeed, "blood");
				TypeWithColor(15, nTypeSpeed, "across your body, you ignore it.");
				printf("\n");

				TypeWithColor(15, nTypeSpeed, "You take in a breath of air, and you smell the");
				TypeWithColor(12, nTypeSpeed, "putrid death");
				TypeWithColor(15, nTypeSpeed, "and");
				TypeWithColor(12, nTypeSpeed, "charred wood");
				TypeWithColor(15, nTypeSpeed, "in the air, you ignore that too.");
				printf("\n");

				TypeWithColor(15, nTypeSpeed, "You stand up, and");
				TypeWithColor(12, nTypeSpeed, "pain");
				TypeWithColor(15, nTypeSpeed, "shoots through your legs, it\'s easy to ignore that now...");
				printf("\n");

				TypeWithColor(15, nSlowTypeSpeed, "You look back, and you see the");
				TypeWithColor(12, nSlowTypeSpeed, "spilled entrails");
				TypeWithColor(15, nSlowTypeSpeed, "of your");
				TypeWithColor(14, nSlowTypeSpeed, "pet,");
				TypeWithColor(15, nSlowTypeSpeed, "you close your eyes, and ignore that as well.");
				printf("\n");

				TypeWithColor(15, nSlowTypeSpeed, "You walk away.");
				printf("\n");
				printf("\n");

				TypeWithColor(14, nSlowTypeSpeed, "Reached Ending Eight:");
				TypeWithColor(12, nSlowTypeSpeed, "Only Human");
			}
		}

		if (nReachedEnd == 8)
		{
			printf("\n");
			TypeWithColor(14, nTypeSpeed, "Reached Ending Nine: The Worst Ending");
		}

		if (nReachedEnd == 9)
		{
			printf("\n");
			printf("\n");
			TypeWithColor(14, nTypeSpeed, "You consider your options.");
			printf("\n");
			printf("\n");

			TypeWithColor(15, nTypeSpeed, "1. Ignore the");
			TypeWithColor(12, nTypeSpeed, "fire");
			TypeWithColor(15, nTypeSpeed, "and rappel down the");
			TypeWithColor(14, nTypeSpeed, "rope");
			TypeWithColor(15, nTypeSpeed, "anyway.");
			printf("\n");

			TypeWithColor(15, nTypeSpeed, "2.");
			TypeWithColor(14, nTypeSpeed, "Rappel");
			TypeWithColor(15, nTypeSpeed, "down the rope but");
			TypeWithColor(15, nTypeSpeed, "jump of halfway, to avoid the");
			TypeWithColor(12, nTypeSpeed, "fire.");
			printf("\n");

			printf(">>");
			scanf("%d", &Player_a.Choice5);

			if (Player_a.Choice5 == 1)
			{
				ClearScreen();

				printf("\n");
				TypeWithColor(14, nSlowTypeSpeed, "Reached Ending Ten:");
				TypeWithColor(14, nSlowTypeSpeed, "Ignorance Induces Incapacitation");
			}

			else if (Player_a.Choice5 == 2)
			{
				ClearScreen();

				printf("\n");
				TypeWithColor(14, nSlowTypeSpeed, "Reached Ending Eleven:");
				TypeWithColor(12, nSlowTypeSpeed, "The Best Ending");
			}
		}

		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		TypeWithColor(14, nSlowTypeSpeed, "Play again?");
		printf("\n");
		printf("\n");

		TypeWithColor(15, nTypeSpeed, "1. Yes!");
		printf("\n");

		TypeWithColor(15, nTypeSpeed, "2. No...");
		printf("\n");

		printf(">>");
		scanf("%d", &nPlaying);
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
