#include<stdio.h>
#include<stdlib.h>
#include<time.h>
    int main()
    {
        printf("------------Number Guessing Game--------------\n");
        int number,guess,nguesses=1;
        srand(time(0));
        number = rand()%100 +1; //generates a random no. b/w 1 and 100
        //keep running the loop until the no. is guessed
        do
        {
            printf("Guess the no. between 1 and 100\n");
            scanf("%d", &guess);
            if (guess>number)
            {
                printf("Lower no. please\n");
            } 
            else if (guess<number)
            {
                    printf("Higher no. please\n");
                
            }else
            {
                printf("You guess it in %d attempts\n", nguesses);
            }nguesses++;
        } while (guess!=number);
        return 0;
    }    