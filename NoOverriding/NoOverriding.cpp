#include <iostream>
using namespace std;

class baseClass {
public:
	virtual void perkenalan()final {
		cout << "Haiiiiiiii saya Function dari base class";
	}
};

class derivedClass : public baseClass {

};