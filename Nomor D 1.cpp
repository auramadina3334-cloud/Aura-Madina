#include <iostream>
using namespace std;
int main() {
	float gaji_karyawan = 50000;
	float jam_kerja;
	cin >> jam_kerja;
	float total = jam_kerja*gaji_karyawan;
	cout << "Gaji Karyawan : Rp" << total;
	return 0;
}
