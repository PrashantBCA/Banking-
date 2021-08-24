#ifndef LOGIN

#define LOGIN

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include "global.h"

void displayLoginWindow(){
	int i = 0;
	char ch;
	system("CLS");
	//clrscr();   
	printf("\n\n\n\n\n\n");
	printf("\t\t\tUsername : ");
	scanf(" %s", USERNAME);
	printf("\t\t\tPassword : ");
    
	// getch();
	// ch = getch();
	// while(ch != '\0'){
	// 	printf("%c", '*');
	// 	PASSWORD[i] = ch;
	// 	i++;
	// 	ch = getch();
	// }
	// PASSWORD[i] = '\0';

	ch = getch();

	for (int i = 0; i < 4; i++)
	{
		printf("*");
		// printf("%d",i);
	PASSWORD[i] = ch;
	 	
	 	ch = getch();
	}

	// PASSWORD[i] = '\0';
	// printf("%s",PASSWORD);
	

	printf("\n\n\n\n\n\n");

}
int isCredentialTrue(char uname[20], char pass[20]){
	if (strcmp(uname, "hello") == 0 && strcmp(pass, "bank") == 0)
	{
		return 1;
	} else {
        return 0;
    }
}



#endif