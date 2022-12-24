#include "Game.h"

using namespace std;

void Game::mainGame(std::string target, const std::unordered_set<std::string> realWords){
    Word w;
    bool again = true;
    bool finished = false;
    bool won = false;
    string input = "";

    while(again){
        srand(time(0));
        count = 0;
        again = false;

        target = w.findTarget(realWords);
        cout << target << "\n\n" << endl;

        cout << "Welcome to wordle!\n" << endl;

        while(!finished){
            cin >> input;
            int counter[5] = {0, 0, 0, 0, 0};
            int placed[5] = {0, 0, 0, 0, 0};

            for(int i = 0; i < 5; i++){
                l[i] = input.at(i);
                t[i] = target.at(i);
                e[i] = false;
                c[i] = false;
                for(int j = 0; j < 5; j++){
                    if(t[i] == target.at(j))counter[i]++;
                }
            }

            if(input == target){
                cout << "\u001b[42m" << target << "\u001b[0m\n" << endl;
                won = true;
                finished = true;
                break;
            }

            for(int i = 0; i < 5; i++){
                for(int j = 0; j < 5; j++){
                    if(l[i] == target.at(j) && i == j && placed[j] < counter[j]){
                        c[i] = true;
                        placed[j]++;
                        break;
                    } 
                }
            }
            for(int i = 0; i < 5; i++){
                for(int j = 0; j < 5; j++){
                    if(l[i] == target.at(j) && i == 0 && placed[j] < counter[j] && !c[i]){
                         e[i] = true;
                         placed[j]++;
                         break;
                    }
                    else if(l[i] == target.at(j) && i == 1 && placed[j] < counter[j] && !c[i]){
                         e[i] = true;
                         placed[j]++;
                         break;
                    }
                    else if(l[i] == target.at(j) && i == 2 && placed[j] < counter[j] && !c[i]){
                         e[i] = true;
                         placed[j]++;
                         break;
                    }
                    else if(l[i] == target.at(j) && i == 3 && placed[j] < counter[j] && !c[i]){
                         e[i] = true;
                         placed[j]++;
                         break;
                    }
                    else if(l[i] == target.at(j) && i == 4 && placed[j] < counter[j] && !c[i]){
                         e[i] = true;
                         placed[j]++;
                         break;
                    }
                }
                

            }

            for(int i = 0; i < 5; i++){
                if(c[i] == true) {
                    cout << "\u001b[42m" << l[i] << "\u001b[0m";
                }
                
                else if(e[i] == true) {
                    cout << "\u001b[43m" << l[i] << "\u001b[0m";
                }
                else {
                    cout << l[i];
                }
                if(i == 5) cout << endl;
            }

            count++;
            if(count == 5){
                    finished = true;
                }

        }

        if(won == true){
            cout << "Well done!" << endl;
        }
         else{
            cout << "You lost" << endl;
        }
    }
}