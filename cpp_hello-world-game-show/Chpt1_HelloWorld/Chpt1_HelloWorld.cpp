#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <string>
#include <string.h>
#include <time.h>
#include <windows.h>
#include <mmsystem.h>
#include <algorithm>
#include <iterator>
#include <cstdlib>
#include <array>

using namespace std;

// GLOBAL VARIABLES BEFORE ANYTHING HAPPENS
bool replay = true, replay_player_change = true, complete = false, sex_identified = false, played_before = false, sex_joke = false;

int player_score = 0, annoyance_score = 0;

string Player_Name, Player_Sex, sex;

string positive_responses[13] = {"yes","yeah","yep","sure","okay","totally","y","yes.","yeah.","yep.","sure.","okay.","totally."};
string negative_responses[7] = {"no","nope","nah", "n", "no.", "nope.", "nah."};

string Names_Check_List[3] = {"Tom","Arthur","Lily"}; 
// END OF GLOBAL VARIABLES

void Introduction()
{
    PlaySound(TEXT("intro.wav"), NULL, SND_FILENAME | SND_ASYNC);
    string str1("Hello World!");
    for_each(str1.begin(), str1.end(), [](char c)
        {
            std::cout << c;
            Sleep(69);
        });
    cout << "\n";
    Sleep(1300);
    string str2("Get ready to embark on a new experience!\n");
    for_each(str2.begin(), str2.end(), [](char c)
        {
            std::cout << c;
            Sleep(20);
        });
    Sleep(500);
    cout << "\n";
    Sleep(500);
    string str3("The game is going to start soon... you might be next to play.");
    for_each(str3.begin(), str3.end(), [](char c)
        {
            std::cout << c;
            Sleep(15);
        });
    cout << "\n \n";
    Sleep(4500);
    cout << "\n";
    Sleep(1000);
    string str4("Do not play this, I beg you, please.");
    for_each(str4.begin(), str4.end(), [](char c)
        {
            std::cout << c;
            Sleep(8);
        });
    Sleep(100);
    cout << "\r                                     " << "\r"; 
    Sleep(500);
    cout << "\rYou got invited!\n \n";
}

void PrintWelcome()
{
    PlaySound(TEXT("welcome.wav"), NULL, SND_FILENAME | SND_ASYNC);
    cout << "#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#" << endl; // 83 ~'s
    Sleep(30);
    cout << ")  ______  __    ___________           ___       __            ___________________  (" << endl;
    Sleep(80);
    cout << "(  ___  / / /_______  /__  /_____      __ |     / /_______________  /_____  /__  /  )" << endl;
    Sleep(80);
    cout << ")  __  /_/ /_  _ |_  /__  /_  __ |     __ | /| / /_  __ |_  ___/_  /_  __  /__  /   (" << endl;
    Sleep(80);
    cout << "(  _  __  / /  __/  / _  / / /_/ /     __ |/ |/ / / /_/ /  /   _  / / /_/ /  /_/    )" << endl;
    Sleep(80);
    cout << ")  /_/ /_/  |___//_/  /_/  |____/      ____/|__/  |____//_/    /_/  |__,_/  (_)     (" << endl;
    Sleep(80);
    cout << "(                                                                                   )" << endl;
    Sleep(30);
    cout << "#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#" << endl;
    
    Sleep(8000);
    cout << "#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#" << endl;
    Sleep(30);
    cout << "#$$$$$$$$$             Welcome to this brand new game show:              $$$$$$$$$$$#" << endl;
    Sleep(30);
    cout << "#$$$$$$$$$                          HELLO WORLD!                         $$$$$$$$$$$#" << endl;
    Sleep(30);
    cout << "#$$$$$$$$$    Let's get started, but first of all we need to know your   $$$$$$$$$$$#" << endl;
    Sleep(30);
    cout << "#$$$$$$$$$  name and sex, to help us identify you for the high score by  $$$$$$$$$$$#" << endl;
    Sleep(30);
    cout << "#$$$$$$$$$   the end of the show, to show off to your friends how good   $$$$$$$$$$$#" << endl;
    Sleep(30);
    cout << "#$$$$$$$$$                       and lucky you are.                      $$$$$$$$$$$#" << endl;
    Sleep(30);
    cout << "#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#" << endl;
    system("pause");
    cout << "\33[2K" << "\033[A" << "\r                                              " << "\r";
    Sleep(1700);
    cout << "\33[2K" << "\033[A" << "\33[2K" << "\033[A" << "\33[2K" << "\033[A" << "\33[2K" << "\033[A" << "\33[2K" << "\033[A" << "\33[2K" << "\033[A" << "\33[2K" << "\033[A" << "\33[2K" << "\033[A";
    cout << "#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#" << endl;
    cout << "#$$$$$$$$$      Welcome Child, it's too late to escape the program:      $$$$$$$$$$$#" << endl;
    cout << "#$$$$$$$$$                        HOPELESS CHILD!                        $$$$$$$$$$$#" << endl;
    cout << "#$$$$$$$$$           You noticed the text earlier, didn't you?           $$$$$$$$$$$#" << endl;
    cout << "#$$$$$$$$$             We made it that you can't close this              $$$$$$$$$$$#" << endl;
    cout << "#$$$$$$$$$            program, unless you force close it, but            $$$$$$$$$$$#" << endl;
    cout << "#$$$$$$$$$      if you leave now, I promise that you will regret it.     $$$$$$$$$$$#" << endl;
    cout << "#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#" << endl;
    Sleep(400);
    cout << "\33[2K" << "\033[A" << "\33[2K" << "\033[A" << "\33[2K" << "\033[A" << "\33[2K" << "\033[A" << "\33[2K" << "\033[A" << "\33[2K" << "\033[A" << "\33[2K" << "\033[A" << "\33[2K" << "\033[A";
    cout << "#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#" << endl;
    cout << "#$$$$$$$$$             Welcome to this brand new game show:              $$$$$$$$$$$#" << endl;
    cout << "#$$$$$$$$$                          HELLO WORLD!                         $$$$$$$$$$$#" << endl;
    cout << "#$$$$$$$$$    Let's get started, but first of all we need to know your   $$$$$$$$$$$#" << endl;
    cout << "#$$$$$$$$$  name and sex, to help us identify you for the high score by  $$$$$$$$$$$#" << endl;
    cout << "#$$$$$$$$$   the end of the show, to show off to your friends how good   $$$$$$$$$$$#" << endl;
    cout << "#$$$$$$$$$                       and lucky you are.                      $$$$$$$$$$$#" << endl;
    cout << "#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#" << endl;
    Sleep(2000);
    
}

