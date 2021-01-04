#include <bits/stdc++.h>
#include <time.h> 
  
using namespace std;

void delay(int number_of_seconds) 
{ 
    // Converting time into milli_seconds 
    int milli_seconds = 1000 * number_of_seconds; 
  
    // Storing start time 
    clock_t start_time = clock(); 
  
    // looping till required time is not achieved 
    while (clock() < start_time + milli_seconds) 
        ; 
} 



int main()
{
    printf(".-. .-. .-. . .\n");
    printf("|(  | | |   |<\n");
    printf("' ' `-' `-' ' `\n\n");
    printf(".-. .-. .-. .-. .-.\n");
    printf("|-' |-| |-' |-  |(\n");
    printf("'   ` ' '   `-' ' '\n\n");
    printf(".-. .-. .-. .-. .-. .-. .-.\n");
    printf("`-. |    |  `-. `-. | | |(\n");
    printf("`-' `-' `-' `-' `-' `-' ' '\n");

    int i; 
    for (i = 0; i < 5; i++) { 
        // delay of one second 
        delay(1); 
    }
    system("clear");
    
    char exit = 1;
    while(exit)
    {
        int compoint = 0,userpoint = 0;
        for (int i = 0; i < 3; i++)
        {        
            string a;
            int user = 0,com = 0;
            cout << "rock, paper or scissor?\n";
            cout << "User: ";
            cin >> a;
            if(a == "rock")
                user = 1;
            if(a == "paper")
                user = 2;
            if(a == "scissor")
                user = 3;
            if(user != 1 && user != 2 && user != 3)
            {
                cout << "ERROR";
                return 0;    
            }
            srand(time(NULL));
            switch(com = 1+rand()%3)
            {
                case 1:
                    cout << "Com: rock\n\n";
                    cout << "       _______\n";
                    cout << "   ---'   ____)\n";
                    cout << "        (_____)\n";
                    cout << "        (_____)\n";
                    cout << "         (____)\n";
                    cout << "    ---.__(___)\n";
                                       
                    break;
                case 2:
                    cout << "Com: paper\n";
                    cout << "     _______\n";
                    cout << "---'    ____)____\n";
                    cout << "           ______)\n";
                    cout << "          _______)\n";
                    cout << "         _______)\n";
                    cout << "---.__________)\n";
                    break;
                case 3:
                    cout << "Com: scissor\n";
                    cout << "    _______\n";
                    cout << "---'   ____)____\n";
                    cout << "          ______)\n";
                    cout << "       __________)\n";
                    cout << "      (____)\n";
                    cout << "---.__(___)\n";
                    break;
            }
            
            if(user == com)
                cout << "draw\n";
            else if(user == 1 && com == 2)
            { 
                cout << "You LOSS\n";
                compoint++;
            }
            else if(user == 1 && com == 3)
            {
                cout << "You WIN\n";
                userpoint++;
            }
            else if(user == 2 && com == 1)
            {
                cout << "You WIN\n";
                userpoint++;
            }
            else if(user == 2 && com == 3)
            {
                cout << "You LOSS\n";
                compoint++;
            }
            else if(user == 3 && com == 1)
            {
                cout << "You LOSS\n";
                compoint++;
            }
            else if(user == 3 && com == 2)
            {
                cout << "You WIN\n";
                userpoint++;
            }
            
        }
        printf("------------------------------------------\nSCORE\n");
        printf("Com: %d\nUser: %d\n",compoint,userpoint);
        if(userpoint > compoint)
            printf("You won this game!\n");
        if(userpoint == compoint)
            printf("DRAW\n");
        if(userpoint < compoint)
            printf("You lost this game\n");
        for (int i = 1; i != 0;)
        {
            printf("enter 0 to exit\nenter other number to continue");
            scanf(" %d", &exit);
            if('A' <= exit&& exit <= 'Z')
            {
                i = 1;
            }
            else if('a' <= exit&& exit <= 'z')
            {
                i = 1;
            }
            else 
            {
                system("clear");
                i = 0;
            }
        }
            
    }   
    return 0;
}