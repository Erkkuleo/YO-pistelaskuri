/*
-------------------------------------------------------------------------
Creation && property of Erkka Kiukkonen
-------------------------------------------------------------------------
*/

#include<iostream>
#include<cmath>
using namespace std;
long double x;
long double y;
long double z;
int o = 1;

void alku() {
    cout << "saamasi pisteet: \n";
    cin >> x;
    cout << "maksimi pisteet tehtävästä: \n";
    cin >> y;
}
void lasku(){
    z = (120 / y) * x;
}
void ulostus() {

    if(90<=z){
        cout << "L - laudatur";
    }
    else if(89>=z && z>75) {
        cout << "E - eximia cum laude approbatur";
    }
    else if(75>=z && z>65) {
        cout << "M - magna cum laude approbatur";
    }
    else if(64>=z && z>50) {
        cout << "C - cum laude approbatur";
    }
    else if (49>=z && z>37) {
        cout << "B - lubenter approbatur";
    }
    else if (36>=z && z>26) {
        cout << "A - approbatur";
    }
    else {
        cout << "I - improbatur";
    }
}

void overWrite() {
    x = 1;
    y = 1;
    z = 1;
}

int main() {
      hemmo:
        alku();
    while (true) {
        if (y == 0) {
            cout << "ERROR - Devider can't be zero || a letter \n";
            y = 1;
            goto hemmo;
        } 
        else {
            alku();
            lasku();
            cout << "pisteesi:\n";
            cout << z;
            cout << "\n";   
            ulostus();
            cout << "\n";
        }
        
    } 
}