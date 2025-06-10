#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void playquiz()
{
    FILE *f1;
    int answer, score = 0;
    char name[100];
    
        printf("\nEnter your Full name: ");
        scanf(" %s", name); 

        printf("\nYou have entered the \"Quiz game in C\"\n");
        printf("Welcome to the game \"%s\"\n\n", name);
        printf("The quiz game will be started now. Get ready to answer the questions!!\n ALL THE BEST !!\n");

        // Question 1
        printf("\nQuestion 1:\n");
        printf("who develop the c?\n");
        printf("1.Dennis Ritchie\n 2.Rasmus Lerdorf \n 3.Bjarne Stroustrup\n 4James Gosling\n");
        printf("Please enter your answer: ");
        scanf("%d", &answer);
        
        if (answer == 1) 
        {
            printf("Your answer is absolutely correct\nYou score 5 points!!\n");
            score += 5;
        } 
        else 
        {
            printf("Incorrect answer. No marks deducted.\n");
        }

        // Question 2
        printf("\nQuestion 2:\n");
        printf("which are the loop in c?\n");
        printf("1.For loop \n2.while loop \n3.do-while loop \n4. All of these\n");
        printf("Please enter your answer: ");
        scanf("%d", &answer);
        
        if (answer == 4) 
        {
            printf("Your answer is absolutely correct\nYou score 5 points!!\n");
            score += 5;
        } 
        else 
        {
            printf("Incorrect answer. No marks deducted.\n");
        }
        
        // Question 3
        printf("\nQuestion 3:\n");
        printf("In loop which loop is exit controll loop?\n");
        printf("1.For loop\n 2.while loop \n 3.do-while\n 4.non of these\n");
        printf("Please enter your answer: ");
        scanf("%d", &answer);
        
        if (answer == 3) 
        {
            printf("Your answer is absolutely correct\nYou score 5 points!!\n");
            score += 5;
        } 
        else 
        {
            printf("Incorrect answer. No marks deducted.\n");
        }
        
        // Question 4
        printf("\nQuestion 4:\n");
        printf("How many types of parameters in c?\n");
        printf("1.two type\n 2.one type \n 3.five type\n 4.three types\n");
        printf("Please enter your answer: ");
        scanf("%d", &answer);
        
        if (answer == 1) 
        {
            printf("Your answer is absolutely correct\nYou score 5 points!!\n");
            score += 5;
        } 
        else 
        {
            printf("Incorrect answer. No marks deducted.\n");
        }
        
        // Question 5
        printf("\nQuestion 5:\n");
        printf("what is array?\n");
        printf("1.connection of elements\n 2.collection of elements \n 3.group of elements\n 4.size of elements\n");
        printf("Please enter your answer: ");
        scanf("%d", &answer);
        
        if (answer == 2) 
        {
            printf("Your answer is absolutely correct\nYou score 5 points!!\n");
            score += 5;
        } 
        else 
        {
            printf("Incorrect answer. No marks deducted.\n");
            
        }
        
        //save to file
        f1 = fopen("Input.txt", "a");
        if (f1 == NULL) 
        {
            printf("Error opening file.\n");
            return 1;
        }
            fprintf(f1, "Name: %s, Score: %d\n", name, score);
            
        //fclose(f1);    
            
            printf("\nThanks for playing, %s! Your total score is: %d\n", name, score);
            
            fclose(f1);
            
            
        return;    
}

