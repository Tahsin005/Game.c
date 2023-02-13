/*Write a program that generates a random number and asks
the player to guess it. If the player's guess is higher than the 
actual number , the program displays "lower number please". Similarly
if the user's guess is too low , the program prints"Higher number 
please".
When the player guesses the correct number, the program displays the 
number of guesses the player used to arrive at the number*/
//Use loop and use a random number generator
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number, guess, n_guesses=0;
    srand(time(0));
    number=rand()%100 +1; 

    printf("__________________________________Welcome to game__________________________________\n");
    printf("  ****In this game you will try to guess a number in fewer attempts as possible****\n");
    //Keep running the loop until the number is guessed
    do
    {
      printf("_________________________Guess the number between 1 to 100______________________\n");
      scanf("%d", &guess);
      if(guess>number){
        printf("lower number please!\n");
      }
      else if(guess<number){
        printf("Higher number please!\n");
      }
      else{
        printf("You guessed it in %d attempts\n", n_guesses);
      }
      n_guesses++;
    } while(guess!=number);
    
return 0;
}