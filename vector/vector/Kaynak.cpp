#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main() {
	int toplam = 0;
	vector<string> names(2);//string saklayabilen vekt�r
	vector<double> grades(3, 2.1);//vekt�r elemanlar�n�n ilk de�eri 2.1
	vector<int> example;//tamsay�lar saklayabilen vekt�r//those were the days 11.11.21
	example.push_back(1);//1 say�s�n� vekt�r�n sonuna ekle
	example.push_back(2);//2 say�s�n� vekt�r�n sonuna ekle
	example.push_back(3);
	for (int i = 0;i < (int)example.size();i++) //vekt�r�n kapasitesini a�madan
		cout << example[i] << " ";
	cout << endl;
	while (!example.empty()) {
		toplam += example.back();//vekt�r�n son eleman�n� i�aret eder
		example.pop_back();//vekt�r�n son eleman�n� siler
	}
	cout << "Vektor Elemanlarinin Toplami = " << toplam << endl;
	example.push_back(61);
	example.clear();


















	return 0;
}