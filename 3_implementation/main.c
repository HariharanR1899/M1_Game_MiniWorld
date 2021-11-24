#include <ctype.h>
#include <conio.h>
#include "functions.h"
int main(){
	int ch;
while(1){
	system("COLOR 5E");
printf("\n\n\t\t\t*******Welcome to Gaming world*******\n");
printf("\t\t\t1.ROCK PAPER SCISSORS\n");
printf("\t\t\t2.GUESS THE NUMBER\n");
printf("\t\t\t3.EXIT\n");
printf("\tEnter your choice:");
scanf("%d",&ch);
switch(ch){
	case 1:
		rps();
		break;
	case 2:
			guessthenumber();
			break;
		case 3:
				exit(0);
				break;
		default:
					printf("Enter a valid choice:");
				}
}
