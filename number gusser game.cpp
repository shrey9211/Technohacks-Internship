#include <iostream>
#include <ctime>
using namespace std;
int main(){
    int x = time(0);
    int n;
    int guess;
    int chances = 3;
    srand(x);
    cout << "Welcome to the number guesser game !" << endl;
    cout << "Please determine the range of this game by selecting an upper limit" << endl;
    cin >>n;
    cout << "You have selected - " << n << "as the limit" << endl;
    int no = (rand()%n);
    cout << no << endl;
    cout << "Number has been choosen you can start guessing you have only 3 chances be wise !" << endl;
    while(chances!=0){
        cout << "enter your guess" << endl;
        cin >> guess;
        if(guess == no){
            cout << "You Won !!" << endl;
        }
        else if(guess < no){
            cout << "Bigger than this" << endl;
            chances--;
            cout << "You have only " << chances << endl;
        }
        else if(guess > no){
            cout << "Smaller than this" << endl;
            chances--;
            cout << "You have only " << chances << endl;
            
        }
    }


   
    
}