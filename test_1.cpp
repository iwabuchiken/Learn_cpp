/*
 * test_1.cpp
 *
 *  Created on: 2012/12/13
 *      Author: IwabuchiKen
 */

//REF=> http://www.geocities.jp/ky_webid/cpp/language/018.html

#include <iostream>

namespace sample {

	int abc;

}

int main() {

	sample::abc = 100;

	std::cout << sample::abc;

	return 0;
}
