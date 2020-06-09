function bob(stimulus::AbstractString)
	if isSilence(stimulus)
		return "Fine. Be that way!"
	elseif rstrip(stimulus)[end] == '?'
		return "Sure."
	elseif isUpper(stimulus)
		return "Whoa, chill out!"
	end

	return "Whatever."
end

function isUpper(s)
	for i in s
    	if islowercase(i)
    		return false
  		end
	end
	return true
end

function isSilence(s)
	if isempty(s)
		return true
	#else 
	#	for i in s
	#    	if isspace(i) || i != '\t'
	#    		return false
	#  		end
	#	end
	end

	return false
end