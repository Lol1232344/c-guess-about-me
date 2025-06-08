#include <stdio.h>
#include <stdlib.h>
int main()
{
    char question[][100]={"A. what is my name ?",
                          "B. what is my age ?" ,
                          "C. do i have a girfriend ?"};
    char options[][100]={"1. AYUSH","2. DHRUV","3. KRISHNA","4. KARTIK",
                         "1. 19","2. 18","3. 20","4.tell yours",
                         "1. Hell no","2. NO","3.Why asked(idk why too)","4.nope"};

    int answers[]={1,4,2};
    int size =  sizeof(question)/sizeof(question[0]) ;
    int correctans = 0;
    int wrongans = 0;  
    int guess;
    int totalques=3;
    printf("************************\n");
    printf("START\n");
    printf("************************\n");
    for ( int i = 0 ; i < size; i++)
    {
     printf("%s\n\n",question[i]);
        for(int j = (i*4) ; j < (i+1)*4 ; j++)
        {
            printf("%s\n",options[j]);
        }
    printf("tell your guess : ");
    scanf("%d",&guess);
            if (guess==answers[i])
            {
                printf("************************\n");
                printf("CORRECT\n");
                printf("************************\n");
                correctans++;
            }
            else
            {
                printf("************************\n");
                printf("WRONG\n");
                printf("************************\n");
                wrongans++;
            }
    }
    printf("************************\n");
    printf("Score is :  %d/%d\n",correctans,totalques);
    printf("************************\n");
    printf("THE END");
    
}