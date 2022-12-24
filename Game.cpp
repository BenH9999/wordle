#include "Game.h"

using namespace std;

void Game::mainGame(std::string target, const std::unordered_set<std::string> realWords){
    Word w;
    bool again = true;
    string input = "";

    while(again){
        srand(time(0));
        bool finished = false;
        bool valid = false;
        bool won = false;
        count = 0;
        again = false;
        again2 = "";

        target = w.findTarget(realWords);
        cout << target << "\n\n" << endl;

        cout << "Welcome to wordle!\n" << endl;

        while(!finished){
            while(!valid){
                cin >> input;
                valid = w.validInput(realWords, input);
            }
            valid = false;
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
                cout << "\u001b[1A\u001b[42m" << target << "\u001b[0m\n" << endl;
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
                if(i == 0) cout << "\u001b[1A";

                if(c[i] == true) {
                    cout << "\u001b[42;1m" << l[i] << "\u001b[0m";
                }
                
                else if(e[i] == true) {
                    cout << "\u001b[43;1m" << l[i] << "\u001b[0m";
                }
                else {
                    cout << l[i];
                }

                if(i == 4) cout << endl;
            }

            count++;
            if(count == 5){
                finished = true;
            }

        }

        if(won == true){
            cout << "Well done!\n" << endl;
        }
         else{
            cout << "You lost\n" << endl;
        }

        cout << "Would you like to play again?(y = yes, other letter = exit)" << endl;
        //again2 = getchar();
        cin >> again2;

        if(again2 == "y") again = true;
    }
}