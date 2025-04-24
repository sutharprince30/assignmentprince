#include <iostream>
using namespace std;


int globalVar = 100;

void showLocalGlobal() {
    // Local variable with the same name as the global variable
    int globalVar = 50;
    
    // Prints local variable
    cout << "Inside showLocalGlobal, local globalVar = " << globalVar << endl;
    
    // Prints global variable using the scope resolution operator
    cout << "Inside showLocalGlobal, global globalVar = " << ::globalVar << endl;
}

void modifyGlobal() {
    // Prints current global variable
    cout << "Inside modifyGlobal, globalVar = " << globalVar << endl;
    
    // Modifies the global variable
    globalVar = 200;
    cout << "Inside modifyGlobal, modified globalVar = " << globalVar << endl;
}

int main() {
    // Access global variable in main
    cout << "Inside main, globalVar = " << globalVar << endl;

    showLocalGlobal();
    
    modifyGlobal();
    
    cout << "Inside main, modified globalVar = " << globalVar << endl;
    
    return 0;
}
