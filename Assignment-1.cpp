#include <iostream>
using namespace std;
int main()
{
    char a;
    std::cout << "Enter a Character: ";
    cin >> a;
    char ch = tolower(a);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        cout << ch << " is a vowel." << endl;
    } else if ((ch >= 'a' && ch <= 'z')) {
        cout << ch << " is a consonant." << endl;
    } else {
        cout << ch << " is not an alphabet character." << endl;
    }
    return 0;
}
