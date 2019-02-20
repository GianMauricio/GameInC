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
	char content[] = "You wake up in a room, alone and afraid.";
	char content1[] = "You are not sure how you got here, or how to get out.";
	char content2[] = "\"Hello\""; 
	char content3[] = "a voice says from somewhere above you, or below you...";
	char content4[] = "you can't tell.";
	char content5[] = "What do you do?";
	char content6[] = "";
	
	TypeWithColor(15, 50, content); 
	printf("\n");
	     
    TypeWithColor(15, 50, content1);
    printf("\n");
    
	TypeWithColor(9, 100, content2);
	TypeWithColor(15, 50, content3);
	TypeWithColor(12, 50, content4);
	printf("\n");
  
	TypeWithColor(15, 50, content5); 
	printf("\n");
	
	scanf("%[^\n]%*c", &content6);   
	TypeWithColor(14, 50, content6);
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
