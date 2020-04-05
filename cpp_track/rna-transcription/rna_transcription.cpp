#include "rna_transcription.h"

#include <string>

namespace rna_transcription {

	char to_rna(char nucleotide){
		if (nucleotide == 'A')
			return 'U';
		else if (nucleotide == 'C')
			return 'G';
		else if (nucleotide == 'G')
			return'C';
		else
			return 'A';
	}

	std::string to_rna(std::string dna){

		std::string rna = "";

		for (std::string::size_type i = 0; i < dna.length(); i++){
			rna += to_rna(dna[i]);
		}

		return rna;
	}

}  // namespace rna_transcription
