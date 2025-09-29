"""
    count_nucleotides(strand)

The frequency of each nucleotide within `strand` as a dictionary.

Invalid strands raise a `DomainError`.

"""
function count_nucleotides(strand)

	sumNucleotides = Dict(key => 0 for key in "ACGT")

	for i in strand
		if haskey(sumNucleotides, i)
			sumNucleotides[i] += 1
		else
			throw(DomainError(i, "Invalid sequence!"))
		end
	end

	return sumNucleotides
end
