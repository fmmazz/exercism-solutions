#include "sieve.h"

namespace sieve {

	std::vector<int> primes(int num){

		std::vector<int> allNumbers(num+1, 1);
		std::vector<int> primeNumbers;

		if (num >= 2){

			for (int i = 2; i <= num; i++)
			{
				if (allNumbers[i] == 1)
				{
					for (int j = i; j <= num; j+=i)
					{
						allNumbers[j] = 0;
					}

					primeNumbers.push_back(i);
				}
			}
		}

		return primeNumbers;

	}

}  // namespace sieve
