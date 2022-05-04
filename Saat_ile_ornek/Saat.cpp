#include <iostream>
#include "Zaman1.h"

using namespace std;

Zaman::Zaman () {saat = dakika = saniye = 0; }

void Zaman::zamanAyarla (int s, int d, int sn) {
    saat   = (s >= 0 && s < 24) ? s : 0;
    dakika = (d >= 0 && d < 60) ? d : 0;
    saniye = (sn >= 0 && sn < 60) ? s : 0;
}

void Zaman::askeriYaz () {
    cout << (saat < 10 ? "0" : " " )<< saat << ":"
         << (dakika < 10 ? "0" : " " )<< dakika;
}

void Zaman::standartYaz () {
    cout << ((saat == 0 || saat == 12) ? 12 : saat % 12)
         << ":" << (dakika < 10 ? "0" : "") << dakika
         << ":" << (saniye < 10 ? "0" : "") << saniye
         << (saat < 12 ? " AM" : " PM");
}

int main() {
    Zaman z;
    cout << "Zaman`in ilk askeri degeri: ";
    z.askeriYaz();
    cout << "\nZaman`in ilk standart degeri: ";
    z.standartYaz();

    z.zamanAyarla(13, 27, 6);
    cout << "\n \nGecersiz degerler vermeye calistiktan sonra: "
         << "\nAskeri Zaman: ";
    z.askeriYaz();
    cout << "\nStandart Zaman: ";
    z.standartYaz();
    cout << endl;
    return 0;
}
