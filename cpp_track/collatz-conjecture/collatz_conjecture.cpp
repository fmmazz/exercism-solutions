#include "collatz_conjecture.h"

namespace collatz_conjecture {

	int steps(int num){

		int numSteps = 0;

		if (num <= 0)
			throw std::domain_error("Domain error");
		else if (num == 1)
			return numSteps;
		else{
			while(num != 1){
				numSteps++;
				if (num % 2 == 0)
					num = num / 2;
				else
					num = 3 * num + 1;
			}
		}

		return numSteps;
	}

}  // namespace collatz_conjecture
