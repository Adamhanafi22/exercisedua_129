#include <iostream>
#include <vector>
using namespace std;

class pengarang;
class penerbit {
public:
	string nama;
	vector<pengarang*> daftar_pengarang;
	penerbit(string pNama) : nama(pNama) {
		cout << " penerbit " << nama << "\" ada\n";

	}
	void tambahpengarang(pengarang*);
	void cetakpengarang();	
};
class pengarang {
public:
	string nama;
	vector<penerbit*> daftar_penerbit;

	pengarang(string pNama) : nama(pNama) {
		cout << "pengarang\"" << nama << "\" ada\n";
	}
	void tambahpenerbit(penerbit*);
	void cetakpenerbit();
};
void penerbit::tambahpengarang(pengarang* pPengarang) {
	daftar_pengarang.push_back(pPengarang);
}
void penerbit::cetakpengarang() {
	cout <<"daftar pengarang pada penerbit\"" << this->nama << "\":\n";
	for (auto& a : daftar_pengarang) {
		cout << a->nama <<"\n";
	}
	cout << endl;
}
void pengarang::tambahpenerbit(penerbit* pPenerbit) {
	daftar_penerbit.push_back(pPenerbit);
	pPenerbit->tambahpengarang(this);
}
void pengarang::cetakpenerbit() { 
	cout << "daftar penerbit yang diikuti\"" << this->nama << "\":\n";
	for (auto& a : daftar_penerbit) {
		cout << a->nama << "\n";
	}
	cout << endl;
}
int main() {
	pengarang* varpengarang1 = new pengarang("joko");
	pengarang* varpengarang2 = new pengarang("lia");
	pengarang* varpengarang3 = new pengarang("giga");
	pengarang* varpengarang4 = new pengarang("Asroni");
	penerbit* varpenerbit1 = new penerbit("Gama press");
	penerbit* varpenerbit2 = new penerbit("");
}