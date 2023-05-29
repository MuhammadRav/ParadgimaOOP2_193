#include <iostream>
using namespace std;

class baseClass {
public:
	virtual void perkenalan() final {
		cout << "Haiiiiiiii saya Function dari base class";
	}
};

class derivedClass : public baseClass {
public:
	void perkenalan() {
		cout << "Haiiiiiiii saya Function dari derived class";
	}
};

int main() {
	derivedClass a;
	a.perkenalan();

	return 0;
}