void PlayerDefine()
{
    if (played_before)
    {
        cout << "Okay1."; // Incomplete.
    }
    else
    {
        cout << "Hey, so, what is your name: \n";
        getline(cin, Player_Name);
        string Player_Name_Check = Player_Name;
        transform(Player_Name.begin(), Player_Name.end(), Player_Name.begin(), ::tolower);

        if (find(begin(Names_Check_List), end(Names_Check_List), Player_Name))
        {

        }

        // TO DO (Make some unique name checks to make additional comments and change in stats).

        cout << "So for medical reasons, I will need to know your sex, not joking here.\n";
        cout << "[m] - Male.\n";
        cout << "[f] - Female. \n";
        cout << "What is your sex: \n";

        bool multiple_tries = false;
        string sex_jokes[3] = {"yes","yes please","attack helicopter"};
        string male_identity[7] = {"male","man","sir","m","male.","man.","sir"};
        string female_identity[7] = {"female","woman","lady","f","female.","woman.","lady."};
        string other_identities[2] = {"intersex","intersex."};

        while (sex_identified == false)
        {
            getline(cin, Player_Sex);
            string Player_Sex_Check = Player_Sex;
            transform(Player_Sex_Check.begin(), Player_Sex_Check.end(), Player_Sex_Check.begin(), ::tolower);

            if (find(begin(male_identity), end(male_identity), Player_Sex_Check))
            {
                if (multiple_tries)
                {
                    cout << "\33[2K" << "\033[A";
                }
                cout << "\33[2K" << "\033[A" << "\nGood day, sir.                                                  \n";
                cout << "\n";
                sex = "Male";
                sex_identified = true;
            }
            else if (find(begin(female_identity), end(female_identity), Player_Sex_Check))
            {
                if (multiple_tries)
                {
                    cout << "\33[2K" << "\033[A";
                }
                cout << "\33[2K" << "\033[A" << "\nGood day, ma'am.                                               \n";
                cout << "\n";
                sex = "Female";
                sex_identified = true;
            }
            else if (find(begin(sex_jokes), end(sex_jokes), Player_Sex_Check))
            {
                sex_joke = true;
                annoyance_score++;
                
                if (multiple_tries)
                {
                    cout << "\33[2K" << "\033[A";
                }
                multiple_tries = true;

                if (annoyance_score > 12)
                {
                    cout << "\33[2K" << "\033[A" << "Okay.\n";
                }
                else
                {
                    cout << "\33[2K" << "\033[A" << "Hahaha, oh, you're so funny. Are you a male, or a female?                    \n";
                }
            }
            else
            {
                if (multiple_tries)
                {   
                    if (Player_Sex == "no" && sex_joke == false)
                    {
                        cout << "\33[2K" << "\033[A" << "\rDon't get coy with me.                             \n";
                        annoyance_score++;
                        Sleep(750);
                    }
                    cout << "\33[2K" << "\033[A";
                }
                multiple_tries = true;
                if (sex_identified == false)
                {
                    cout << "\33[2K" << "\033[A" << "\rWe couldn't get that, could you try again?                     \n";
                }
            }
        }
    }
} // TO FIX

// Doesn't work properly yet due to find not actually finding.
// Also, have it return two strings, player name and player sex.

void PrintMainOverlay()
{

}

// Haven't done this, but it will be the decider in between each game.

void PrintHangmanOverlay()
{

}

