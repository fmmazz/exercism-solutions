"""
    count_nucleotides(strand)

The frequency of each nucleotide within `strand` as a dictionary.

Invalid strands raise a `DomainError`.

"""
function count_nucleotides(strand)

	sumNucleotides = Dict('T'=>0, 'C'=>0, 'G'=>0, 'A'=>0)

	for i in strand
		if i == 'T' || i == 'C' || i == 'G' || i == 'A'
			sumNucleotides[i] += 1
		else
			throw(DomainError(i, "Invalid sequence!"))
		end
	end

	return sumNucleotides
end
