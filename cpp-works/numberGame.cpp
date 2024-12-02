#include <bits/stdc++.h>
using namespace std;

void guessgame(int randomNum, int chances){
    int i=0;
    int guess;
    while(i<chances){
        cout<<"Enter your guess:";
        cin>>guess;
        i++;
        if (guess==randomNum){
            cout<<"Congratulations! You guessed the correct number in "<<i+1<<" attempts"<<endl;
            break;
        
        }
        else {
            if (guess>randomNum){
                cout<<"Incorrect! The number is less than "<<guess<<"."<<endl;
            }
            if (guess<randomNum){
                cout<<"Incorrect! The number is greater than "<<guess<<"."<<endl;
            }
        }
    }
    cout<<"The number was: "<<randomNum<<"."<<endl;
    cout<<"Try once again!"<<endl;

    

}

int main(){
    srand(time(0));
    int number = rand() % 101;
    cout<<"Welcome to the Number Guessing Game!"<<endl<<"I'm thinking of a number between 1 and 100."<<endl<<"Please select the difficulty level:"<<endl<<"1. Easy (10 chances)"<<endl<<"2. Medium (5 chances)"<<endl<<"3. Hard (3 chances)"<<endl<<"(Enter 1,2 or 3)"<<endl;
    int level;
    cin>>level;
    switch (level){
        case 1:
        guessgame(number,10);
        break;
        case 2:
        guessgame(number,5);
        break;
        case 3:
        guessgame(number,3);
        break;

    }
}