int game1(int score)
{
    cout << "Your current score is: " << score << "\n";
    Sleep(1000);
    cout << "Are you ready to play?\n";
    system("pause");
    srand(time(NULL));
    int generated_number = ((rand() % 100) + 1);

    cout << "The number is (only for testing purposes): " << generated_number << "\n";

    int tries = 8;
    int guess;
    bool correct = false;
    int past_tries[8] = {}; // This array for some strange reason is {0,0,0,0,0,0,0,0}, it would be nice if it were empty...


    while (tries > 0 && ! correct)
    {
        cout << "Guess the number:\n";
        cin >> guess;
        if (guess <=1 or guess >=100)
        {
            cout << "Try again, this is either not a valid number or not a number at all.\n";
        }
        else if (find(begin(past_tries), end(past_tries), guess))
        {
            cout << "Try again, you've already said that number, we don't want you to waste your moves.\n";
        }
        //POINT OF ISSUE              find(begin(past_tries), end(past_tries), guess) just straight up doesn't work, whatsoever.
        else if (guess > generated_number)
        {
            cout << "Lower.\n";
            past_tries[8-tries] = guess;
            tries--;
        }
        else if (guess < generated_number)
        {
            cout << "Higher.\n";
            past_tries[8 - tries] = guess;
            tries--;
        }
        else if (guess == generated_number)
        {
            cout << "You got it, chiefton.\n";
            correct = true;

        }
        else
        {
            cout << "Try again, we didn't catch you there.\n";
        }
    }
    if (correct)
    {
        score = score + (500 * (1 + (0.5 * tries)));
    }
    if (! correct)
    {
        score = score + 100;
    }
    cout << "Now, your score is:" << score << "\n";
    system("pause");
    return score;
}

// Mostly works, but the finding part doesn't work, even for integers (stuffing values is fine though).

int game2(int score)
{
    string opponent_name_female[5] = {"Brenda","Jenny","Kristen","Gilly","Erika"};
    string opponent_name_male[5] = {"Steven","Garry","Bobby","Louis","Peter"};
    string opponent_name_other[5] = {"A","B","C","D","E"}; // These things are going to be useless for now ;(

    bool game_on = false;
    int guess;

    cout << "Hello Game 2!\n";
    Sleep(2000);
    cout << "We're here to play rock paper scissors. You're up against Brenda.\n";
    Sleep(2000);
    cout << "Are you ready?\n";
    system("pause");

    int tries = 0, wins = 0, losses = 0;
    

    cout << "[1] Rock\n" << "[2] Paper\n" << "[3] Scissors\n";

    while (tries < 8 || wins < 3 || losses < 3)
    {
        cout << "Round " << tries + 1;
        
        cout << "Make your guess:";
        cin >> guess;

        // if (the guess is irrelevant to rock paper scissors)

        srand(time(NULL));
        int generated_number = ((rand() % 3) + 1); // 1 = rock, 2 = paper, 3 = scissors
        cout << "The number is (only for testing purposes): " << generated_number << "\n";
        Sleep(2000);
        cout << "ROCK... ";
        Sleep(500);
        cout << "PAPER... ";
        Sleep(500);
        cout << "SCISSORS!\n";
        Sleep(250);

        // you threw rock/paper/scissors

        if (guess == 1) // If player is rock
        {
            if (generated_number == 1)
            {
                cout << "It's a draw.\n";
            }
            if (generated_number == 2)
            {
                wins++;
                cout << "You win!\n";
            }
            else
            {
                losses++;
                cout << "You lost!\n";
            }
        }
        else if (guess == 2) // If player is paper
        {
            if (generated_number == 1)
            {
                wins++;
                cout << "You win!\n";
            }
            if (generated_number == 2)
            {
                cout << "It's a draw.\n";
            }
            else
            {
                losses++;
                cout << "You lost!\n";
            }
        }
        else if (guess == 3) // If player is scissors
        {
            if (generated_number == 2)
            {
                wins++;
                cout << "You win!\n";
            }
            else if (generated_number == 3)
            {
                cout << "It's a draw. \n";
            }
            else
            {
                losses++;
                cout << "You lost!\n";
            }
        }
    }
    return score;
}

int game3(int score)
{
    cout << "Hello Game 3!\n";
    int z = 6;
    return score;
}

int main()
{
    
    Introduction();
    PrintWelcome();

    cout << "I am sorry, but the game show is out of action for C++, more experience required";
    Sleep(1000);

    while (replay) // replay is a boolean that starts true, and stops the game show retries at the end if you say no.
    {
        // This is in the replay loop, where the game will end if the replay is false.
        if (replay_player_change == true) // replay_player_change is asked after you say yes in the end of the game show, asked if you want to change the name and sex of the player.
        {
            // This is the name and sex setting.
        }
        //PrintMainOverlay();
        bool game1_done = false, game2_done = false, game3_done = false;
        while (complete == false)
        {
            cout << "This means that completed boolean is true and is about to be false.\n";
            Sleep(1000);
            complete = true; // Only for now
            replay = false; // Only for now
            if (game1_done && game2_done && game3_done == true)
            {
                complete = true;
            }
        }
    }
}