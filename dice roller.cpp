#include <iostream>
#include <ctime>
using namespace std;
void roll(){
    int x = time(0);
    srand(x);
    int num = (rand()%6 + 1);
    cout << "The Dice shows : " << num << endl;
}
void ask(){
    char yn;
    cout << "Do you want to roll(y/n) ?" << endl;
    cin >> yn;
    if(yn == 'y'){
        roll();
        ask();
    }
    else{
        return;
    }

}

int main(){
    ask();
}