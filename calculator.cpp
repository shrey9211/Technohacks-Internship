#include <iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cout << "Enter the first number of operation : " ;
    cin >> a;
    cout << "Enter the second number of operation : " ;
    cin >> b;
    cout << "Enter the type of operation (* / + -) : " ;
    cin >> op;
    switch(op){
        case '+' :
        cout << "Addition of " << a << "and " << b << "is : " << a+b << endl;
        break;
        case '-' :
        cout << "Subtraction of " << a << "and " << b << "is : " << a-b << endl;
        break;
        case '*' :
        cout << "Multiplication of " << a << "and " << b << "is : " << a*b << endl;
        break;
        case '/' :
        cout << "Division of " << a << "and " << b << "is : " << a/b << endl;
        break;

    }
}