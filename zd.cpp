#include <iostream>
#include <cstdlib>
using namespace std;
int x;
int main() {
    srand(time(NULL));
    x = 1+rand()%(10-1+1);
    int y;
    short tries = 5;
    while (tries > 0, tries--) {
        cout << "input some random number" << endl;
        cin >> y;
        if (y==x) {
            cout<< "you won"<< endl;
            break;
        }
        else {
            cout << "try again"<< endl;
        }
        if (tries == 0) {
            cout<< "you lost";
        }
    }
}