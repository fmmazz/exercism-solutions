#include "hamming.h"
#include <string>

namespace hamming {

int compute(std::string a, std::string b){
	
	int distance = 0;

	if (a.length() != b.length()){
		throw std::domain_error("Strings with different sizes");	
	}
	else {

		for (std::string::size_type i = 0; i < a.length(); i++){
			if (a[i] != b[i])
				distance++;	
		}
	}

	return distance;

}

}  // namespace hamming
