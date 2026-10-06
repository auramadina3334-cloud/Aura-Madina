#include <iostream>
using namespace std;
int main () {
	float suhu_fahrenheit;
	cin >> suhu_fahrenheit;
	float rumus = (suhu_fahrenheit - 32) * 5/9;
	cout << "Total suhu: " << rumus;
return 0;
}
