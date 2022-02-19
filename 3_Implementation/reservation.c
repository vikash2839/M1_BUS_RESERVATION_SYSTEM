/**
 * @file reservation.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-02-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */




#include"reservation.h";



char ch[10][130]={"Pawapuri","Shiv Shakti","Natraj Travels","Jeevan Jyoti","Bol Bum","Rajnigandha"};
char name[32][100]={'\0'};
char number[32][2]={'\0'};
int num1[32]={0};
int txt;
void bus();//for list of bus
void name_number(int booking,char numstr[100]);
void booking();//for booking the tickets
int read_number(int txt);//for reading the number from the file
void read_name(int txt);//for reading the name from the file
void status();//for printing the status by user input
void status_1(int txt);//for printing the status while booking ticket
void cancel();
void helpline();





void bus()
{
    system("cls");
    printf("\n\n\n");
    printf("***************************************************************************************************************\n\n");
	printf("                                              BUS RESERVATION SYSTEM                                         \n\n\n");
    printf("\t\t\t\t\t[1]  =>  %s\n",ch[0]);
    printf("\n");
    printf("\t\t\t\t\t[2]  =>  %s\n",ch[1]);
    printf("\n"); 
	printf("\t\t\t\t\t[3]  =>  %s\n",ch[2]);
    printf("\n"); 
	printf("\t\t\t\t\t[4]  =>  %s\n",ch[3]);
    printf("\n"); 
	printf("\t\t\t\t\t[5]  =>  %s\n",ch[4]);
}

void booking()
{

    int i=0;
    char numstr[100];
system("cls");
printf("******************************************************************************************************************\n\n");
printf("                                                    BUS RESERVATION SYSTEM                                       \n\n\n");
bus();//for seeing bus list
printf("Enter the Bus number:--->");
scanf("%d",&txt);
system("cls");
printf("*******************************************************************************************************************\n\n");
printf("                                                    BUS RESERVATION SYSTEM                                        \n\n\n");
printf("Your Bus Number is %d ********** %s",txt,ch[txt-1]);
status_1(txt);
 FILE *f1, *fopen();//for reading the seats from the user.
 char str1[80]="32",str2[4],str3[4];
 int seat1,seat2,booking=0;
if(txt == 1)
{
 f1 = fopen("tr1.txt","r+");
 fgets(str1,80,f1);
 fclose(f1);
}else if(txt == 2)
{
 f1 = fopen("tr2.txt","r+");
 fgets(str1,80,f1);
 fclose(f1);
}else if(txt == 3)
{
 f1 = fopen("tr3.txt","r+");
 fgets(str1,80,f1);
 fclose(f1);
}
else if(txt == 4)
{
 f1 = fopen("tr4.txt","r+");
 fgets(str1,80,f1);
 fclose(f1);
}
else if(txt == 5)
{
 f1 = fopen("tr5.txt","r+");
 fgets(str1,80,f1);
 fclose(f1);
}
seat1=atoi(str1);//covert the string into number
if(seat1 <= 0)
{
 printf("There is no blank seat in this bus ");
}
else
{
printf("\n\n\n\t\t\t\tAvailable Seats:------>%d\n",seat1);
printf("\n\t\t\t\tNumber of Tickets:----->");
scanf("%d",&booking);
printf("\n");

seat1=seat1-booking;
itoa(txt,numstr,10);
name_number(booking,numstr);
printf("\n\t\t\t\tThe Total booking amount is %d",200*booking);
itoa(seat1, str1, 10);
//for reading the seats from the user.

if(txt == 1)
{
 f1 = fopen("tr1.txt","w");
 fputs(str1,f1);
 fclose(f1);
}
else if(txt == 2)
{
 f1 = fopen("tr2.txt","w");
 fputs(str1,f1);
  fclose(f1);
}
else if(txt == 3)
{
 f1 = fopen("tr3.txt","w");
 fputs(str1,f1);
  fclose(f1);
}
else if(txt == 4)
{
 f1 = fopen("tr4.txt","w");
 fputs(str1,f1);
  fclose(f1);
}
else if(txt == 5)
{
 f1 = fopen("tr5.txt","w");
 fputs(str1,f1);
 fclose(f1);
}
}
}



void name_number(int booking,char numstr[100])
{
char tempstr[100],tempstr1[12]="status",tempstr2[12]="number";
int number;
    FILE *a,*b;
    int i=0;
   strcat(numstr,".txt");
   strcat(tempstr1,numstr);
   strcat(tempstr2,numstr);
   a = fopen(tempstr1,"a");//for open the file to write the name in the file
   b = fopen(tempstr2,"a");
for(i=0; i<booking; i++)//for entering the person name and seat number in the file
{
    printf("*******************************************************************************************************************\n\n");
	printf("                                       Enter the details for ticket no %d                                  \n\n\n",i+1);
      printf("\t\t\t\tEnter the seat number:--->");
      scanf("%d",&number);
      printf("\t\t\t\tEnter the name of person:--->");
      scanf("%s",name[number-1]);
    printf("\n*******************************************************************************************************************\n\n");
    printf("\n");
      sprintf(number, tempstr, 10);
      fprintf(a,"%s ",name[number-1]);
      fprintf(b,"%s ",tempstr);

}
fclose(a);
fclose(b);
}



