#if !defined(GRADE_SCHOOL_H)
#define GRADE_SCHOOL_H

#include <string>      
#include <stdexcept>   
#include <map>         
#include <vector>      
#include <algorithm>

namespace grade_school {

	class school
	{

	private:
		std::map<int, std::vector<std::string>> rosterDB;

	public:

		std::map<int, std::vector<std::string>> roster() const;

		void add(std::string student, int grade);

		std::vector<std::string> grade(int gradeID) const;

	};

}  // namespace grade_school

#endif // GRADE_SCHOOL_H