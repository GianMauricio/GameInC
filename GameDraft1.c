/*
*	Author: Gian Mauricio
*	Ext. Reference: StackOverflow
*	Purpose: Structural Template for game
* 	Notes: This script also serves as the test script for new features to the game
*/

#include <windows.h>
#include <string.h>            
#include <stdio.h>    

void TypeWithColor(int ColorCode, int TypeSpeed, char text[]);

void main()
{
	int choice;
	int nTimeRemaining = 1;
	char content[] = "There is a cat stucked in a burning tree.";
	char q1[] = "What do you do?";
	char a1[] = "1. Jump out of the window";
	char a2[] = "2. Run down as quick as fuck down the stairs";
	char q2[] = "You're already in your lawn where the burning tree is. You see a hose to your left and a dog to your right. ";
	
	
	while(nTimeRemaining < 11)
	{
		switch (nTimeRemaining)
		{
			case 1: 
				
				TypeWithColor(15, 50, content); 
				printf("\n");
				
				TypeWithColor(12, 10, q1); 
				printf("\n");
				
				TypeWithColor(9, 50, a1); 
				printf("\n");
				TypeWithColor(10, 50, a2); 
				printf("\n");
				break;
			case 2: 
				break;
		    case 3: 
		    	break;
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
