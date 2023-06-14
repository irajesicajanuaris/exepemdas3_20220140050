#include <iostream>
#include <vector>
using namespace std;

class penerbit;
class pengarang {
public:
	string nama;
	vector<penerbit*> nama_penerbit;
	pengarang(string pNama) :nama(pNama) {
		cout << "pengarang \"" << nama << "\" \n";
	}
	~pengarang() {
		cout << "pengarang \"" << nama << "\" \n";
	}
	void tambahPengarang(pengarang*);
	void cetakPengarang();

};

class penerbit {
public:
	string nama;
	vector<pengarang*> daftar_pengarang;

	penerbit(string pNama) :nama(pNama) {
		cout << "Penerbit \"" << nama << "\" \n";
	}
	~penerbit() {
		cout << "Penerbit \"" << nama << "\" \n";
	}

	void tambahPengarang(pengarang*);
	void cetakPengarang();
	void tambahPenerbit(penerbit*);
	void cetakPenerbit();
};

void pengarang::tambahPenerbit(penerbit* pPenerbit) {
	daftar_penerbit.push_back(pPenerbit); 
}
void pengarang::cetakPenerbit() {
	cout << "Daftar Pengarang pada Penerbit Gama press \"" << this->nama << "\":\n";
	for (auto& a : daftar_penerbit) {
		cout << a->nama << "\n";
	}
	cout << endl;
}
void penerbit::tambahPengarang(pengarang* pPengarang) {
	daftar_pengarang.push_back(pPengarang);
	pPengarang->tambahpenerbit(this);
}
void penerbit::cetakPengarang() {
	cout << "Daftar pengarang pada penerbit intan pariwara \"" << this->nama << "\":\n";
	for (auto& a : daftar_pengarang) {
		cout << a->nama << "\n";
	}
	cout << endl;
}

int main() {
	penerbit* varPenerbit1 = new penerbit("gama pres");
	penerbit* varPenerbit2 = new penerbit("intan pariwara");
	pengarang* varPengarang1 = new pengarang("Joko");
	pengarang* varPengarang2 = new pengarang("Lia");
	pengarang* varPengarang3 = new pengarang("Giga");

	varPenerbit1->tambahPengarang(varPengarang1);
	varPenerbit1->tambahPengarang(varPengarang2);
	varPenerbit2->tambahPengarang(varPengarang1);
	varPenerbit2->tambahPengarang(varPengarang2);

	varPenerbit1->cetakPengarang();
	varPenerbit2->cetakPengarang();
	varPengarang1->cetakPenerbit();
	varPengarang2->cetakPenerbit();

	delete varPengarang1;
	delete varPengarang2;
	delete varPenerbit1;
	delete varPenerbit2;

	return 0;
}