int read_number(int txt)//for putting the numeric value in the array
{
char tempstr[100],tempstr2[12]="number";
FILE *a,*b;
char numstr[100];
int m=0,n=0,k;
itoa(txt,numstr,10);
strcat(numstr,".txt");
strcat(tempstr2,numstr);
a = fopen(tempstr2,"a+");//for open the file to write the name in the file
   while(!feof(a))
   {
      number[m][n] = fgetc(a);

      if(number[m][n] == ' ')
      {
          n=0;
          m++;
      }
      else
      {
      n++;
      }
      
   }
   k=m;
   for(m=0; n<k; m++)
   {
       num1[m] = atoi(number[m]);
   }
   fclose(a);
   return k;
}


void read_name(int txt)//for open the file to write the name in the file
{
char tempstr1[12]="status";
FILE *b;
char numstr[100];
int i=0,j=0,k=0;
itoa(txt,numstr,10);
strcat(numstr,".txt");
strcat(tempstr1,numstr);
b = fopen(tempstr1,"a+");
   while(!feof(b))
   {
      name[i][j] = fgetc(b);

      if(name[i][j] == ' ')
      {
          j=0;
          i++;
      }
      else
      {
        j++;
      }

   }
   name[i][j]='\0';
   k=i;
   fclose(b);
}

void status()
{
system("cls");
printf("                                              BUS RESERVATION SYSTEM                                          \n\n\n");
    int i,txt,index=0,j;
    printf("Enter the number of bus:---->");
    scanf("%d",&txt);
    j=read_number(txt);
    read_name(txt);
    printf("____________________________________________________________________________________________________________________\n\n");
    printf("                                      Bus.no-->%d---->%s                                                            \n",txt,ch[txt-1]);
    printf("____________________________________________________________________________________________________________________\n");
    char tempname[33][10]={"Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty "};
    for(i=0; i<j; i++)
    {
        strcpy(tempname[num1[i]],name[i]);
    }
    for(i=0; i<8; i++)
    {
        printf("\t\t\t\t");
        for(j=0; j<4; j++)
            {
        printf("%d.%s\t",index+1,tempname[index+1]);
        index++;
            }
            printf("\n");
    }
}

void status_1(int txt)
{
    printf("Your Bus Number is %d ********** %s",txt,ch[txt-1]);
    system("cls");
    printf("*******************************************************************************************************************\n\n");
	printf("                                                   BUS RESERVATION SYSTEM                              \n\n\n");
    int i,index=0,j;
    j=read_number(txt);
    read_name(txt);
    char tempname[33][10]={"Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty "};
    for(i=0; i<j; i++)
    {
        strcpy(tempname[num1[i]],name[i]);
    }
    for(i=0; i<8; i++)
    {
        printf("\t\t\t\t");
        for(j=0; j<4; j++)
            {
        printf("%d.%s\t",index+1,tempname[index+1]);
        index++;
            }
            printf("\n");
}
}


void cancel()
{
 int seat_no,i,j;
 char numstr[100],tempstr2[15]="number",tempstr1[15]="status";
 printf("Enter the bus number:---->");
 scanf("%d",&txt);
 itoa(txt,numstr,10);
 strcat(numstr,".txt");
 strcat(tempstr1,numstr);
 strcat(tempstr2,numstr);
 read_number(txt);
 read_name(txt);
 status_1(txt);
 printf("Enter the seat number:--->");
 scanf("%d",&seat_no);
 FILE *a,*b;
 a = fopen(tempstr1,"w+");
 b = fopen(tempstr2,"w+");
 for(i=0; i<32; i++)
 {
     if(num1[i] == seat_no)
     {
         for(j=0; j<32; j++)
         {
             if(num1[j] != seat_no && num1[j] != 0)
             {
                 fprintf(b,"%d ",num1[j]);
                 fprintf(a,"%s",name[j]);
             }
             else if(num1[j] == seat_no && num1[j] != 0)
             {
                 strcpy(name[j],"Empty ");
             }
         }
     }
 }
fclose(a);
fclose(b);
printf("\n\n");
    printf("*******************************************************************************************************************\n\n");
    printf("\t\t\t\tYour 200 rupees has been Returned\t\t\t\n");
    printf("*******************************************************************************************************************\n\n");
}

void helpline()
{
	printf(" Helpline Number = 987654321 \n\n");
	printf("\n");
}
void login()
{
	int a=0,i=0;
    char uname[10],c=' '; 
    char pword[10],code[10];
    char user[10]="vikash";
    char pass[10]="kumar";
    do
{
	system("cls");
	printf("*******************************************************************************************************************\n\n");
    printf("\n                                   LOGIN FORM                              ");
    printf(" \n                       ENTER USERNAME:-");
	scanf("%c", &uname); 
	printf(" \n                       ENTER PASSWORD:-");
	
	
	while(i<10)
	{
	    pword[i]=getchar();
	    c=pword[i];
	    if(c==13) break;
	    else printf("*");
	    i++;
	}
	pword[i]='\0';
	
	i=0;
	 
		if(strcmp(uname,"vikash")==0 && strcmp(pword,"kumar")==0)
	{
	printf("  \n\n\n       WELCOME TO OUR SYSTEM !!!!       \n\n");
	printf("\n\n             LOGIN IS SUCCESSFUL !!!!       \n\n");
	printf("\n\n\n\t\t\t\t     Press any key to continue...");
	getchar();// it holds the screen
	break;
	printf("*******************************************************************************************************************\n\n");
	}
	else
	{
		printf("\n        SORRY !!!!  LOGIN IS UNSUCESSFUL");
		a++;
		
		getchar();//it holds the screen
		
	}
}
	while(a<=2);
	if (a>2)
	{
		printf("\nSorry you have entered the wrong username and password for four times!!!");
		
		getchar();
		
		}
		system("cls");	
}