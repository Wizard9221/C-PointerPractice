#include <iostream>
#include <stdlib.h>

int main()
{
    int a = 2;
    int b = 2; 
    int c = 4;
    
    int* pa = &a;
    int* pb = &b;
    int* pc = &c;

    std::cout << "The pointer pa holds " << pa << std::endl;
    std::cout << "The pointer pb holds " << pb << std::endl;
    std::cout << "The pointer pc holds " << pc << std::endl;

    std::cout << "a, b, and c are: " << a << ", " << b << ", " << c << std::endl;
}