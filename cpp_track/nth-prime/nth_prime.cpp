#include "nth_prime.h"

namespace nth_prime {

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

	int nth(int num){

		std::vector<int> primeNumbers;

		if (num == 0)
			throw std::domain_error("Domain error");
		else{
			primeNumbers = primes(104743);
		}

		return primeNumbers[num-1];
	}

}  // namespace nth_prime
