#include <iostream>
using namespace std;

int main() {
    char name[] = {'S', 'U', 'B', 'R', 'A', 'T', 'O'};
    cout << "Original: " << name << endl;

    for (int i = 0, j = 6; i <= j; i++, j--) {
        char temp = name[i];
        name[i] = name[j];
        name[j] = temp;
    }

    cout << "Reversed: " << name << endl;

    return 0;
}
