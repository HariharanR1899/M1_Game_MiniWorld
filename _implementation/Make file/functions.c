void guess()
  {

 int num1,count=0,num;
    num1 = rand() % 50 + 1;
//run infinite loop
    while(1)
    {
        //increase counter
        count+=1;
 //read number from user
        system("COLOR 30");
        printf("\n\nGuess a number from (0 to 50) within 5 trials: ");
        scanf("%d",&num);
 //compare entered number with generated number
 if(num1==num){
            printf("Congratulations, you have guessed a correct number.");
            system("COLOR 32");
            break;
        }
        else if(num1<num){
            printf("Generated number is less than entered number, try your luck again...");
        }
        else if(num1>num){
            printf("Generated number is greater than entered number, try your luck again...");
        }
 
        if(count==5){
           printf("\n\n Maximum limit of atttempt finished, BAD LUCK !!!.The number was: %d \t",num1);
           system("COLOR 34");
           
            break;
        }
    }
}    
void guessthenumber(){
 	char play;
    
    system("COLOR 30");
    printf("\t\t\tWELCOME TO THE GAME\n");
    printf("\n\tPress  'y' to play, 'n' to exit:\n");
    while(play!='n')
    {
       
        scanf("%c",&play);
        if(play=='y')
        {
            
            guess();
            printf("\nEnter y to play , n to exit\n");
        }
    }
    system("cls");
    return 0;
 }    
 void rps(){
 	char play;
    char choose;
    system("COLOR E0");
    printf("\t\t\tWELCOME TO THE GAME\n");
    printf("\tIf the match is tie it will turn blue.\n\tIf you win the game it will be green color.\n\tIf you lost the game, it will be red.\n");
    printf("\n\tPress  'Y' to play, 'N' to exit:\n");
    while(play!='n')
    {
       
        scanf("%c",&play);
        if(play=='y')
        {
            printf("\tRock='r'\n\tPaper:'p'\n\tScissors:'s'\n");
            scanf("%s",&choose);
            oyun(choose);
            printf("\nEnter y to play , n to exit\n");
        }
    }
    system("cls");
    return 0;
 }    
 void oyun(char choose)
{
    int random;
    int score=0,tot=0;
   
    random=rand()%3;
    if(random==0 && choose=='r')
    {
        printf("Computer= Rock\n");
        printf("TIE!\n");
        system("COLOR E3");
        tot=score;
         printf("score:%d",tot);
         
    }
    if(random==1 && choose=='r')
    {
        printf("Computer= Paper\n");
        printf("GAME OVER!\n");
        system("COLOR E4");
        score--;
        tot=tot+score;
         printf("score:%d",tot);
    }
    if(random==2 && choose=='r')
    {
        printf("Computer= Scissors\n");
        printf("WIN!\n");
        system("COLOR E2");
        score++;
        tot=tot+score;
         printf("score:%d",tot);
    }
    if(random==0 && choose=='p')
    {
        printf("Computer= Rock\n");
        printf("WIN!\n");
        system("COLOR E2");
        score++;
        tot=tot+score;
         printf("score:%d",tot);
    }
    if(random==1 && choose=='p')
    {
        printf("Computer= Paper\n");
        printf("TIE!\n");
        system("COLOR E3");
        tot=score;
         printf("score:%d",tot);
    }
    if(random==2 && choose=='p')
    {
        printf("Computer= Scissors\n");
        printf("GAME OVER!\n");
        system("COLOR E4");
        score--;
        tot=tot+score;
         printf("score:%d",tot);
    }
    if(random==0 && choose=='s')
    {
        printf("Computer= Rock\n");
        printf("GAME OVER!\n");
        system("COLOR E4");
        score--;
        tot=tot+score;
         printf("score:%d",tot);
    }
    if(random==1 && choose=='s')
    {
        printf("Computer= Paper\n");
        printf("WIN!\n");
        system("COLOR E2");
        score++;
        tot=tot+score;
         printf("score:%d",tot);
    }
    if(random==2 && choose=='s')
    {
        printf("Computer= Scissors\n");
        printf("TIE!\n");
        system("COLOR E3");
        tot=score;
        printf("score:%d",tot);
    }
}
