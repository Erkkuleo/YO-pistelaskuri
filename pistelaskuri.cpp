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
int o = y;

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
    else if (25>=z) {
        cout << "I - improbatur";
    }
    else {

    }
}

void overWrite() {
    x = 0;
    y = 0;
    z = 0;
}

int main() {
    while (true) {
        alku();
        if (y == 0) {
            cout << "ERROR - Devider can't be zero || a letter \n";
            break;
        } 
        else {
            lasku();
            cout << "pisteesi:\n";
            cout << z;
            cout << "\n";   
            ulostus();
            cout << "\n";
            overWrite();
        } 
    } 
}