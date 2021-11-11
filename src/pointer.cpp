#include<iostream>

int main(){
    void* ptr0 = 0; /*giving a pointer a non-valid memory address*/
    
    int var = 1;
    void* ptr1 = &var;

    std:: cout << ptr1 << std::endl;
    
    std::cin.get();
    
}
