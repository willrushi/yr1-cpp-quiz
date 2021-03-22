#include <iostream>
#include <stdlib.h>
#include <cstring>
using namespace std;

int main(){
    char input[100];
    char command[100];

    cout << "Please enter an address to ping." << endl;
    fgets(input, 100, stdin);
    cout << "Pinging address " << input << "..." << endl;

    strcpy(command, "ping -c 4 ");
    strcat(command, input);

    system(command);

    return 0;
}