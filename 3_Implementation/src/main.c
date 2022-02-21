#include"reservation.c";




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
        bus();//for list of bus
        break;
    case 2:
        booking();//for booking the tickets
        break;
    case 3:
        cancel();//for cancel the tickets
        break;
    case 4:
        status();//for status of the tickets
        break;
    case 5:
        helpline();//for helpline
        break;    
    }
getchar();

    }
    while(num != 6);
    system("CLS");
    printf("\t*****************************************************************************************************************\n\n\n");
    printf("\t\t\t\t\t                           Thank You For Using                   \t\t\t\t\t\t\n");
    printf("\t*****************************************************************************************************************\n\n\n");
    printf("\t\t\t                                 SEE YOU AGAIN                                  ");
    getchar();
    return 0;
}
