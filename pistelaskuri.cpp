#include<iostream>
#include<cmath>
using namespace std;
long double x;
long double y;
long double z;
int s;
int L = 90;
int E = 76;
int M = 65;
int c = 50;
int B = 37;
int A = 26;
int pi = 24;
//int i = 20;
//int mi = 15; 
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
    else if (25>=z && z>24) {
        cout << "I - improbatur";
    }
}
int main() {
    alku();
    lasku();
    cout << "pisteesi:\n";
    cout << z;
    cout << "\n";   
    ulostus();
}