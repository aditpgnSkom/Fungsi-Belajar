#include <iostream>
using namespace std;

double re = 4, cel = 5, far = 9;

double celcKonvert(double c) {
  double r = (re / cel) * c;
  double f = ((far / cel) * c) + 32;
  cout << c <<" Celcius : " << r <<" Reamur\n";
  cout << c <<" Celcius : " << f <<" Farenheit\n";

  return c;
}

double reamKonvert(double r) {
  double c = (cel / re) * r;
  double f = ((far / re) * r) + 32;
  cout << r <<" Reamur = " << c <<" Celcius\n";
  cout << r <<" Reamur = " << f <<" Farenheit\n";

  return r;
}

double farenKonvert(double f) {
  double c = (cel / far) * (f - 32);
  double r = (re / far) * (f - 32);
  cout << f <<" Farenheit = " << c <<" Celcius\n";
  cout << f <<" Farenheit = " << r <<" Reamur\n";

  return f;
}

void sret() {
  for (int i = 0; i <= 27; i++)
    cout<<"-";
  cout<<endl;
}

int main() {
  int pil;
  double celc,ream,faren;

  do {

    sret();
    cout << "Program Konverter Suhu\n";
    sret();
    cout << "1. Celcius\n";
    cout << "2. Reamur\n";
    cout << "3. Farenheit\n";
    cout << "0. Keluar\n";
    sret();
    cout << "Masukkan Pilihan Anda : "; cin >> pil;

    switch(pil) {
      case 1 :
        cout << "Masukkan Suhu Celcius : "; cin >> celc;
        celcKonvert(celc);
        break;
      case 2:
        cout << "Masukkan Suhu Reamur : "; cin >> ream;
        reamKonvert(ream);
        break;
      case 3:
        cout << "Masukkan Suhu Farenheit : "; cin >> faren;
        farenKonvert(faren);
        break;
    }
  }while(pil != 0);

  return 0;
}