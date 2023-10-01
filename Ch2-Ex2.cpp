#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main(){
    cout << "What is your name?" << endl;
    string studentName;
    cin >> studentName;
    cout << "What was your overall grade?" << endl;
    int mark;
    cin >> mark;
    if (mark =< 39){
        grade == 'F';
    }
    else if (mark =>40 and =<59){
        grade == 'E';
    }

    switch (mark) {
        case F:
        cout << "Name: " + studentName + "\n" + "Mark: " + std::to_string(mark) + "\n" + "Grade: F";
	            break;
	    case E:
        cout << "Name: " + studentName + "\n" + "Mark: " + std::to_string(mark) + "\n" + "Grade: E";
	            break;
        case D:
        cout << "Name: " + studentName + "\n" + "Mark: " + std::to_string(mark) + "\n" + "Grade: D";
	            break;
	    case C:
        cout << "Name: " + studentName + "\n" + "Mark: " + std::to_string(mark) + "\n" + "Grade: C";
	            break;
        case B:
        cout << "Name: " + studentName + "\n" + "Mark: " + std::to_string(mark) + "\n" + "Grade: B";
	            break;
	    case A:
        cout << "Name: " + studentName + "\n" + "Mark: " + std::to_string(mark) + "\n" + "Grade: A";
	            break;
        default:
            cout << "That input was not recognised" << endl;
    return 0;
    }
}