#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    cout << "Ratespiel" << endl;
    char test;
     while(1) {
int eingabe=0;
// zufallgenerator in C++ 1 bis 100
srand(std::time(0));
 int zufallszahl = rand() % 100 + 1;
 for (int i = 0;i<10;i++) {
 cout << "Geben Sie eine Zahl ein ?  ";
 cin >> eingabe;
 if (eingabe == zufallszahl) {
cout << endl << "Herzlichen Glückwunsch, Sie haben gewonnen!";
break;
 }
 if (eingabe < zufallszahl) {
    cout << endl << "zu klein" << endl;
 } else {
     cout << endl << "zu groß" << endl;
 }

 }

cout << endl << "Wollen Sie nicht weiterspielen? Geben Sie 'n' ein. "; 
if (eingabe != zufallszahl) {
    cout << "Sie haben das Spiel verloren";
}
char menue;
 cin >> menue;
     if (menue=='n') {
        break;
     } else {
     }
     }
    return 0;
}