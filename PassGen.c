#include <time.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#define LENGTH  5
#define LENGTH1  10
#define LENGTH2 15
#define LENGTH3 20
#define LENGTH4 25
#define LENGTH5 30
char enter;

void random_string(char * string, size_t length)
{
    char lettres[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789abcdefghijklmnopqrstuvwxyz@!#$?&*(){[]}-+=/";
    size_t size = strlen(lettres);
    size_t index;
    size_t i;

    srand((unsigned)time(NULL));

    for(i = 0; i < length && size > 0; ++i)
    {
        index = rand() % size;       
        string[i] = lettres[index];       
        lettres[index] = lettres[--size]; 
    }

    string[i] = '\0';
}


int main(void)
{
    char lol[LENGTH + 1];  
      char lol1[LENGTH1 + 1];  
    char lol2[LENGTH2 + 1];    
    char lol3[LENGTH3 + 1];    
     char lol4[LENGTH4 + 1];   
      char lol5[LENGTH5 + 1];          
    random_string(lol, LENGTH);
     random_string(lol1, LENGTH1);
     random_string(lol2, LENGTH2);
      random_string(lol3, LENGTH3);
         random_string(lol4, LENGTH4);
            random_string(lol5, LENGTH5);
    FILE * fptr = fopen("Pass.txt", "w");
     fprintf(fptr, "5 Letters: %s\n", lol);
    fprintf(fptr, "10 Letters: %s\n", lol1);
    fprintf(fptr, "15 Letters: %s\n", lol2);
    fprintf(fptr, "20 Letters: %s\n", lol3);
        fprintf(fptr, "25 Letters: %s\n", lol4);
            fprintf(fptr, "30 Letters: %s\n", lol5);
    fclose(fptr);
    printf("Loading...\n");
    sleep(5);
printf("ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789abcdefghijklmnopqrstuvwxyz@!#$?&*(){[]}-+=/\n");
sleep(1);


    printf("Passwords succesfully created!\n");
    printf("Press Enter to leave\n");
    scanf("%c", &enter);
    return(0);
}