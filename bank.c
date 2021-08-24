#include <stdio.h>
#include <conio.h>
#include "global.h"
#include "login.h"
#include "menu.h"


void startproject();

int main(){
	displayLoginWindow();
	if (isCredentialTrue(USERNAME, PASSWORD) == 1)
	{
    printf("\n\nCredential match!\nLOADING");
    for(int i=0;i<=6;i++)
        {
            fordelay(100000000);
            printf(". ");
        }
		startproject();
	}else{
		
     printf("\n\nCredential Did not match!\nLOADING");
    for(int i=0;i<=6;i++)
        {
            fordelay(100000000);
            printf(". ");
            printf("\nEnter 1 to try again and 0 to exit:");
            scanf("%d",&main_exit);
            if (main_exit==1)
                    {

                        system("cls");
                        main();
                    }

            else if (main_exit==0)
                    {
                    system("cls");
                    menuExit();
                    }
            else
                    {
                      printf("\nInvalid!");
                    fordelay(1000000000);
                    system("cls");
                    printf(". ");
                    break;
                    

        }
            
        }
		getch();
	}

	return 0;
}
void startproject(){

    
     printf("\n\n\t\t\t\tWelcome to Menu\n\n");

     printf("\n\n\t\t[1] Create a new account\n\t\t");
     printf("[2] Update information of existing account\n\t\t");
     printf("[3] Transactions\n\t\t");
     printf("[4] Check the details of existing account\n\t\t");
     printf("[5] Remove existing account\n\t\t");
     printf("[6] View customer's list\n\t\t");
     printf("[7] ATM Feature\n\t\t");
     printf("[8] Exit\n\n\n\t\t Enter your choice: ");

     scanf("%d",&choice);

      switch(choice)
    {
        case 1:new_acc();
        break;
        case 2:edit();
        break;
        case 3:transact();
        break;
        case 4:see();
        break;
        case 5:erase();
        break;
        case 6:view_list();
        break;
        case 7:atm();
        break;
        case 8:closeAccount();
        break;
    }


    
    }

