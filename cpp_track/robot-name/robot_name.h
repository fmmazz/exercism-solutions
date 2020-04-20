#if !defined(ROBOT_NAME_H)
#define ROBOT_NAME_H

#include <string>

namespace robot_name {

	class robot
	{
	private:
		std::string robotName;
	public:
		robot();
		void reset();
		std::string name() const;
		std::string generateNewName();
	};

}  // namespace robot_name

#endif // ROBOT_NAME_H