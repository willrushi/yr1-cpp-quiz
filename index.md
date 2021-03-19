## Introduction

Welcome to the **IY1S461 C++ common vulnerability quiz**! This is a small game that will test your knowledge on common C++ vulnerabilities, and hopefully teach you a few that you wouldn't have thought about before.

Each section will contain a code snippet of a small C++ program with one or more vulnerabilities. Your task is to look at this code and figure out where the security gaps may lie - this can be done either through reading the code, or by compiling it yourself and trying it out as an executable. 

Once you think you've found all there is to find, there will be a few questions on each snippet that will test your knowledge on what you've found. You'll get a total of **5 minutes** for each section, after which you'll get the opportunity to enter your answers on the interactive quiz.

Don't worry if you're not sure on the answers - after each question is answered, we'll go through them as a group and explain the answers. The aim isn't to get everything right first try - it's to look at what you may have missed, and **remember it for the future**.

Without further adeiu, let's jump in to the first section!


# Section 1
```cpp
int main(){
    char* input;

    cout << "Please enter an address to ping." << endl;
    cin >> input;
    system("ping -c 4 " + input);

    return 0;
}
```




# Section 2
```cpp
int main(){
    char input[100];
    
    fgets(input, 200, stdin);

    cout << input << endl;

    return 0;
}
```




# Section 3
```cpp
int main(){
    char input[200];
    char backup[100];

    cout << "Enter your input:" << endl;
    fgets(input, 200, stdin);

    cout << "Saving input to backup." << endl;
    strcpy(backup, input);

    return 0;
}
```



# Section 4
```cpp
int main(){
    char* input;

    cin >> input;

    printf("Your input was:");
    printf(input);
    
    return 0;
}
```
