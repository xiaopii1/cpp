#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    string name = "";
    string id = "";
    int total = 0;
    
    cout << "input name: ";
    cin >> name;
    cout << "input id: ";
    cin >> id;
    cout << "please input a number n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        total += i;
    }
    cout << "for loop : The sum of 1 to " << n << " is " << total << endl;

    int i = 1;
    total = 0;
    while (i <= n) {
        total += i;
        i++;
    }
    cout << "while loop : The sum of 1 to " << n << " is " << total << endl;

    i = 1;
    total = 0; 
    do {
        total += i;
        i++;
    } while (i <= n);

    return 0;
}