#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main() {
    string correctAnswer;
    string userInput;
    correctAnswer == "paris";
    cout << "What is the capital city of France? " << endl;
    cin.get();
    if(correctAnswer == userInput){
        cout << "Correct!" << endl;
    } else{
        cout << "Incorrect!" << endl;
    }
    
    return 0;
}