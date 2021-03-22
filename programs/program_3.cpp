#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(){
    char input[200];
    char backup[10];

    cout << "Enter your input:" << endl;
    fgets(input, 200, stdin);

    cout << "Your input was:" << endl;
    cout << input << endl;

    cout << "Saving input to backup." << endl;
    strcpy(backup, input);

    cout << backup;

    return 0;
}