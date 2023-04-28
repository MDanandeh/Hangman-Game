#include <iostream>
#include <cstdlib>

using namespace std;
void drawing(int draw);

int main() {
    string theword;
    int randword;

    string words[22] = {
            "fat","bat","mat","sat","dad","lad","cat","mom",
            "bun","sun","fun","run","rat","tom","cop",
            "mop","man","van","hat","red","app","sap"
    };

    int draw = 1;
    string ans;
    randword = rand() % 22;
    theword = words[ randword ];

    for (int i = 0; i < 22; i++) {
        words[i] = 'x';
    }

    cout << "\t\t\t\t WELCOME TO HANGMAN!" << endl;
    cout << "\t\t\t\t *******************" << endl;
    cout << "\n";
    cout << "The word list is: " << endl;
    cout << "fat / bat / mat / sat / dad / lad / cat / mom / bun"
            "sun / fun / run / rat / tom / cop / mop / man / van"
            "hat / red / app / sap." << endl;
    cout << "Guess the right word " << endl;

    while ( draw <= 8){

        drawing( draw );
        cout << "\n\nguess the word:\n";
        cin >> ans;

        if ( ans == theword ){
            cout << "\n\nCongratulations!!!  You guessed my word. \n\n" << endl;
            break;
        }

        else {
            cout << "\n\nTry it out again\n\n";
            draw++;
        }

        randword = rand() % 22;
    }
    return 0;
}

void drawing (int draw){

    if ( draw == 1 ){
        cout << "\t _________\n\t|\t |\n\t|\t 0 \n\t|\t/|\\\t\t\n\t|\t |\n\t|\t/ \\ \n\t|__";
    } else if ( draw == 2 ){
        cout << "\t _________\n\t|\t |\n\t|\t 0 \n\t|\t/|\\\t\t\n\t|\t |\n\t|\t/ \\ \n\t|__";
    } else if ( draw == 3 ){
        cout << "\t _________\n\t|\t |\n\t|\t 0 \n\t|\t/|\\\t\t\n\t|\t |\n\t|\t/ \\ \n\t|__";
    } else if ( draw == 4 ){
        cout << "\t _________\n\t|\t |\n\t|\t 0 \n\t|\t/|\\\t\t\n\t|\t |\n\t|\t/ \\ \n\t|__";
    } else if ( draw == 5 ){
        cout << "\t _________\n\t|\t |\n\t|\t 0 \n\t|\t/|\\\t\t\n\t|\t |\n\t|\t/ \\ \n\t|__";
    } else if ( draw == 6 ){
        cout << "\t _________\n\t|\t |\n\t|\t 0 \n\t|\t/|\\\t\t\n\t|\t |\n\t|\t/ \\ \n\t|__";
    } else if ( draw == 7 ){
        cout << "\t _________\n\t|\t |\n\t|\t 0 \n\t|\t/|\\\t\t\n\t|\t |\n\t|\t/ \\ \n\t|__";
    } else if ( draw == 8 ){
        cout << "\t _________\n\t|\t |\n\t|\t 0 \n\t|\t/|\\\t\t\n\t|\t |\n\t|\t/ \\ \n\t|__";
    }

    cout << "\n\nShit!!!..... you are hanged!\n\n";
    cout << "\n OK... \nyou can try once for the peace of his sole!... XD\n";

}