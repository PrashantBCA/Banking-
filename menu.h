
#ifndef menu

#define menu

void new_acc(){

        FILE * ptr;

        ptr=fopen("customer_record.dat", "a+");
    system("CLS");
       // clrscr();
		printf("\t\t\t==== ADD RECORD  ====");
    printf("\n\n\nEnter today's date(mm/dd/yyyy):");
    scanf("%d/%d/%d",&NEW.deposit.month,&NEW.deposit.day,&NEW.deposit.year);

	printf("\nEnter the name:");
    scanf("%s",NEW.name);
	
    printf("\nEnter the date of birth(mm/dd/yyyy):");
    scanf("%d/%d/%d",&NEW.dob.month,&NEW.dob.day,&NEW.dob.year);

    printf("\nEnter the age:");
    scanf("%d",&NEW.age);

    printf("\nEnter the address:");
    scanf("%s",NEW.address);

    printf("\nEnter the citizenship number:");
    scanf("%s",NEW.citizenship);

    printf("\nEnter the phone number: ");
    scanf("%lf",&NEW.phone);

	printf("\nEnter the account number:");
	scanf("%d",&NEW.acc_no);

    // while (!==EOF)
    // {
    //     /* code */
    // }
    


	}

    void edit() {
        printf("You are in edit option");
    }

    void transact(){
        printf("You are in transat option");
    }

    void see(){
        printf("You are in view option");
    }

    void erase(){
        printf("You are in view option");
    }

    void view_list(){
        printf("You are in view option");
    }

    void atm(){
        printf("You are in atm option");
    }

    void closeAccount(){
        printf("You are in close option");
    }

    #endif 
