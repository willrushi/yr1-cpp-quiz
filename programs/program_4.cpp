#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    char input[100];

    fgets(input, 100, stdin);

    printf("Your input was:");
    printf(input);
    
    return 0;
}