#include <iostream>
#include "calculator.h"

int main(){
    int first_number = 10;
    int second_number = 20;
    int answer = add(first_number, second_number); 
    std::cout << "Results:"<< answer << std::endl;

    return 0;
}