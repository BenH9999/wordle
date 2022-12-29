#include "Game.h"

using namespace std;

void Game::mainGame(std::string target, const std::unordered_set<std::string> realWords, std::unordered_set<std::string> chosenWords, int length){
    Word w;
    bool again = true;
    string input = "";

    while(again){
        srand(time(0));
        bool finished = false;
        bool valid = false;
        bool won = false;
        validLength = false;
        count = 0;
        again = false;
        again2 = "";

        //int* length2 = new int(length);

        for(const string& Word : realWords){
            if(Word.length() == length) chosenWords.insert(Word);
        }

        target = w.findTarget(chosenWords);
        cout << target << "\n" << endl;

        //cout << "Welcome to wordle!\n" << endl;

        while(!finished){
            while(!valid){
                cin >> input;
                cout << "\u001b[1A";
                for(int i = 0; i < size(input); i++){
                    input.at(i) = tolower(input.at(i));
                }
                valid = w.validInput(chosenWords, input);
                cout << endl;
            }
            valid = false;

            int* counter = new int[length];
            int* placed = new int[length];
            char* l = new char[length];
            char* t = new char[length];
            bool* e = new bool[length];
            bool* c = new bool[length];
            
            for(int i = 0; i < length; i++){
                counter[i] = 0;
                placed[i] = 0;
            }

            for(int i = 0; i < length; i++){
                l[i] = input.at(i);
                t[i] = target.at(i);
                e[i] = false;
                c[i] = false;
                for(int j = 0; j < length; j++){
                    if(t[i] == target.at(j))counter[i]++;
                }
            }

            if(input == "/h"){
                int r = (rand() % length) + 1;
                cout << "Hint: the letter in position " << r << " is " << t[r-1] << endl;
            }

            if(input == target){
                cout << "\u001b[1A\u001b[42m" << target << "\u001b[0m\n" << endl;
                won = true;
                finished = true;
                break;
            }

            for(int i = 0; i < length; i++){
                for(int j = 0; j < length; j++){
                    if(l[i] == target.at(j) && i == j && placed[j] < counter[j]){
                        c[i] = true;
                        placed[j]++;
                        break;
                    } 
                }
            }
            for(int i = 0; i < length; i++){
                for(int j = 0; j < length; j++){
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
                    else if(l[i] == target.at(j) && i == 5 && placed[j] < counter[j] && !c[i]){
                         e[i] = true;
                         placed[j]++;
                         break;
                    }
                    else if(l[i] == target.at(j) && i == 6 && placed[j] < counter[j] && !c[i]){
                         e[i] = true;
                         placed[j]++;
                         break;
                    }
                    else if(l[i] == target.at(j) && i == 7 && placed[j] < counter[j] && !c[i]){
                         e[i] = true;
                         placed[j]++;
                         break;
                    }
                    else if(l[i] == target.at(j) && i == 8 && placed[j] < counter[j] && !c[i]){
                         e[i] = true;
                         placed[j]++;
                         break;
                    }
                    else if(l[i] == target.at(j) && i == 9 && placed[j] < counter[j] && !c[i]){
                         e[i] = true;
                         placed[j]++;
                         break;
                    }
                    else if(l[i] == target.at(j) && i == 10 && placed[j] < counter[j] && !c[i]){
                         e[i] = true;
                         placed[j]++;
                         break;
                    }
                    else if(l[i] == target.at(j) && i == 11 && placed[j] < counter[j] && !c[i]){
                         e[i] = true;
                         placed[j]++;
                         break;
                    }
                    else if(l[i] == target.at(j) && i == 12 && placed[j] < counter[j] && !c[i]){
                         e[i] = true;
                         placed[j]++;
                         break;
                    }
                    else if(l[i] == target.at(j) && i == 13 && placed[j] < counter[j] && !c[i]){
                         e[i] = true;
                         placed[j]++;
                         break;
                    }
                    else if(l[i] == target.at(j) && i == 14 && placed[j] < counter[j] && !c[i]){
                         e[i] = true;
                         placed[j]++;
                         break;
                    }
                    else if(l[i] == target.at(j) && i == 15 && placed[j] < counter[j] && !c[i]){
                         e[i] = true;
                         placed[j]++;
                         break;
                    }
                    else if(l[i] == target.at(j) && i == 16 && placed[j] < counter[j] && !c[i]){
                         e[i] = true;
                         placed[j]++;
                         break;
                    }
                    else if(l[i] == target.at(j) && i == 17 && placed[j] < counter[j] && !c[i]){
                         e[i] = true;
                         placed[j]++;
                         break;
                    }
                    else if(l[i] == target.at(j) && i == 18 && placed[j] < counter[j] && !c[i]){
                         e[i] = true;
                         placed[j]++;
                         break;
                    }
                    else if(l[i] == target.at(j) && i == 19 && placed[j] < counter[j] && !c[i]){
                         e[i] = true;
                         placed[j]++;
                         break;
                    }
                    else if(l[i] == target.at(j) && i == 20 && placed[j] < counter[j] && !c[i]){
                         e[i] = true;
                         placed[j]++;
                         break;
                    }
                    else if(l[i] == target.at(j) && i == 21 && placed[j] < counter[j] && !c[i]){
                         e[i] = true;
                         placed[j]++;
                         break;
                    }
                    else if(l[i] == target.at(j) && i == 22 && placed[j] < counter[j] && !c[i]){
                         e[i] = true;
                         placed[j]++;
                         break;
                    }
                    else if(l[i] == target.at(j) && i == 23 && placed[j] < counter[j] && !c[i]){
                         e[i] = true;
                         placed[j]++;
                         break;
                    }
                    else if(l[i] == target.at(j) && i == 24 && placed[j] < counter[j] && !c[i]){
                         e[i] = true;
                         placed[j]++;
                         break;
                    }
                    else if(l[i] == target.at(j) && i == 25 && placed[j] < counter[j] && !c[i]){
                         e[i] = true;
                         placed[j]++;
                         break;
                    }

                }
                

            }

            for(int i = 0; i < length; i++){
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

                if(i == length - 1) cout << endl;
            }

            count++;
            if(count == length){
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