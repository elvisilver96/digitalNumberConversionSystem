#include <windows.h>
#include<stdio.h>
#include<conio.h>
#include <math.h>
#include <stdlib.h>
#include<time.h>

#define MAX 1000



void main_menu();
void binarymenu();
void BINARY_TO_DECIMAL_HEXADECIMAL();  
void DECIMAL_TO_BINARY_TO_HEXADECIMAL();
void HEXADECIMAL_TO_DECIMAL_TO_BINARY();
void gotoxy(int x,int y);
void welcome();
void exitsystem();


COORD coord={0,0};


void gotoxy(int x,int y)
{
 coord.X=x;
 coord.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 }

void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
 

void welcome(){

char text[100]={"DIGITAL              NUMBER              CONVERSION                 SYSTEM"};
int coun;
printf("\n");
gotoxy(2,6);printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
for(coun=0;coun<75;coun++)
{ gotoxy(coun+2,5);printf("%c",text[coun]);
  gotoxy(coun+2,6);printf("\xDB");
  gotoxy(75,7);printf("%d%%",coun+26);
  Sleep(50);
}

}



int main(){
welcome();
system("cls");	
main_menu();	
	
		
}



void main_menu()
{    
    int option;
	gotoxy(20,3);
	printf("\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2 MAIN MENU \xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba");
	gotoxy(20,5);
	printf("\xDB\xDB\xDB\xDB\xba 1.BINARY   ");
	gotoxy(20,7);
	printf("\xDB\xDB\xDB\xDB\xba 2.DECIMAL ");
	gotoxy(20,9);
	printf("\xDB\xDB\xDB\xDB\xba 3.HEXADECIMAL");
	gotoxy(20,11);
	printf("\xDB\xDB\xDB\xDB\xba 4.Exit");
	gotoxy(20,15);
	printf("\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba");
	gotoxy(20,20);
	gotoxy(20,2);
	gotoxy(20,23);printf("Enter your choice:");




	switch(getch())
	{ case '1':system("cls");
	           BINARY_TO_DECIMAL_HEXADECIMAL();

	         break;

	  case '2':system("cls");
	          DECIMAL_TO_BINARY_TO_HEXADECIMAL() ;
	          break;

      case '3':system("cls");
      	      HEXADECIMAL_TO_DECIMAL_TO_BINARY();
              break;

	  case '4':system("cls");
	  	      exitsystem();
	  	      break;

	
      default:
        { printf("\xDB invalid input \xDB Please re-enter \xDB");

           if(getch()){
            main_menu();

            }



        }

	}

}



void BINARY_TO_DECIMAL_HEXADECIMAL()
{
    long long n,m=0;
	int decimalNumber = 0, i = 0, remainder;
	long int binaryval, hexadecimalval = 0, j = 1, remainder2;
 	
 	
 	gotoxy(20,3);
	printf("\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba BINARY TO DECIMAL TO HEXADECIMAL\xba\xB2\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2");
	gotoxy(20,5);
	printf("\xDB\xDB\xDB\xDB\xba Enter a binary number:");
	scanf("%lld",&n);
       m=n;
       binaryval=m;
	 
	 	     //to convert binary to decimal
	 		 while (n!=0)
   	         {
                 remainder = n%10;
                  n /= 10;
                decimalNumber += remainder*pow(2,i);
                ++i;
   	          }
             //to convert binary to hexadecimal
            while (binaryval != 0)
            {
               remainder2 = binaryval % 10;
                hexadecimalval = hexadecimalval + remainder2 * j;
                j = j * 2;
                binaryval = binaryval / 10;
    }
        	
	gotoxy(20,7);printf("\xDB\xDB\xDB\xDB\xba  %lld in binary = %d in decimal = %lX in hexadecimal ", m, decimalNumber,hexadecimalval);
	gotoxy(20,9);printf("\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2");
	
    gotoxy(20,11);
	printf("\xba 1.Main Menu");
	gotoxy(20,12);
	printf("\xba 2.Another value");
	
        	switch(getch()){
        case'1':system("cls");
                main_menu();
                break;

        case'2':
                system("cls");
                 BINARY_TO_DECIMAL_HEXADECIMAL();
                 break;
        default:
            system("cls");
            gotoxy(24,10); printf("\xDB invalid input \xDB Please re-enter \xDB");


             if(getch()){
                system("cls");
                main_menu();

             }
	
	
}}


