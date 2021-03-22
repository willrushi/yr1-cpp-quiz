#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    char input[100];
    
    cout << "Enter your input:" << endl;
    fgets(input, 200, stdin);

    cout << "Your input was:" << endl;
    cout << input << endl;

    return 0;
}