#include "robot_name.h"

namespace robot_name {

	robot::robot(){
		robotName = generateNewName();
	}

	std::string robot::name() const{
		return robotName;
	}

	void robot::reset(){
		robotName = generateNewName();
	}

	std::string robot::generateNewName(){
		std::string newName;

		newName = 'A' + rand()%26;
		newName += 'A' + rand()%26;
		newName += '0' + rand()%10;
		newName += '0' + rand()%10;
		newName += '0' + rand()%10;

		return newName;
	}

}  // namespace robot_name
