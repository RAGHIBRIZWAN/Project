/*
    Programmer: Raghib Rizwan Rabani, Hafsa Rashid, Arwa Feroze.
    Roll No: 23K-0012, 23K-0064, 23K-0022.
    Desc: Mathematics quiz project
*/

#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <string.h>
#include <time.h>
#include <windows.h>
#include<unistd.h>

// Function for difficulty level (easy)
void one(char ch[50], FILE *easy){

    FILE *hs;
    int sh[5];
    int highscore = 0;
    // hs = fopen("highscore.txt" , "r");
    
    // int a = fscanf(hs,"%d",highscore);
    // printf("Highscore is:  %c\n",a);

    // fclose(hs);
    int streak = 0;
    time_t starttime, endtime;
    int elapsedtime;
    char *arr[100];
    char answer;
    int ans1;
    int score = 0;
    char brr[20] = {'A','B','D','A','A','B','A','B','B','A','D','A','D','A','A','A','D','A'};

    if (easy == NULL)
    {
        printf("Unable to open the file");
    }
    else{
        for (int i = 0; i < 18; i++)
        {   
            arr[i] = fgets(ch,100,easy);
            printf(" %s\n",arr[i]);
            time(&starttime); // timer start
            printf("Enter the answer: ");
            scanf(" %c",&answer);
            getchar();
            time(&endtime); // timer stop
            elapsedtime = difftime(endtime,starttime); // time elapsed   
            
            printf("Time taken: %d seconds\n", elapsedtime);
            
            if(elapsedtime > 10){
                printf("Time's up.... 100 points deducted.\n");
                score = score - 100;
                streak = 0;
            }
            else if(answer == brr[i]){
                printf("Your answer is Correct!..... 100 points added.\n");
                score = score + 100;
                streak++;
            }
            else if(answer != brr[i]){
                printf("Your answer is Wrong\n");
                streak = 0;
            }
            
        } // End for
    }
    int a = score;
    printf("Score Is: %d\n",score);
    printf("Winning streak is: %d",streak);
    fclose(easy);// file close
    hs = fopen("highscore.txt" , "w"); // file open

    if(highscore < score){ 
        highscore = score;
        }
    fprintf(hs,"%d",highscore);
    
    fclose(hs); // file close
}// End function

// Function for difficulty level (moderate)
void two(char ch[50], FILE *moderate){

    FILE *hs;
    int sh[5];
    int highscore = 0;
    // hs = fopen("highscore.txt" , "r");
    
    // int a = fscanf(hs,"%d",highscore);
    // printf("Highscore is:  %c\n",a);

    // fclose(hs);
    int streak = 0;
    time_t starttime, endtime;
    int elapsedtime;
    char *arr[100];
    char answer;
    int ans1;
    int score = 0;
    char brr[35] = {'B','C','A','B','B','A','A','A','A','A','D','A','A','A','A','A','A','A','B','A','A','A','B','A','A','C','A','A','A','A','A','A'};

    if (moderate == NULL)
    {
        printf("Unable to open the file");
    }
    else{
        for (int i = 0; i < 18; i++)
        {   
            arr[i] = fgets(ch,100,moderate);
            printf(" %s\n",arr[i]);
            time(&starttime);//time start
            printf("Enter the answer: ");
            scanf(" %c",&answer);
            getchar();
            time(&endtime);//time stop
            elapsedtime = difftime(endtime,starttime); // elapsed time   
            
            printf("Time taken: %d seconds\n", elapsedtime);
            
            if(elapsedtime > 10){
                printf("Time's up.... 100 points deducted.\n");
                score = score - 100;
                streak = 0;
            }
            else if(answer == brr[i]){
                printf("Your answer is Correct!...... 100 points added.\n");
                score = score + 100;
                streak++;
            }
            else if(answer != brr[i]){
                printf("Your answer is Wrong\n");
                streak = 0;
            }
            
        }// End for
    }
    int a = score;
    printf("Score Is: %d\n",score);
    printf("Winning streak is: %d",streak);
    fclose(moderate); //file close
    hs = fopen("highscore.txt" , "w"); // file open

    if(highscore < score){ 
        highscore = score;
        }
    fprintf(hs,"%d",highscore);
    
    fclose(hs); // file close
}// End function

// Function for 
difficulty level (hard)
void three(char ch[50], FILE *hard){

    FILE *hs;
    int sh[5];
    int highscore = 0;
    // hs = fopen("highscore.txt" , "r");
    
    // int a = fscanf(hs,"%d",highscore);
    // printf("Highscore is:  %c\n",a);

    // fclose(hs);
    int streak = 0;
    time_t starttime, endtime;
    int elapsedtime;
    char *arr[100];
    char answer;
    int ans1;
    int score = 0;
    char brr[35] = {'A','B','D','A','A','B','A','B','B','A','D','A','D','A','A','A','D','A','A','A','A','B','A','A','C','A','A','A','A','A','A'};

    if (hard == NULL)
    {
        printf("Unable to open the file");
    }
    else{
        for (int i = 0; i < 18; i++)
        {   
            arr[i] = fgets(ch,100,hard);
            printf(" %s\n",arr[i]);
            time(&starttime); // Start time
            printf("Enter the answer: ");
            scanf(" %c",&answer);
            getchar();
            time(&endtime); // End time
            elapsedtime = difftime(endtime,starttime); // Time Elapsed   
            
            printf("Time taken: %d seconds\n", elapsedtime);
            
            if(elapsedtime > 10){
                printf("Time's up.... 100 points deducted.\n");
                score = score - 100;
                streak = 0;
            }
            else if(answer == brr[i]){
                printf("Your answer is Correct!........ 100 points added.\n");
                score = score + 100;
                streak++;
            }
            else if(answer != brr[i]){
                printf("Your answer is Wrong\n");
                streak = 0;
            }
            
        }// End for
    }
    int a = score;
    printf("Score Is: %d\n",score);
    printf("Winning streak is: %d",streak);
    fclose(hard);//file close
    hs = fopen("highscore.txt" , "w"); // file open 

    if(highscore < score){ 
        highscore = score;
        }
    fprintf(hs,"%d",highscore);
    
    fclose(hs); // file close
}//End function

int main(){
    char name[50];
    char ans;
    int diff;
    char answer;
    char ch[10];
    FILE *easy = fopen("simple.txt" , "r"); //file open
    FILE *moderate = fopen("moderate.txt", "r"); //file open
    FILE *hard = fopen("hard.txt", "r"); //file open

    printf("Enter yourn name:");
    gets(name);
    printf("\n");
    printf("%s WELCOME TO MATHAMANIA\n\n",name);

    // Asking user to play the game
    printf("Do You want to start game? 'y' for yes and 'n' for no: ");
    scanf("%c",&ans);
    switch (ans)
    {
    case 'y':
        system("cls");
        printf("Lets start the game!\n\n");
        break;

    case 'Y':
        system("cls");
        printf("Lets start the game!\n\n");
        break;

    case 'n':
        exit(1);
        break;
    
    case 'N':
        exit(1);
        break;

    default:
        exit(1);
        break;
    } // End Switch

// Difficulty levels:
    
    printf("Select Difficulty: \n");
    printf("1. Easy    2. Moderate    3. Hard:  ");
    scanf("%d",&diff);

    switch (diff)
    {
    case 1:

    one(ch,easy);
    break;

    case 2:

    two(ch,moderate);
    break;

    case 3:

    three(ch,hard);
    break;
    
    default:
        break;
    } // End Switch
} // End main