void DECIMAL_TO_BINARY_TO_HEXADECIMAL() 
{
    long decimal,binary = 0, k = 1, decimalNumber,quotient;
	int i=1,j,temp,remainder;;
	char hexadecimalNumber[100];
 	
 	
 	gotoxy(20,3);
	printf("\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba DECIMAL TO BINARY TO HEXADECIMAL\xba\xB2\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2");
	gotoxy(20,5);
	printf("\xDB\xDB\xDB\xDB\xba Enter a decimal number:");
	scanf("%ld", &decimal);
		
		    int n=decimal;
            //to convert decimal to binary
    		while(n != 0) {
        	remainder = n%2;
        	n = n/2;
        	binary= binary + (remainder*k);
        	k = k*10;
           }
      		
      		decimalNumber=decimal;
			quotient = decimalNumber;
			//to convert decimal to hexadecimal
			while(quotient!=0) {
			temp = quotient % 16;
		
			if( temp < 10)
		           temp =temp + 48; else
		          temp = temp + 55;
			      hexadecimalNumber[i++]= temp;
			      quotient = quotient / 16;
	}
        
        	
	gotoxy(20,7);printf("\xDB\xDB\xDB\xDB\xba %d in decimal = %ld in binary = ", decimal,binary );
		for (j = i -1 ;j> 0;j--)
	      	printf("%c",hexadecimalNumber[j]);  
	printf(" in hexadecimal" );
	gotoxy(20,9);printf("\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2");
	
    gotoxy(20,11);
	printf("\xba 1.Main Menu");
	gotoxy(20,12);
	printf("\xba 2.Another value");
	
        	switch(getch()){
        case'1':system("cls");
                main_menu();
                break;

        case'2':
                system("cls");
                DECIMAL_TO_BINARY_TO_HEXADECIMAL() ;
                 break;
        default:
            system("cls");
            gotoxy(24,10); printf("\xDB invalid input \xDB Please re-enter \xDB");


             if(getch()){
                system("cls");
                main_menu();

             }
	
	
}}


void HEXADECIMAL_TO_DECIMAL_TO_BINARY()
{
   long long decimalNumber=0;
    char hexDigits[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8',
      '9', 'A', 'B', 'C', 'D', 'E', 'F'}, hexadecimal[MAX],binarynum[MAX], hexa[MAX];
    int i, j,k, power=0, digit;  
    long l = 0;
 	
 	
 	gotoxy(20,3);
	printf("\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba HEXADECIMAL TO DECIMAL TO BINARY\xba\xB2\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2");
	gotoxy(20,5);
	printf("\xDB\xDB\xDB\xDB\xba Enter a hexadecimal number:");
	scanf("%s", hexadecimal);
	
	
		 for (k = 0; k < 30; k++) {
      			hexa[k] =  hexadecimal[k];
               }
    
     
    /* Converting hexadecimal number to decimal number */
    for(i=strlen(hexadecimal)-1; i >= 0; i--) {
        /*search currect character in hexDigits array */
        for(j=0; j<16; j++){
            if(hexadecimal[i] == hexDigits[j]){
                decimalNumber += j*pow(16, power);
            }
        }
        power++;
    } 
	gotoxy(20,7);printf("\xDB\xDB\xDB\xDB\xba  %ld in Decimal Number =", decimalNumber);	
   
     while (hexa[l])
    {
        switch (hexa[l])
        {
        case '0':
            printf("0000"); break;
        case '1':
            printf("0001"); break;
        case '2':
            printf("0010"); break;
        case '3':
            printf("0011"); break;
        case '4':
            printf("0100"); break;
        case '5':
            printf("0101"); break;
        case '6':
            printf("0110"); break;
        case '7':
            printf("0111"); break;
        case '8':
            printf("1000"); break;
        case '9':
            printf("1001"); break;
        case 'A':
            printf("1010"); break;
        case 'B':
            printf("1011"); break;
        case 'C':
            printf("1100"); break;
        case 'D':
            printf("1101"); break;
        case 'E':
            printf("1110"); break;
        case 'F':
            printf("1111"); break;
        case 'a':
            printf("1010"); break;
        case 'b':
            printf("1011"); break;
        case 'c':
            printf("1100"); break;
        case 'd':
            printf("1101"); break;
        case 'e':
            printf("1110"); break;
        case 'f':
            printf("1111"); break;
        default:
            printf("\n Invalid hexa digit %c ", hexa[l]);
          HEXADECIMAL_TO_DECIMAL_TO_BINARY();
        }
        l++;
    } 	    
	printf(" in binary value: ");		
			
						 
        	
	gotoxy(20,9);printf("\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2\xba\xB2");
	
    gotoxy(20,11);
	printf("\xba 1.Main Menu");
	gotoxy(20,12);
	printf("\xba 2.Another value");
	
        	switch(getch()){
        case'1':system("cls");
                main_menu();
                break;

        case'2':
                system("cls");
                HEXADECIMAL_TO_DECIMAL_TO_BINARY();
                 break;
        default:
            system("cls");
            gotoxy(24,10); printf("\xDB invalid input \xDB Please re-enter \xDB");


             if(getch()){
                system("cls");
                main_menu();

             }
	
	
}}


void exitsystem(){
system("cls");
		gotoxy(16,3);
		printf("Programmers....");
		gotoxy(16,4);
		printf("1. MOHAMAD ALI HANAFIAH BIN MOHD KHALID    54214116029");
		gotoxy(16,5);
	
		gotoxy(16,7);
		printf("2. MUHAMMAD SYAFIQ BIN NASSRI              54214116017");
		gotoxy(16,8);
	
		gotoxy(16,10);
		printf("3. MOHAMMAD IZWAN BIN ISHAK                54214116030");
		gotoxy(16,11);
	
		gotoxy(16,13);
		printf("Thanks To Madam Norzalina Binti Othman");
		gotoxy(10,17);
		printf("Exiting in 3 second...........>");
 
		delay(3000);
		system("cls");
		exit(0);
}
