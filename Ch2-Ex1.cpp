#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main() {
    string correctAnswer;
    string userInput;
    correctAnswer = "paris";
    cout << "What is the capital city of France? " << endl;
    getline(cin, userInput);
    if(userInput == correctAnswer){
        cout << "Correct!" << endl;
    } else{
        cout << "Incorrect!" << endl;
    }
    
    return 0;
}