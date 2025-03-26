#include <iostream>
using namespace std;
int main (){ 
    string question, response; 
    question = "How are you doing?";
    cout << question << endl;
    cin >> response; 
    if (response == "1"){
        cout <<"Well done, keep moving forward";
    }
    else {
        for (int i = 0; i<23; i++){
            cout << "You're gonna be okay Dhruv " << endl;

        }
    }
    return 0;
}