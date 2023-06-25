#include <iostream>
using namespace std;

int main()
{
  // Deklarasi variabel
  double kecepatan, jarak, waktu, biaya_bahan_bakar;
  int liter;
  // Input nilai kecepatan dan jarak
  cout << "Masukkan kecepatan (km/jam): ";
  cin >> kecepatan;

  cout << "Masukkan jarak (km): ";
  cin >> jarak;

  // Hitung waktu dan biaya bahan bakar
  waktu = jarak / kecepatan;
  biaya_bahan_bakar = jarak / 20 * 6800;
  liter = jarak / 20;

  // Tampilkan hasil perhitungan
  cout << "Waktu perjalanan: " << waktu << " Jam" << endl;
  cout << "Bahan bakar: " << liter << " Liter" << endl;
  cout << "Biaya bahan bakar: Rp" << biaya_bahan_bakar << endl;

  return 0;
}
