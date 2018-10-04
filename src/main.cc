#include <iostream>
#include "windchillindex.h"
using namespace std;

int main() {
	cout << "Wind Chill Index:"
		<< edu::vcccd::vc::csv13::computeWindChillIndex( -19.0 , 11.0 );
}

