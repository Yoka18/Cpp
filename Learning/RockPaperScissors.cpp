#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    string player;
    string opponent;
    int playerScore = 0;
    int opponentScore = 0;
    string rps[] = {"tas", "kagit", "makas"};

    srand((unsigned int) time(NULL));



    while(true){
        cout << "Sec bakalim Tas, Kagit yada Makas:";
        getline(cin, player);
        
        if(player != "tas" && player != "kagit" && player != "makas"){
            break;
        }

        opponent = rps[rand() % 3];

        cout << "Rakip " << opponent << " secti" << endl;


        if(player == opponent){
            playerScore++;
            opponentScore++;
        }
        else if (player == "tas"){
            if(opponent == "makas") playerScore++;
            else if (opponent == "kagit") opponentScore++;
        }
        else if (player == "kagit"){
            if(opponent == "tas") playerScore++;
            else if(opponent == "makas") opponentScore++;
        }
        else if (player == "makas"){
            if(opponent == "kagit") playerScore++;
            else if(opponent == "tas") opponentScore++;
        }
        
        cout << "# Oyuncu: " << playerScore << " Rakip:" << opponentScore << endl;
        cout << "---------" << endl;
    }

    cout << "------------------------" << endl;
    cout << "# Oyuncu: " << playerScore << " Rakip:" << opponentScore << endl;
    cout << "------------------------" << endl;
    if(playerScore > opponentScore) cout << "Oyuncu kazandi!" << endl;
    else if(playerScore < opponentScore) cout << "Rakip kazandi!" << endl;
    else cout << "berabere" << endl;


}
