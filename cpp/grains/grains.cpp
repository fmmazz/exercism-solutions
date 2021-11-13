#include "grains.h"

namespace grains {

	unsigned long long int square(int sqr){
		if (sqr == 1)
			return 1ULL;
		else
			return 1ULL << (sqr-1);
	}

	unsigned long long int total(){
		unsigned long long int sum = 0ULL;

		for (int i = 1; i <= 64; i++)
			sum += 1ULL << (i);
		
		return sum;
	}

}  // namespace grains
