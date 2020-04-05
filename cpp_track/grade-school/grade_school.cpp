#include "grade_school.h"

#include <string>      
#include <stdexcept>   
#include <map>         
#include <vector>      
#include <algorithm>

namespace grade_school {

	std::map<int, std::vector<std::string>> school::roster() const{
		return rosterDB;
	}

	void school::add(std::string student, int grade){

		rosterDB[grade].insert( std::upper_bound( begin(rosterDB[grade]), end(rosterDB[grade]), student), student );
	}

	std::vector<std::string> school::grade(int gradeID) const{

		if ( rosterDB.find(gradeID) == rosterDB.end() ) {
			return {};
		} else {
		  	return rosterDB.at(gradeID);
		}

	}

}  // namespace grade_school
