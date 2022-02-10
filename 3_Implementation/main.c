


















int main()
{
	login();
    int num,i;
    do{
    system("cls");
    printf("\n\n\n");
    printf("*******************************************************************************************************************\n\n");
    printf("                                    WELCOME TO BUS RESERVATION SYSTEM                                  \n\n\n");
    printf("\t\t\t\t\t[1]=> View Bus List\n");
    printf("\n");
    printf("\t\t\t\t\t[2]=> Book Tickets\n");
    printf("\n");
    printf("\t\t\t\t\t[3]=> cancel Booking\n");
    printf("\n");
    printf("\t\t\t\t\t[4]=> Bus Status Board\n");
    printf("\n");
    printf("\t\t\t\t\t[5]=> Helpline number\n");
    printf("\n");
    printf("\t\t\t\t\t[6]=> Exit\n\n");
    printf("*******************************************************************************************************************\n\n");
    printf("\t\t\tEnter Your Choice:: ");
    scanf("%d",&num);
    switch(num)
    {
    case 1:
        bus();
        break;
    case 2:
        booking();
        break;
    case 3:
        cancel();
        break;
    case 4:
        status();
        break;
    case 5:
        helpline();
        break;    
    }
getch();
    }while(num != 6);
    system("CLS");
    printf("\t*****************************************************************************************************************\n\n\n");
    printf("\t\t\t\t\t                           Thank You For Using                   \t\t\t\t\t\t\n");
    printf("\t*****************************************************************************************************************\n\n\n");
    printf("\t\t\t                                 SEE YOU AGAIN                                  ");
    getch();
    return 0;
}
