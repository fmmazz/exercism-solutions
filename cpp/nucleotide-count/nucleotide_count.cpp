#include "nucleotide_count.h"
#include <map>
#include <stdexcept>
#include <string>

namespace nucleotide_count {


	counter::counter(std::string initialSequence){
		dnaSequence = initialSequence;
		nucleotides = {{'A', 0}, {'T', 0}, {'C', 0}, {'G', 0} };

		for (std::string::size_type i = 0; i < dnaSequence.length(); i++){

			if (dnaSequence[i] != 'A' && dnaSequence[i] != 'C' && dnaSequence[i] != 'G' && dnaSequence[i] != 'T'){
				throw std::invalid_argument("Nucleotides must be made of ATGC");
			}
		}

		for (std::string::size_type i = 0; i < dnaSequence.length(); i++){
			switch(dnaSequence[i]){
				case 'A':
					nucleotides['A']++;
					break;
				case 'C':
					nucleotides['C']++;
					break;
				case 'G':
					nucleotides['G']++;
					break;
				case 'T':
					nucleotides['T']++;
					break;
			}
		}
	}

	std::map<char, int> counter::nucleotide_counts() const {
		return nucleotides;
	}

	int counter::count(char nucleotide) const{
		if (nucleotide == 'A' || nucleotide == 'C' || nucleotide == 'G' || nucleotide == 'T')
			return nucleotides.at(nucleotide);
		else
			throw std::invalid_argument("Nucleotides must be made of ATGC");
	}

}  // namespace nucleotide_count
