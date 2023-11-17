

        // Ece AYFER
        // Date: 27.03.2023

        // This program allows the user to find a random number in a certain range that the computer keeps in its memory.
        // It is kind of a game between the user and the computer.

        #include <stdio.h>                                                                                                 // Adding required library
        #include <stdlib.h>                                                                                                // Adding required library
        #include <time.h>                                                                                                  // Adding required library

        int main ()

        {
        printf ("   \n************Guess The Number Game!************************************\n\n");                        // Writing the name of the game with the embellishment
        printf ("   Welcome to the Guess the Number Game!\n");                                                             // Welcoming the user
        printf ("   Please choose an option:\n");                                                                          // Asking the user to choose an option
        main1  ();
        }

        int main1 ()                                                                                                       // Compiler provides zero return value

        {                                                                                                                  // Opening curly braces in "int main ()"

                while (1)                                                                                                  // Giving the user more options by adding it to the loop

                {                                                                                                          // Opening curly braces in "while"
                    char    choice3;                                                                                       // Where choices are given in the coding, "choice3" is used
                    printf ("  1. I think a number and you guess\n");                                                      // Printing the  choices and their properties
                    printf ("  2. You think a number and I guess\n");                                                      // Printing the  choices and their properties
                    printf ("  3. Exit the game\n");                                                                       // Printing the  choices and their properties
                    scanf  ("  %c", &choice3);                                                                             // Interpreting the entered character

                    if (choice3 =='1')                                                                                     // Adding it to the "if" state to perform certain behaviors in certain situations

                    {                                                                                                      // Opening curly braces in "if"
                        game_1 ();                                                                                         // Adding the function
                    }                                                                                                      // Closing curly braces in "if"

                    else if (choice3 =='2')                                                                                // Adding it to the "if" state to perform certain behaviors in certain situations


                    {                                                                                                      // Opening curly braces in "else if"

                        game_2 ();                                                                                         // Adding the function

                    }                                                                                                      // Closing curly braces in "else if"

                    else if (choice3 == '3')                                                                               // Adding it to the "else if" state to perform certain behaviors in certain situations

                    {                                                                                                      // Opening curly braces in "else if"
                        printf ("  Have a good day!");                                                                     // Printing the goodbye message
                        return 0;                                                                                          // Terminating the execution of the function
                    }                                                                                                      // Closing curly braces in "else if"

                    else                                                                                                   // Adding it to the "else" state to perform certain behaviors in certain situations

                    {                                                                                                      // Opening curly braces in "else"
                        printf ("   Isn't it clear? PLEASE choose an option!\n");                                          // Printing the text
                        continue;                                                                                          // Continuing the execution of the code
                    }                                                                                                      // Closing curly braces in "else"
                }                                                                                                          // Closing curly braces in "while"
        }                                                                                                                  // Closing curly braces in "int main ()"

        void game_1 ()                                                                                                     // Compiler provides zero return value

        {                                                                                                                  // Opening curly brace in "void game_1 ()"
            int     guess;                                                                                                 // The number entered by the user is assigned to the "guess" variable.
            int     number;                                                                                                // The variable "number" holds the number randomly assigned by the computer.
            int     maxTries;                                                                                              // "maxTries" holds how many tries are given at the beginning.
            int     tries = 0;                                                                                             // The tried attempt, that is, "tries", is given by resetting it.
            char    choice1, choice2;                                                                                      // Where choices are given in the coding, each is used

            printf ("   In this game I will keep a number in my mind and you will try to find it!\n");                     // Printing the description of the game to the user
            printf ("   You can choose the level you want!\n");                                                            // Giving the user multiple options
            printf ("   Key in the number written in front of the level that you want!\n\n");                              // Telling the user how to choose one of the options

            while (1)                                                                                                      // Giving the user more options by adding it to the loop
            {                                                                                                              // Opening curly braces in "while"
                printf ("   1.      Easy level: 1 - 10   numbers and 6 attempts\n");                                       // Printing the  levels and their properties
                printf ("   2.    Normal level: 1 - 100  numbers and 6 attempts\n");                                       // Printing the  levels and their properties
                printf ("   3. Difficult level: 1 - 200  numbers and 5 attempts\n");                                       // Printing the  levels and their properties
                printf ("   4.  Very Difficult: 1 - 1000 numbers and 3 attempts\n\n");                                     // Printing the  levels and their properties

                printf ("   Now that you see your options, you can make your choice: ");                                   // Saying that from this moment the user will choose a level
                scanf  ("   %c", &choice1);                                                                                // Interpreting the entered character

                switch (choice1)                                                                                           // Adding it to the "switch" state to perform certain behaviors in certain situations
                {                                                                                                          // Opening curly braces in "switch"

                case '1':                                                                                                  // Evaluating the status when "1" is entered
                        maxTries = 6;                                                                                      // Assigning the number of attempts
                        number   = rand () % 10 + 1;                                                                       // The rand () function assigns a random number and returns the remainder of its division by 10. As a result, it generates a number from 0 to 9. The reason for adding 1 is to be able to make 1 to 10.
                break;                                                                                                     // Exiting the "case" situation

                case '2':                                                                                                  // Evaluating the status when "2" is entered
                        maxTries = 6;                                                                                      // Assigning the number of attempts
                        number   = rand () % 100 + 1;                                                                      // The rand () function assigns a random number and returns the remainder of its division by 100. As a result, it generates a number from 0 to 99. The reason for adding 1 is to be able to make 1 to 100.
                break;                                                                                                     // Exiting the "case" situation

                case '3':                                                                                                  // Evaluating the status when "3" is entered
                        maxTries = 5;                                                                                      // Assigning the number of attempts
                        number   = rand () % 200 + 1;                                                                      // The rand () function assigns a random number and returns the remainder of its division by 200. As a result, it generates a number from 0 to 199. The reason for adding 1 is to be able to make 1 to 200.
                break;                                                                                                     // Exiting the "case" situation

                case '4':                                                                                                  // Evaluating the status when "4" is entered
                        maxTries = 3;                                                                                      // Assigning the number of attempts
                        number   = rand () % 1000 + 1;                                                                     // The rand () function assigns a random number and returns the remainder of its division by 1000. As a result, it generates a number from 0 to 999. The reason for adding 1 is to be able to make 1 to 1000.
                break;                                                                                                     // Exiting the "case" situation

                default:                                                                                                   // Redirecting here if input anything except "case" cases
                        printf ("   Why would you choose something other than the given options? Try again!\n\n");         // Giving the error message
                        tries--;                                                                                           // Decrementing the value of the variable by one
                        continue;                                                                                          // Continuing the execution of the code
                }                                                                                                          // Closing curly braces in "switch"

                printf ("   You have %d guesses. Use it well.\n", maxTries);                                               // Reminding the user how many values are left

                while (tries < maxTries)                                                                                   // Looping for a specific state
                {                                                                                                          // Opening curly braces in "while"
                    printf ("   Enter your guess: ");                                                                      // Printing what to do to the user

                    if (scanf ("%d", &guess) != 1)                                                                         // For the case of entering a character other than a number
                    {                                                                                                      // Opening curly braces in "if"
                    printf("   Are you kidding me? This is a 'Guess the Number' game...\n");                               // Giving the error message
                    scanf ("   %*s", guess);                                                                               // Detecting the character
                    continue;                                                                                              // Continuing the execution of the code
                    }                                                                                                      // Closing curly braces in "if"

                    tries ++;                                                                                              // Increasing the number of attempts zero to one

                    if (guess == number)                                                                                   // For the case where the estimated number and the actual number are the same

                    {                                                                                                      // Opening curly braces in "if"
                    printf ("   Congratulations! You found the correct number on your %d. guess!\n", tries);               // "Winning the game" message
                    break;                                                                                                 // Exiting the "if" situation
                    }                                                                                                      // Closing curly braces in "if"

                    else if (guess > number)                                                                               // Using for certain situations

                    {                                                                                                      // Opening curly braces in "else if"
                        printf ("   You went up to the mountains, soon you are in the sky. Get down below.\n");            // Using for certain situations
                    }                                                                                                      // Closing curly braces in "else"

                    else                                                                                                   // Containing the other situation

                    {                                                                                                      // Opening curly braces in "else"
                        printf ("   You went underground. Go up.\n");                                                      // Using for certain situations
                    }                                                                                                      // Closing curly braces in "else"

                    printf("   Your remaining guesses: %d\n", maxTries - tries);                                           // Reminding the user of their remaining guesses
                }                                                                                                          // Closing curly braces in "while"

                if (tries == maxTries && number != guess)                                                                  // The case of running out of remaining guesses  and not finding the right number

                {                                                                                                          // Opening curly braces in "if"
                    printf ("   You've lost a simple guessing game. The number was %d. Your reward: nothing.\n", number);  // Printing in case of losing the game
                }                                                                                                          // Closing curly braces in "if"

                printf ("   Do you want to continue? (y = yes)\n");                                                        // Asking the user whether to continue the program
                scanf  ("   %c", &choice2);                                                                                // Detecting the character

                if (choice2 == 'y' || choice2 == 'Y')                                                                      // Willing to continue

                {                                                                                                          // Opening curly braces in "if"
                tries = 0;                                                                                                 // Assigning zero to the attempts
                printf ("Let's continue then...\n\n");                                                                     // Printing the continue message
                main1 ();                                                                                                  // Continuing the execution of the code
                }                                                                                                          // Closing curly braces in "if"

                else                                                                                                       // Containing the other situation

                {                                                                                                          // Opening curly braces in "else"
                    printf ("   You have chosen to end the game. Fine...\n");                                              // Printing the ending message
                    printf ("   Have a nice day. We hope that we can see you here again.\n\n");                            // Printing the ending message
                    printf ("   **************************************************************************");              // Adding embellishment
                    exit   (0);                                                                                            // Exiting the programme
                }                                                                                                          // Closing curly braces in "else"

            }                                                                                                              // Closing curly braces in "while"

            return 0;                                                                                                      // Terminating the execution of the function

        }                                                                                                                  // Closing curly brace in "void game_1 ()"

        void game_2 ()                                                                                                     // Compiler provides zero return value

        {                                                                                                                  // Opening curly braces in "void game_2 ()"
            int     guess;                                                                                                 // The number entered by the user is assigned to the "guess" variable.
            int     number;                                                                                                // The variable "number" holds the number randomly assigned by the computer.
            int     num_guesses = 0, min = 1, pre_num_guesses=0, max;                                                      // Setting the initial states
            char    choice, level;                                                                                         // Where choice and level are given in the coding, each is used
            srand   (time(0));                                                                                             // Generating random numbers

            printf ("   In this game you will keep a number in your mind and I will try to find it!\n");                   // Printing the text
            printf ("   You can choose the level you want!\n");                                                            // Giving the user multiple options
            printf ("   Key in the number written in front of the level that you want!\n\n");                              // Printing the text

            while (1)                                                                                                      // Giving the user more options by adding it to the loop

            {                                                                                                              // Opening curly braces in "while"
                printf ("   1.      Easy level: 1 - 10   numbers and 6 attempts\n");                                       // Printing the  levels and their properties
                printf ("   2.    Normal level: 1 - 100  numbers and 6 attempts\n");                                       // Printing the  levels and their properties
                printf ("   3. Diffucult level: 1 - 200  numbers and 5 attempts\n");                                       // Printing the  levels and their properties
                printf ("   4.  Very Diffucult: 1 - 1000 numbers and 3 attempts\n\n");                                     // Printing the  levels and their properties

                printf ("   Now that you see your options, you can make your choice: ");                                   // Saying that from this moment the user will choose a level
                scanf  ("   %c", &choice);

                switch (choice)                                                                                            // Adding it to the "switch" state to perform certain behaviors in certain situations

                {                                                                                                          // Opening curly braces in "switch"
                    case '1':                                                                                              // Evaluating the status when "1" is entered
                        num_guesses = 6;                                                                                   // Assigning the number of attempts
                        pre_num_guesses = 7;                                                                               // Assigning the number of attempts
                        max = 10;                                                                                          // Setting the "max"
                    break;                                                                                                 // Exiting the "case" situation

                    case '2':                                                                                              // Evaluating the status when "2" is entered
                        num_guesses = 6;                                                                                   // Assigning the number of attempts
                        pre_num_guesses = 7;                                                                               // Assigning the number of attempts
                        max = 100;                                                                                         // Setting the "max"
                    break;                                                                                                 // Exiting the "case" situation

                    case '3':                                                                                              // Evaluating the status when "3" is entered
                        num_guesses = 5;                                                                                   // Assigning the number of attempts
                        pre_num_guesses = 6;                                                                               // Assigning the number of attempts
                        max = 200;                                                                                         // Setting the "max"
                    break;                                                                                                 // Exiting the "case" situation

                    case '4':                                                                                              // Evaluating the status when "4" is entered
                        num_guesses = 3;                                                                                   // Assigning the number of attempts
                        pre_num_guesses = 4;                                                                               // Assigning the number of attempts
                        max = 1000;                                                                                        // Setting the max"
                    break;                                                                                                 // Exiting the "case" situation

                    default:                                                                                               // Redirecting here if input anything except "case" cases
                        printf ("   Why would you choose something other than the given options? Try again!\n\n");         // Giving the error message
                        continue;                                                                                          // Continuing the programme
                }                                                                                                          // Closing curly braces in "switch"

                printf ("    Choose a number between %d to %d", min, max);                                                 // Printing the text
                getchar ();                                                                                                // Getting the user to press the key
                printf ("    Let's start!\n");                                                                             // Printing the text

                do                                                                                                         // Giving the user more options by adding it to the loop

                {                                                                                                          // Opening curly braces in "do"
                    guess = min + (max - min) / 2;                                                                         // Adding the formula
                    printf ("    My guess: %d\n", guess);                                                                  // Printing the guess

                    printf ("    Is it true? (Y/N): ");                                                                    // Printing the text
                    scanf  ("   %c", &choice);                                                                             // Detecting the character

                    if (choice == 'Y' || choice == 'y')                                                                    // Saying "yes"

                    {                                                                                                      // Opening curly braes in "if"
                        printf ("   Yes! I guessed right. I got in on my %d. guess.", pre_num_guesses-num_guesses);        // Printing the text
                        break;                                                                                             // Exiting the "if" situation
                    }                                                                                                      // Closing curly braces in "if"

                    else if (choice == 'N' || choice == 'n')                                                               // Saying "no"

                    {                                                                                                      // Opening curly braces in "else if"
                        printf ("    Is it greater or lesser? (G/L): ");                                                   // Printing the question
                        scanf  ("    %c", &choice);                                                                        // Detecting the character

                        if (choice == 'G' || choice == 'g')                                                                // Saying "greater"

                        {                                                                                                  // Opening curly braces in "if"
                            num_guesses--;                                                                                 // Decrementing the "num_guesses"
                            min = guess + 1;                                                                               // Adjusting the random number according to the decision made
                        }                                                                                                  // Closing curly braces in "if"

                        else if (choice == 'L' || choice == 'l')                                                           // Saying "less"

                        {                                                                                                  // Opening curly braces in "else if"
                            num_guesses--;                                                                                 // Decrementing the "num_guesses"
                            max = guess - 1;                                                                               // Adjusting the random number according to the decision made
                        }                                                                                                  // Closing curly braces in "else if"

                        else                                                                                               // As a result of entering a character other than the given options

                        {                                                                                                  // Opening curly braces in "else"
                        printf("    Please choose an option...\n");                                                        // Printing the text
                        continue;                                                                                          // Continuing the execution of the code
                        }                                                                                                  // Closing curly braces in "else"
                    }                                                                                                      // Closing curly braces in "else if"

                    else                                                                                                   // As a result of entering a character other than the given options

                    {                                                                                                      // Opening curly braces in "else"
                        printf ("    Please choose an option...\n");                                                       // Printing the text
                        continue;                                                                                          // Continuing the execution of the code
                    }                                                                                                      // Closing curly braces in "else"

                    if (num_guesses == 0 && num_guesses != number)                                                         // The case of running out of remaining guesses  and not finding the right number

                    {                                                                                                      // Opening curly braces in "if"
                    printf ("    I lost, okay? You won. Are you happy now?\n");                                            // Printing the text
                    break;                                                                                                 // Exiting the "if" situation
                    }                                                                                                      // Closing curly braces in "if"

                    printf ("    My remaining guess: %d\n", num_guesses);                                                  // Printing the text

                }                                                                                                          // Closing curly braces in "do"

                while (1);                                                                                                 // Giving the user more options by adding it to the loop

                {                                                                                                          // Opening curly braces in "while"
                    printf ("   Do you want to quit? (y = yes)\n");                                                        // Printing the text
                    scanf  ("   %c", &choice);                                                                             // Detecting the character
                }                                                                                                          // Closing curly braces in "while"

                if (choice == 'Y' || choice == 'y')                                                                        // Willing to continue

                {                                                                                                          // Opening curly braces in "if"
                    printf ("Thanks for playing!\n");                                                                      // Printing the goodbye message
                    exit   (0);                                                                                            // Exiting the programme
                }                                                                                                          // Closing curly braces in "if"

                else

                {
                    printf ("   Let's continue then...\n");
                    main1   ();
                }
        }                                                                                                                  // Closing curly braces in "while"

        return 0;                                                                                                          // Terminating the execution of the function

        }                                                                                                                  // Closing curly braces in "void game_2 ()"

