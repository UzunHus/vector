#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main() {
	int toplam = 0;
	vector<string> names(2);//string saklayabilen vektör
	vector<double> grades(3, 2.1);//vektör elemanlarýnýn ilk deðeri 2.1
	vector<int> example;//tamsayýlar saklayabilen vektör//those were the days 11.11.21
	example.push_back(1);//1 sayýsýný vektörün sonuna ekle
	example.push_back(2);//2 sayýsýný vektörün sonuna ekle
	example.push_back(3);
	for (int i = 0;i < (int)example.size();i++) //vektörün kapasitesini aþmadan
		cout << example[i] << " ";
	cout << endl;
	while (!example.empty()) {
		toplam += example.back();//vektörün son elemanýný iþaret eder
		example.pop_back();//vektörün son elemanýný siler
	}
	cout << "Vektor Elemanlarinin Toplami = " << toplam << endl;
	example.push_back(61);
	example.clear();


















	return 0;
}