#include <iostream>

int squaring(int a){
    return (a*a);
}
int main()
{
    int a;
    std::cout << "Enter the number: ";
    std::cin >> a;
    
    std::cout <<"Square of Number is: "<< squaring(a);
    return 0;
}
