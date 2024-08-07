#include <iostream>

int adding(int a,int b,int c){
    return (a+b+c);
}
int main()
{
    int a,b,c;
    std::cout << "Enter 1st number: ";
    std::cin >> a;
    std::cout << "Enter 2nd number: ";
    std::cin >> b;
    std::cout << "Enter 3rd number: ";
    std::cin >> c;
    
    std::cout <<"Sum of Numbers are: "<< adding(a,b,c);
    return 0;
}
