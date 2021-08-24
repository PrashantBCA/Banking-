#ifndef global

#define global

int choice;
char USERNAME[20];
char PASSWORD[20];
int main_exit;

typedef struct {
    int month,day,year;

    }date;

typedef struct {

    char name[60];
    int acc_no,age;
    char address[60];
    char citizenship[15];
    double phone;
    char acc_type[10];
    float amt;
     date dob;
     date deposit;
     date withdraw;

    } customer;

	customer NEW;


    void fordelay(int j){  
         int i,k;
    for(i=0;i<j;i++)
         k=i;
}

void menuExit() {
    printf("--------------Take your receipt!!!------------------\n");
    printf("-----Thank you for using ATM Banking Machine!!!-----\n");
    printf("-----      Brought To by code-projects.org      -----\n");
    
    
}

	

	






#endif 