int main() 
{
    FILE *f1;
    int choice, answer, score = 0;
    char name[100],response;

    // Show menu only once
    printf("\n1. Please enter 1 to start the game\n");
    printf("2. Please enter 2 to view the high scores\n");
    printf("3. Please enter 3 to seek help\n");
    printf("4. Please enter 4 to exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 0) 
    {
        printf("Exiting... Thank you for playing!\n");
        return 0;
    }

    if (choice == 1) 
    {
        printf("\nEnter your Full name: ");
        scanf(" %s", name); 

        printf("\nYou have entered the \"Quiz game in C\"\n");
        printf("Welcome to the game \"%s\"\n\n", name);
        printf("The quiz game will be started now. Get ready to answer the questions!!\nALL THE BEST !!\n");

        // Question 1
        printf("\nQuestion 1:\n");
        printf("who develop the c?\n");
        printf("1.Dennis Ritchie\n 2.Rasmus Lerdorf \n 3.Bjarne Stroustrup\n 4James Gosling\n");
        printf("Please enter your answer: ");
        scanf("%d", &answer);
        
        if (answer == 1) 
        {
            printf("Your answer is absolutely correct\nYou score 5 points!!\n");
            score += 5;
        } 
        else 
        {
            printf("Incorrect answer. No marks deducted.\n");
        }

        // Question 2
        printf("\nQuestion 2:\n");
        printf("which are the loop in c?\n");
        printf("1.For loop \n2.while loop \n3.do-while loop \n4. All of these\n");
        printf("Please enter your answer: ");
        scanf("%d", &answer);
        
        if (answer == 4) 
        {
            printf("Your answer is absolutely correct\nYou score 5 points!!\n");
            score += 5;
        } 
        else 
        {
            printf("Incorrect answer. No marks deducted.\n");
        }
        // Question 3
        printf("\nQuestion 3:\n");
        printf("In loop which loop is exit controll loop?\n");
        printf("1.For loop\n 2.while loop \n 3.do-while\n 4.non of these\n");
        printf("Please enter your answer: ");
        scanf("%d", &answer);
        
        if (answer == 3) 
        {
            printf("Your answer is absolutely correct\nYou score 5 points!!\n");
            score += 5;
        } 
        else 
        {
            printf("Incorrect answer. No marks deducted.\n");
        }
        // Question 4
        printf("\nQuestion 4:\n");
        printf("How many types of parameters in c?\n");
        printf("1.two type\n 2.one type \n 3.five type\n 4.three types\n");
        printf("Please enter your answer: ");
        scanf("%d", &answer);
        
        if (answer == 1) 
        {
            printf("Your answer is absolutely correct\nYou score 5 points!!\n");
            score += 5;
        } 
        else 
        {
            printf("Incorrect answer. No marks deducted.\n");
        }
        // Question 5
        printf("\nQuestion 5:\n");
        printf("what is array?\n");
        printf("1.connection of elements\n 2.collection of elements \n 3.group of elements\n 4.size of elements\n");
        printf("Please enter your answer: ");
        scanf("%d", &answer);
        
        if (answer == 2) 
        {
            printf("Your answer is absolutely correct\nYou score 5 points!!\n");
            score += 5;
        } 
        else 
        {
            printf("Incorrect answer. No marks deducted.\n");
            
        }
        
        
        // Save result to file
        f1 = fopen("Input.txt", "a");
        if (f1 == NULL) 
        {
            printf("Error opening file.\n");
            return 1;
        }
            fprintf(f1, "Name: %s, Score: %d\n", name, score);
            
         printf("\nThanks for playing, %s! Your total score is: %d\n", name, score);
         
     
        printf("\nDo you want to play again? (y/n): ");
        scanf(" %c", &response);
        
        if (response == 'y' || response == 'Y') 
        {
             playquiz(name);
        
        }   
        else if (response == 'n' || response == 'N') 
        {
            printf("\nOkay, thank you for playing!\n");
        } 
        else 
        {
            printf("\nInvalid input.\n");
        }
    
    }

     if (choice == 2) 
    {
        printf("\nHigh Scores:\n");
        f1 = fopen("Input.txt", "r");
        if (f1 == NULL) 
        {
            printf("No scores recorded yet. you have to Play the game first.\n");
        }
        else 
        {
            char ch;
            while ((ch = fgetc(f1)) != EOF) 
            {
                putchar(ch);
            }
            fclose(f1);
        }
    }

     if (choice == 3) 
    {
        printf("\nHELP:\n");
        printf("Instructions that are supposed to be followed while playing this game:\n");
        printf("......................................................................\n");
        printf("You are supposed to answer 20 questions in this game!!\n");
        printf("There will be 4 options for each question (1 to 4).\n");
        printf("Each correct answer = 5 points\n");
        printf("No negative marking for wrong answers.\n");
        printf("You will move to the next question automatically.\n");
        printf("!! Wish you all the best !!\n");
        printf("\nDo you want to play again? (y/n): ");
        scanf(" %c", &response);
        
        if (response == 'y' || response == 'Y') 
        {
             playquiz(name);
        
        }   
        else if (response == 'n' || response == 'N') 
        {
            printf("\nOkay, thank you for playing!\n");
        } 
        else 
        {
            printf("\nInvalid input.\n");
        }
        fclose(f1);
    }
     if (choice == 4)
    {
        printf("\n Exiting the game...Thank you for playing");
        exit(0);
        
    }        
   

    return 0;
}