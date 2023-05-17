#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
public:
	static int nim;
	int id;
	string nama;

	void setID();
	void printAll();

	static void setNim(int pNim) { nim = pNim; /*Definisi Function*/}
	static int getNim() { return nim; /*Definisi Function*/}

	mahasiswa(string pnama) :nama(pnama) { setID();  } 
};

int mahasiswa::nim = 0;

void mahasiswa::setID() {
	id = ++nim;
}

void mahasiswa::printAll() {
	cout << "ID = " << id << endl;
	cout << "Nama = " << nama << endl;
	cout << endl;
}

int main() {
	mahasiswa mhs1("Lia Kurnia");
	mahasiswa mhs2("Asroni");
	mhs2.nim = 10;
	mahasiswa mhs3("Andi Kurniawan");
	mhs3.nim = 20;
	mahasiswa mhs4("Joko Purbo");
	mahasiswa::setNim(9); //mengakses nim melalui static member function "setNim"

	mhs1.printAll();
	mhs2.printAll();
	mhs3.printAll();
	mhs4.printAll();

	cout << "akses dari luar object = " << mahasiswa::getNim() << endl; // mengakses nim melalui static member function "getNim"

	return 0;
}