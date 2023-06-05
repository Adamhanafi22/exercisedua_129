#pragma once
#ifndef BUKU_H
#define BUKU_H
#include <iostream>
#include <string>
using namespace std;

class buku {
public:
	string nama;
	buku(string pNama) :nama(pNama) {
		cout << "Anak \"" << nama << "\" ada\n";
	} 
	
};

#endif // !ANAK_H



