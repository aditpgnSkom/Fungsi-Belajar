#include <iostream>
using namespace std;

long pangkat(long x, long y) {
  if(y <= 1)
    return x;
  else
    return x * pangkat(x,(y-1));
}

int main() {
  long a,b;
  
  cout << "Program Bilangan Berpangkat\n";
  cout << "Masukkan Angka Pertama : "; cin >> a;
  cout << "Masukkan Angka Kedua : "; cin >> b;
  cout << a << " Pangkat " << b << " = "<< pangkat(a,b);

  return 0;
}