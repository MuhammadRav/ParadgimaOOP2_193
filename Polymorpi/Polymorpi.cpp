#include <iostream>
using namespace std;

class seseorang {
public:
	/*virtual void pesan() = 0;*/
	virtual void pesan() {
		cout << "Pesan dari seseorang" << endl;
	}
};

class shen : public seseorang {
public:
	void pesan() {
		cout << "Pesan dari shen" << endl;
	}
};

class dai : public seseorang {
public:
	void pesan() {
		cout << "Pesan dari dai" << endl;
	}
};

int main() {
	seseorang* obyek;
	shen a;
	dai b;

	obyek = &a;
	obyek->pesan();
	obyek = &b;
	obyek->pesan();
	/*a.seseorang::pesan();
	b.seseorang::pesan();*/

	return 0;
}