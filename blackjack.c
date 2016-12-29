#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include <time.h>


int cardValue()
{ 
	int i;
	
 	
	i = (rand() % 11)+1 ;
	return i;
}


int main()
{
char newgame='y';
int bets=0;
while(newgame=='y')
{	
	int win=0;
	int i=0;
	int dealer=0;
	int player=0;
	int playerbust=0;
	int dealerbust=0;
	char hit='n';
	

	srand(time(NULL));
	if(bets==0)
	{
		printf("Place your bets please,minimum bet 25$ \n");
		do
		{
		scanf(" %d",&bets);
		}while (bets<25);
	}
	dealer= cardValue();
	printf("dealer's first card is %d\n", dealer);
	dealer+= cardValue();
	if(dealer==22)
	{
		dealer=12;
	}
	player= cardValue();
	player+= cardValue();
	if(player==22)
		{
			player=12;
		}
	printf("your cards are worth %d\n", player);
	if(player==21)
	{
		playerbust=1;	
		printf("BLACKJACK \n Congrats, YOU WIN !!!\n ");	
     printf("#     # ####### #     # \n"    
            " #   #  #     # #     # \n"
 			"  # #   #     # #     # \n"
			"   #    #     # #     # \n"
   			"   #    #     # #     # \n"
 			"   #    #     # #     # \n"
  			"   #    #######  #####  \n");
  			
				
			printf(" #     # ### #     # \n"
                   " #  #  #  #  ##    # \n"
                   " #  #  #  #  # #   # \n"
                   " #  #  #  #  #  #  # \n"
                   " #  #  #  #  #   # # \n"
                   " #  #  #  #  #    ## \n"
                   "  ## ##  ### #     # \n");
		  			
		win=1;
	}
		else
	 {
		printf("do you want to hit more ? (y/n)\n");
		scanf(" %c",&hit);
		
		while(hit=='y')
		{
			player += cardValue();
			printf("your cards are now worth %d\n", player);
				if(player>21)
				{
					playerbust=1;
					printf("you have %d : BUSTED\n", player);
			    printf("#       #######  #####  ####### ######\n"
					   "#       #     # #     # #       #     # \n"
					   "#       #     # #       #       #     # \n"
					   "#       #     #  #####  #####   ######  \n"
					   "#       #     #       # #       #   #   \n"
					   "#       #     # #     # #       #    #  \n"
					   "####### #######  #####  ####### #     # \n");
					

				
					break;
				}
				else if(player==21)
				{
					printf("Congrats, YOU WIN !!!\n");	
	 printf("#     # ####### #     # \n"    
            " #   #  #     # #     # \n"
 			"  # #   #     # #     # \n"
			"   #    #     # #     # \n"
   			"   #    #     # #     # \n"
 			"   #    #     # #     # \n"
  			"   #    #######  #####  \n");
  			
				
			printf(" #     # ### #     # \n"
                   " #  #  #  #  ##    # \n"
                   " #  #  #  #  # #   # \n"
                   " #  #  #  #  #  #  # \n"
                   " #  #  #  #  #   # # \n"
                   " #  #  #  #  #    ## \n"
                   "  ## ##  ### #     # \n");
		  			
					win=1;			
					playerbust=1;
					break;
				} else
				{
					printf("do you want to hit more ? (y/n)\n");
					scanf(" %c",&hit);
					getchar();			
	 			}
		}
	
	
	
	}
		while((dealer<=player)&&(dealer<22)&&(playerbust==0))
		{
		
			dealer += cardValue();
			printf("dealer now has %d\n", dealer);
			if(dealer>21)
			{
				dealerbust=1;
				printf("dealer has %d : DEALER BUSTED\n YOU WIN !!!\n", dealer);
	 printf("#     # ####### #     # \n"    
            " #   #  #     # #     # \n"
 			"  # #   #     # #     # \n"
			"   #    #     # #     # \n"
   			"   #    #     # #     # \n"
 			"   #    #     # #     # \n"
  			"   #    #######  #####  \n");
  			
				
			printf(" #     # ### #     # \n"
                   " #  #  #  #  ##    # \n"
                   " #  #  #  #  # #   # \n"
                   " #  #  #  #  #  #  # \n"
                   " #  #  #  #  #   # # \n"
                   " #  #  #  #  #    ## \n"
                   "  ## ##  ### #     # \n");
		  			
				win=1;
			}
		}
	
	if((dealerbust==0)&&(playerbust==0))
	{
		if(dealer<player)
		{
			printf("YOU WIN !!!\n");
	 printf("#     # ####### #     # \n"    
            " #   #  #     # #     # \n"
 			"  # #   #     # #     # \n"
			"   #    #     # #     # \n"
   			"   #    #     # #     # \n"
 			"   #    #     # #     # \n"
  			"   #    #######  #####  \n");
  			
				
			printf(" #     # ### #     # \n"
                   " #  #  #  #  ##    # \n"
                   " #  #  #  #  # #   # \n"
                   " #  #  #  #  #  #  # \n"
                   " #  #  #  #  #   # # \n"
                   " #  #  #  #  #    ## \n"
                   "  ## ##  ### #     # \n");
		  			
			win=1;
		} else
			{
				printf("dealer has %d \n",dealer);
				printf("YOU LOSE...\n");
				printf("#       #######  #####  ####### ######\n"
					   "#       #     # #     # #       #     # \n"
					   "#       #     # #       #       #     # \n"
					   "#       #     #  #####  #####   ######  \n"
					   "#       #     #       # #       #   #   \n"
					   "#       #     # #     # #       #    #  \n"
					   "####### #######  #####  ####### #     # \n");
					
	 		}
	}			
	
	if(win==1)
	{
		bets+=5;


	} else
	{
		bets-=5;
		
	}
	if(bets>0)
	{
	
	printf("you now have %d$ \n do you want to play again?(y/n)\n",bets);
	scanf(" %c",&newgame);
	}
	else{
	printf("Go home you're broke!\n");
	newgame='n';
	}
	printf("--------------------------------\n");
}
}		
		
	
	
