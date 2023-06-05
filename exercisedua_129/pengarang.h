#pragma once
#ifndef PENGARANG_H
#define PENGARANG_H
#include <iostream>
#include <vector>
using namespace std;

class pengarang {
public:
	string nama;
	vector<buku*> daftar_buku;

	buku(string pNama) : nama(pNama) {
	
	void tambahbuku(buku*);
	void cetakbuku();
};
void pengarang::tambahbuku(buku* pbuku) {
	daftar_buku.push_back(pbuku);
}
void pengarang::cetakbuku() {
	cout << "Daftar buku dari pengarang \"" << this->nama << "\":\n";
	for (auto& a : daftar_buku) {
		cout << a->nama << "\n";

	}
	cout << endl;


}
#endif // !PENGARANG_H

