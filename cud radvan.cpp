#include <iostream>
#include <cmath>   
#include <clocale> 

using namespace std;

int main(){
    double a, b, c, delta, x1, x2;
    setlocale(LC_ALL, "Turkish");
    cout << "ax^2 + bx + c denklemi için a deðerini giriniz: ";
    cin >> a;
    cout << "ax^2 + bx + c denklemi için b deðerini giriniz: ";
    cin >> b;
    cout << "ax^2 + bx + c denklemi için c deðerini giriniz: ";
    cin >> c;

    delta = (b * b) - (4 * a * c);
    cout << "Delta deðeri: " << delta << endl;
    if (delta < 0){
        cout << "reel kök yoktur." << endl;
    }
    else if (delta == 0){
        cout << "Çift katlý kök vardýr." << endl;
        x1 = -b / (2 * a);
        cout << "Kök:" << x1 << endl;
    }
    else {
        cout << "Ýki farklý reel kök vardýr." << endl;
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "1. Kök (x1): " << x1 << endl;
        cout << "2. Kök (x2): " << x2 << endl;
    }
}
