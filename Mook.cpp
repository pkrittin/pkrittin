#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
int num1;
char ans;
do {
printf("\n\t\t\t -----------------------------------------------------------\n ");
printf("\n\t\t\t Welcome to Program Introduce Character in KUROKO NO BASKET  \n");
printf("\n\t\t\t -----------------------------------------------------------\n ");
printf("\t\t\t\t\t\t\t ------- MENU ------- \n");
printf("\t\t\t\t\t\t 1.KUROKO \n");
printf("\t\t\t\t\t\t 2.TAIGA \n");
printf("\t\t\t\t\t\t 3.AKAKSHI \n");
printf("\t\t\t\t\t\t 4.SHITAROU \n");
printf("\t\t\t\t\t\t 5.RYOUTA \n");
printf("\t\t\t\t\t\t 0.Exit Program \n");
printf("\t\t\t\t\t\t Please Enter Your Number:");
scanf ("%d",&num1);

system ("cls");

if (num1==1) {
printf("\n\t\t\t ==== 1.KUROKO ==== \n");
printf("\t\t\t Position : Power Forward \n ");
printf("\t\t\t Birthday : 31 January \n");
printf("\t\t\t Tall : 168 cm \n");
printf("\t\t\t Weight : 57 kg \n");
printf("\t\t\t Blood type : A \n");
} 
else if (num1==2) {
printf("\t\t\t ==== 2.TAIGA ==== \n");
printf("\t\t\t Position : Power Forward \n ");
printf("\t\t\t Birthday : 2 August \n");
printf("\t\t\t Tall : 190 cm \n");
printf("\t\t\t Weight : 83 kg \n");
printf("\t\t\t Blood type : A \n");
}
else if (num1==3) {
printf("\t\t\t ==== 3.AKAKSHI ==== \n");
printf("\t\t\t Position : Point Guard \n ");
printf("\t\t\t Birthday : 20 December \n");
printf("\t\t\t Tall : 173 cm \n");
printf("\t\t\t Weight : 64 kg \n");
printf("\t\t\t Blood type : AB \n");
}
else if (num1==4) {
printf("\t\t\t ==== 4.SHITAROU ==== \n");
printf("\t\t\t Position : Shooting Guard \n ");
printf("\t\t\t Birthday : 7 July \n");
printf("\t\t\t Tall : 195 cm \n");
printf("\t\t\t Weight : 79 kg \n");
printf("\t\t\t Blood type : B \n");
}
else if (num1==5) {
printf("\t\t\t ==== 5.RYOUTA ==== \n");
printf("\t\t\t Position : Small Forward \n ");
printf("\t\t\t Birthday : 18 June \n");
printf("\t\t\t Tall : 189 cm \n");
printf("\t\t\t Weight : 77 kg \n");
printf("\t\t\t Blood type : A \n");
}
else if (num1==0) {
printf ("\n\n\n\t\t\t\t\ Thank you");
printf ("\n\t\t\t\t Good bye!!!!");
}
printf ("\n\n\t\t\t\t\ Do you want to continue (y/n) : ");
scanf (" %c",&ans);
system ("cls");
}while ((ans=='y')||(ans=='Y'));

getch();
}
