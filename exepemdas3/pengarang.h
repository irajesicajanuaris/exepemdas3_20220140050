#ifndef PENGARANG_H
#define PENGARANG_H

class pengarang {
public: 
	string nama;
	pengarang(string pNama) :nama(pNama) {
		cout << "Pengarang \"" << nama << "\" \n";
	}
	~pengarang() {
		cout << "Pengarang \"" << nama << "\" \n";
	}
};
#endif
