//Tristan Long WindChillIndex September 27th 2018

#include <cmath>
#include <iostream>
#include <climits>


namespace edu {
	namespace vcccd {
		namespace vc {
			namespace csv13 {
				double computeWindChillIndex(double temp, double velocity) {
					double WCIR;
					if (temp > 10) return -1;

					WCIR = 33.0 - ((10.0 * sqrt(velocity) - velocity) * (33.0 - temp)) / 23.1;
					return WCIR;
}}}}}