#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

  const int MIN = 1;
  const int MAX = 100;
  int guess;
  int guess_s = 0;
  int answer;


  srand(time(0));
    // generate a random number between min and max
    answer = (rand() % MAX) + MIN;

    do{
        printf("Enter a guess: ");
        scanf("%d",&guess);
        if(guess >  answer){
            printf("Too high\n");
        }
        else if(guess < answer){
            printf("To Low\n");
        }
        else{
            printf("Correct!!");
        }
            guess_s++;

    }while (guess != answer);

    printf("************************************\n");
    printf("Answer:%d\n", answer);
    printf("Guess's:%d", guess_s);




    return 0;
}