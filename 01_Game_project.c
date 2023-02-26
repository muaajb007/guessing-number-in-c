#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int number, geuss, ngeusses=1;
    srand(time(0));
    number =rand()%100 + 1; // genarets a random number between 1 to 100
    do
    {
        printf("Enter a number between 1 to 100\n");
        scanf("%d",&geuss);
        if(geuss>number){
            printf("Lower number please!\n");
        }
        else if(geuss<number){
            printf("higher number please!\n");
        }
        else{
            printf("Congrats you are geuss right number in %d attempts\n",ngeusses);
        }
        ngeusses++;
    } while (geuss!=number);
    
    return 0;
}