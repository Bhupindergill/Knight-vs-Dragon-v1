/* Bhupinder and Saad
*/

#include <iostream>

using namespace std;
int main() {
    int dragon_health = 0; 
    int player_health = 0;
    
    string move;
    string player_name;
    string arrow_location;
    char play_again = 'y';
    do
    {
        bool gameover = false;
        player_health += 100;
        dragon_health += 100;
            cout << "Please enter your name: ";
                
                getline(cin,player_name);
                cout << "Your name is " << player_name << "!\n";
                cout << "You are versing a deadly dragon and must defeat him\n";
                cout << "Your weapons are:\n"
                    << "- Sword\n"
                    << "- Shield\n"
                    << "- Bombs\n"
                    << "- Bow and Arrows\n";
                 cout << "Your comands are:\n"
                    << "- walk\n"
                    << "- sword\n"
                    << "- bomb\n"
                    << "- arrow\n"
                    << "- shield\n";
                    system("color 02");
           do
           {
                 cout << player_name << " health " << player_health << "% -----||" << "----- " 
                     << "Dragon's health: " << dragon_health << "%\n ";
                cout << "What do you want to do?:\n";
                cin >> move;
                if (move == "walk")
                {
                         cout << "Then what?:\n ";
                         cin.ignore();
                         getline(cin, move);
                         if (move == "walk")
                         {
                                  cout << "Already did that!\n";
                                  cout << "Please enter a move!\n";
                                  cin.ignore();
                                  getline(cin, move);
                         }
                         else if (move == "sword")
                         {
                              dragon_health -= 10;
                              cout << "The dragon took 10% of damage!\n";
                              cout << player_health << "% -----||" << "----- " 
                                   << dragon_health << "%\n";
                         }
                         else if (move == "shield")
                         {
                              cout << "Did nothing!\n";
                         }
                         else if (move == "bomb")
                         {
                              dragon_health -= 15;
                              player_health -= 5;
                              cout << "The dragon took 15% of damage!\n";
                              cout << "You took 5% of damage!\n";
                              cout << player_health << "% -----||" << "----- " 
                                   << dragon_health << "%\n";
                         }
                         else if (move == "arrow")
                         {
                              cout << "Where do you want to shoot it, head, or stomach?: ";
                              cin >> arrow_location;
                              if (arrow_location == "head")
                              {
                                        dragon_health -= 10;
                                        cout << "The dragon took 10% of damage!\n";
                                        cout << player_health << "% -----||" 
                                             << "----- " 
                                             << dragon_health << "%\n ";
                              }
                              else if (arrow_location == "stomach")
                              {
                                   dragon_health -= 5;
                                   cout << "The dragon took 5% of damage!\n";
                                   cout << player_health << "% -----||" << "----- " 
                                        << dragon_health << "%\n ";
                              }
                              else
                              {
                                  cout << "Invalid\n";
                              }
                         }
                         else if (move == "bomb")
                         {
                              dragon_health -= 10;
                              cout << "The dragon took 10% of damage!\n";
                              cout << player_health << "% -----||" << "----- " 
                                   << dragon_health << "%\n ";
                         }
                         else
                        {
                            cout << "Invalid command\n";
                        }
                         if (gameover == false)
                         {
                            cout << "The dragon is breathing fire!!\n What are you going to do?\n";
                            system("color 04");
                            cin >> move;
                            if (move == "shield")
                            {
                                cout << "Your shield reflected some of the fire," 
                                     << "you and the dragon took damage!!\n";
                                player_health -= 5;
                                dragon_health -= 5;
                            }
                            else if (move == "arrow")
                            {
                                cout << "Your arrow cought on fire and turned into a fire arrow.\n"
                                     << "It did more damage\n";
                                dragon_health -= 20;
                                player_health -= 15;
                            }
                            else if (move == "bomb")
                            {
                               cout << "The bomb exploded in front of you, because of the fire!\n";
                               player_health -= 20;
                               dragon_health -= 5;
                            }
                            else
                            {
                                cout << move << " didn't work!\n";
                                player_health -= 20;
                            }
                         }
                }
                else if (move == "sword")
                {
                    dragon_health -= 5;
                    cout << "The dragon took 5% of damage!\n";
                    cout << player_health << "% -----||" << "----- " 
                         << dragon_health << "%\n";
                }
                else if (move == "shield")
                {
                    cout << "Did nothing!\n";
                }
                else if (move == "bomb")
                {
                     dragon_health -= 10;
                     cout << "The dragon took 10% of damage!\n";
                     cout << player_health << "% -----||" << "----- " 
                          << dragon_health << "%\n";
                }
                else if (move == "arrow")
                {
                     cout << "Where do you want to shoot it, head, or stomach?: ";
                     cin >> arrow_location;
                     if (arrow_location == "head")
                     {
                                        dragon_health -= 15;
                                        cout << "The dragon took 15% of damage!\n";
                                        cout << player_health << "% -----||" 
                                             << "----- " 
                                             << dragon_health << "%\n ";
                     }
                     else if (arrow_location == "stomach")
                     {
                          dragon_health -= 5;
                          cout << "The dragon took 5% of damage!\n";
                          cout << player_health << "% -----||" << "----- " 
                               << dragon_health << "%\n ";
                     }
                     else
                     {
                         cout << "Invalid\n";
                     }
                }
                else if (move == "bomb")
                {
                     dragon_health -= 10;
                     cout << "The dragon took 10% of damage!\n";
                     cout << player_health << "% -----||" << "----- "; 
                     cout << dragon_health << "%\n ";
                }
                else
                {
                    cout << "Invalid command\n";
                }
                if (gameover == false)
                {
                    cout << "The dragon is breathing fire!!\n What are you going to do?\n";
                    cin >> move;
                    if (move == "shield")
                    {
                        cout << "Protected!!\n";
                    }
                    else if (move == "arrow")
                    {
                             cout << "Your arrow cought on fire and turned into a fire arrow.\n"
                                  << "It did more damage\n";
                             dragon_health -= 20;
                             player_health -= 15;
                    }
                    else if (move == "bomb")
                    {
                        cout << "The bomb exploded in front of you, because of the fire!\n";
                        player_health -= 20;
                        dragon_health -= 5;
                    }
                    else if (move != "shield")
                    {
                        cout << move << " didn't work!\n";
                        player_health -= 20;
                    }
                }
                if (player_health <= 0)
                {
                    gameover = true;
                }
                else if (dragon_health <= 0)
                {
                    gameover = true;
                }
           } while (gameover != true);
           if (dragon_health <= 0)
           {
                             cout << "Congradulations!! You Won!!\n";
           }
           else if (player_health <= 0)
           {
                cout << "GAME OVER!!\n You lost, better try next time!\n";
           }
           cout << "Do you want to play again (y/n)?: ";
           cin >> play_again;
    } while (play_again != 'n');
    cout << "THANKS FOR PLAYING!!\n";
    
    return 0;
}
