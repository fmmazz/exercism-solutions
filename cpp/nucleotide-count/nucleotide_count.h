#if !defined(NUCLEOTIDE_COUNT_H)
#define NUCLEOTIDE_COUNT_H

#include <map>
#include <stdexcept>
#include <string>

namespace nucleotide_count {

	class counter
	{

	private:
		std::string dnaSequence;
		std::map<char, int> nucleotides;

	public:
		counter(std::string initialSequence);

		std::map<char, int> nucleotide_counts() const;

		int count(char nucleotide) const;
		
	};

}  // namespace nucleotide_count

#endif // NUCLEOTIDE_COUNT_H
