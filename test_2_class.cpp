/*
 * test_2_class.cpp
 *
 *  Created on: 2012/12/13
 *      Author: IwabuchiKen
 */

#include <iostream>

class CSample {
public:
	void hello();

private:
	void hello_2();
};

void CSample::hello() {

	std::out << "hello" << endl;
}

void CSample::hello_2() {

	std::out << "hello" << endl;
}

int main() {

	CSample obj;

	obj.hello();

	obj.

	return 0;
}
