<<<<<<< HEAD
#include <iostream>
using namespace std;

int main(){
    int num, count = 0;

    cout << "Enter a number: ";
    cin >> num;
    while (num != 0) {
        num = num / 10;
        count++;
    }
cout << "Total digits = " << count;

    return 0;
=======
#include <iostream>
using namespace std;

int main(){
    int num, count = 0;

    cout << "Enter a number: ";
    cin >> num;
    while (num != 0) {
        num = num / 10;
        count++;
    }
cout << "Total digits = " << count;

    return 0;
>>>>>>> a82c2bdca22d66e67a0c2a7a43d07ddfbf53f419
}