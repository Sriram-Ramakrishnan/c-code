#include <stdio.h>

struct bank {
    int accNo;
    char name[100];
    int balance;
}customers[200];


int search_record(int n){
    int i,a;
    printf("Enter account number to search: ");
    scanf("%d",&a);
        for(i=0;i<n;i++)
        {
        if(customers[i].accNo==a)
            {
        printf("A/c Number: %d\n",customers[i].accNo);
        printf("Name: %s\n",customers[i].name);
		printf("Balance: %d\n",customers[i].balance);
            }
        }
    return 0;
}

void print_details(int n){
    printf("A/c No	Name  Balance\n");
    for(int i=0;i<n;i++)
    {
    printf("%d	 %s	 %d\n",customers[i].accNo,customers[i].name,customers[i].balance);
	}
}

void withdraw(int n){
    int i,a; int sub;
    printf("Enter account number : ");
	scanf("%d",&a);
	printf("Enter amount to withdraw : ");
	scanf("%d",&sub);
	for(i=0;i<n;i++)
		{
		if(customers[i].accNo==a)
			{
			if(customers[i].balance-sub>500)
				{
				customers[i].balance=customers[i].balance-sub;
				}
			else
				{
				printf("Insufficient balance\n");
				}
            }
        }
}

void deposit(int n){
    int a,i; int add;
    printf("Enter account number : ");
	scanf("%d",&a);
	printf("Enter amount to deposit : ");
	scanf("%d",&add);
	for(i=0;i<n;i++)
	{
        if(customers[i].accNo==a)
		{
		customers[i].balance=add+customers[i].balance;
		}
	}
}

void menu_fn(int menu, int n){
    	printf("\nBanking System Menu: \n");
    	printf("Press 1 to display all records.\n");
    	printf("Press 2 to search a record.\n");
    	printf("Press 3 to deposit amount.\n");
    	printf("Press 4 to withdraw amount.\n");
    	printf("Press 0 to exit.\n");
    	printf("Enter choice(0-4): ");
    	scanf("%d",&menu);
    	if(menu==1)
    	{
    	    print_details(n);
    	    menu_fn(menu,n);
		}
		else if(menu==2)
		{
			search_record(n);
			menu_fn(menu,n);
		}
		else if(menu==3)
		{
		    deposit(n);
            menu_fn(menu,n);
		}
		else if(menu==4)
		{
            withdraw(n);
            menu_fn(menu,n);
		}
		else if (menu == 0){
            printf("Exited the program.");
		}
	}

int main(){
    int n,i,menu;
    printf("Number of customer records you want to enter? ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter data for record # %d\n",i+1);
        printf("Enter account no : ");
        scanf("%d",&customers[i].accNo);
        fflush(stdin);
        printf("Enter name : ");
        scanf("%s",customers[i].name);
        fflush(stdin);
        printf("Enter the balance: ");
        scanf("%d",&customers[i].balance);
        fflush(stdin);
    }
    menu_fn(1,n);
    return 0;
}
