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

    cout << "Pinging address " << input << "..." << endl;
    system("ping -c 4 " + input);

    return 0;
}
```
### Q1 - What is the vulnerability here?
1. Buffer Overflow
2. Command Injection
3. Distributed Denial of Service
4. Format String Vulnerability

### Q2 - What is the cause of this vulnerability?
1. Insecure function usage
2. Lack of bounds checking
3. Unsanitized user input
4. Outdated software

### Q3 - How would you abuse this vulnerability?
1. Enter in a long string
2. Cause an infinite loop
3. Enter a negative number
4. Use special characters like `;` and `&&`


# Section 2
```cpp
int main(){
    char input[100];
    
    cout << "Enter your input:" << endl;
    fgets(input, 200, stdin);

    cout << "Your input was:" << endl;
    cout << input << endl;

    return 0;
}
```
### Q1 - What is the vulnerability here?
1. Buffer Overflow
2. Command Injection
3. Distributed Denial of Service
4. Format String Vulnerability

### Q2 - What is the cause of this vulnerability?
1. Insecure function usage
2. Lack of bounds checking
3. Unsanitized user input
4. Outdated software

### Q3 - How would you abuse this vulnerability?
1. Enter in a long string
2. Cause an infinite loop
3. Enter a negative number
4. Use special characters like `;` and `&&`



# Section 3
```cpp
int main(){
    char input[200];
    char backup[100];

    cout << "Enter your input:" << endl;
    fgets(input, 200, stdin);

    cout << "Your input was:" << endl;
    cout << input << endl;

    cout << "Saving input to backup." << endl;
    strcpy(backup, input);

    return 0;
}
```
### Q1 - What is the vulnerability here?
1. Buffer Overflow
2. Command Injection
3. Distributed Denial of Service
4. Format String Vulnerability

### Q2 - What is the cause of this vulnerability?
1. Insecure function usage
2. Lack of bounds checking
3. Unsanitized user input
4. Outdated software

### Q3 - What mechanism causes this vulnerability to occur?
1. Using up all program memory
2. Overwriting of important program data
3. Abuse of elevated privileges
4. Dereferencing of a null pointer



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
### Q1 - What is the vulnerability here?
1. Buffer Overflow
2. Command Injection
3. Distributed Denial of Service
4. Format String Vulnerability

### Q2 - What is the cause of this vulnerability?
1. Function used insecurely
2. Lack of bounds checking
3. Unsanitized user input
4. Outdated software

### Q3 - What can do you do with this vulnerability?
1. Read literal data from memory
2. Read strings from memory
3. Write to memory addresses
4. All of the above