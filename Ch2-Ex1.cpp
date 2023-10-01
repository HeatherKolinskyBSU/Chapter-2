#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main() {                                                 // Denotes start of main function.
    string correctAnswer;
    string userInput;
    correctAnswer = "paris";
    cout << "What is the capital city of France? " << endl;
    getline(cin, userInput);                                 // Stops execution until input detected.
    if(userInput == correctAnswer){                          // Checks if user was correct.
        cout << "Correct!" << endl;
    } else{
        cout << "Incorrect!" << endl;
    }
    
    return 0;                                                // Return statement.
}                                                            // Ends main function.