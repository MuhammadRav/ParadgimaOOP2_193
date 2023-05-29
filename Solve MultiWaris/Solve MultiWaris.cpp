#include <iostream>
using namespace std;

class orang {
public:
	int umur;

	orang(int pUmur) :
		umur(pUmur)
	{
		cout << "Orang dibuat dengan umur" << umur << "\n" << endl;
	}
};

class pekerja : virtual public orang {
public:
	pekerja(int pUmur) :
		orang(pUmur)
	{
		cout << "Pekerja dibuat\n" << endl;
	}
};

class pelajar : virtual public orang {
public:
	pelajar(int pUmur) :
		orang(pUmur)
	{
		cout << "Pelajar dibuat\n" << endl;
	}
};

class agus : public pekerja, public pelajar {
public:
	agus(int pUmur) :
		pekerja(pUmur),
		pelajar(pUmur),
		orang(pUmur)		// digunakan jika menggunakan virtual
	{
		cout << "Agus dibuat\n" << endl;
	}
};

