#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout << "Enter three numbers: ";
    cin >> a >> b>> c;
    
    if (a>b && a>c){
        cout << a ;
        cout<< " is bigger"<< std::endl;
    }
    else if (b>a && b>c){
        cout << b;
        cout<< " is bigger"<< std::endl;
    }
    else{
        cout<<c;
        cout<< " is bigger"<< std::endl;
    }

    return 0;
}
