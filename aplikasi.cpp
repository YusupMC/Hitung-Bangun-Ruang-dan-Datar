/*Nama			: Yusup Mad Cani*/
/*NPM			: 1910631250054*/
/*Prodi			: S1 Sistem Informasi*/
/*Universitas	: Universitas Singaperbangsa Karawang*/

#include <iostream>

using namespace std;

int main() {
  int pilihan;
  float Lsegitiga, Ksegitiga, Lpersegi, Kpersegi, Lpersegipanjang, Kpersegipanjang, Llingkaran, Klingkaran, Vkubus, LPkubus, Vbalok, LPbalok, Vbola, LPbola, Vlimassegiempat, LPlimassegiempat, Vtabung, LPtabung;
  float a, t, s, p, l, r, phi, sAB, sBC, sCA;
  char ulang;
  do {
    cout << "Menu Utama" << endl;
    cout << "1. Menghitung Luas & Keliling Segitiga" << endl;
    cout << "2. Menghitung Luas & Keliling Bujursangkar" << endl;
    cout << "3. Menghitung Luas & Keliling Persegipanjang" << endl;
    cout << "4. Menghitung Luas & Keliling Lingkaran" << endl;
    cout << "5. Menghitung Volume & Luas Permukaan Kubus" << endl;
    cout << "6. Menghitung Volume & Luas Permukaan Balok" << endl;
    cout << "7. Menghitung Volum & Luas Permukaan Bola" << endl;
    cout << "8. Menghitung Volum & Luas Permukaan Limas Segi Empat "<<endl;
    cout << "9. Menghitung Volum & Luas Permukaan Tabung" << endl;
    cout << "10. Exit" << endl;
    cout << endl << endl;
    cout << "Pilihan anda : ";
    cin >> pilihan;
    switch (pilihan) {
    case 1:
      cout << "Menghitung Luas Segitiga" << endl;
      cout << "Menghitung Keliling Segitiga" << endl;
      cout << "Masukkan alas segitiga : ";
      cin >> a;
      cout << "Masukkan tinggi segitiga : ";
      cin >> t;
      cout << "Masukkan sisi AB segitiga : ";
      cin >> sAB;
      cout << "Masukkan sisi BC segitiga : ";
      cin >> sBC;
      cout << "Masukkan sisi CA segitiga : ";
      cin >> sCA;
      Lsegitiga = 0.5 * a * t;
      Ksegitiga = sAB + sBC + sCA;
      cout << "Luas segitiga adalah : " << Lsegitiga << endl;
      cout << "Keliling segitiga adalah : " << Ksegitiga << endl;
      break;
    case 2:
      cout << "Menghitung Luas Bujursangkar" << endl;
      cout << "Menghitung Keliling Bujursangkar" << endl;
      cout << "Masukkan sisi persegi : ";
      cin >> s;
      Lpersegi = s * s;
      Kpersegi = 4 * s;
      cout << "Luas bujursangkar : " << Lpersegi << endl;
      cout << "Keliling bujursangkar : " << Kpersegi << endl;
      break;
    case 3:
      cout << "Menghitung Luas Persegipanjang" << endl;
      cout << "Menghitung Keliling Persegipanjang" << endl;
      cout << "Masukkan panjang : ";
      cin >> p;
      cout << "Masukkan lebar : ";
      cin >> l;
      Lpersegipanjang = p * l;
      Kpersegipanjang = (p + l) * 2;
      cout << "Luas Persegipnjng: " << Lpersegipanjang << endl;
      cout << "Keliling Persegipnjng: " << Kpersegipanjang << endl;
      break;
    case 4:
      cout << "Menghitung Luas Lingkaran" << endl;
      cout << "Menghitung Keliling Lingkaran" << endl;
      cout << "Masukkan jari-jari lingkaran : ";
      cin >> r;
      phi = 3.14;
      Llingkaran = phi * r * r;
      Klingkaran = phi * (r + r);
      cout << "Luas lingkaran adalah : " << Llingkaran << endl;
      cout << "Keliling lingkaran adalah : " << Klingkaran << endl;
      break;
    case 5:
      cout << "Menghitung Volum Kubus" << endl;
      cout << "Menghitung Luas Permukaan Kubus" << endl;
      cout << "Masukkan sisi kubus : ";
      cin >> s;
      Vkubus = s * s * s;
      LPkubus = 6 * s;
      cout << "Volum kubus adalah : " << Vkubus << endl;
      cout << "Luas permukaan kubus adalah : " << LPkubus << endl;
      break;
    case 6:
      cout << "Menghitung Volum Balok" << endl;
      cout << "Menghitung Luas Permukaan Balok" << endl;
      cout << "Masukkan panjang balok : ";
      cin >> p;
      cout << "Masukkan lebar balok : ";
      cin >> l;
      cout << "Masukkan tinggi balok : ";
      cin >> t;
      Vbalok = p * l * t;
      LPbalok = (2 * p * l) + (2 * p * t) + (2 * l * t);
      cout << "Volum balok adalah : " << Vbalok << endl;
      cout << "Luas permukaan balok adalah : " << LPbalok << endl;
      break;
    case 7:
      cout << "Menghitung Volum Bola" << endl;
      cout << "Menghitung Luas Permukaan Bola" << endl;
      cout << "Masukkan jari jari bola : ";
      cin >> r;
      cout << "Masukkan tinggi bola : ";
      cin >> t;
      phi = 3.14;
      Vbola = 4 / 3 * phi * r * t * t * t;
      LPbola = 4 * phi * r * r;
      cout << "Volum bola adalah : " << Vbola << endl;
      cout << "Luas permukaan bola adalah : " << LPbola << endl;
      break;
    case 8:
      cout << "Menghitung Volum Limas Segi Empat" << endl;
      cout << "Menghitung Luas Permukaan Limas Segi Empat" << endl;
      cout << "Masukkan panjang limas segi empat : ";
      cin >> p;
      cout << "Masukkan lebar limas segi empat : ";
      cin >> l;
      cout << "Masukkan tinggi limas segi empat : ";
      cin >> t;
      Vlimassegiempat = (p * l * t) * 1 / 3;
      LPlimassegiempat = ((p + l) * t) + (p * l);
      cout << "Volum limas segi empat adalah : " << Vlimassegiempat << endl;
      cout << "Luas permukaan limas segi empat adalah :"<<LPlimassegiempat<<endl;
      break;
    case 9:
      cout << "Menghitung Volum Tabung" << endl;
      cout << "Menghitung Luas Permukaan Tabung" << endl;
      cout << "Masukkan jari jari tabung : ";
      cin >> r;
      cout << "Masukkan tinggi tabung : ";
      cin >> t;
      phi = 3.14;
      Vtabung = phi * r * r * t;
      LPtabung = (2 * phi * r) * (r * t);
      cout << "Volum tabung adalah : " << Vtabung << endl;
      cout << "Luas permukaan tabung adalah : " << LPtabung << endl;
      break;
    case 10:
      cout << "Exit?" << endl;
      break;
    default:
      cout << "Menu tidak tersedia?" << endl;
      break;
    }
    cout << "Kembali ke Menu Utama (y/n)?";
    cin >> ulang;
  } while (ulang == 'y');
  return 0;
}