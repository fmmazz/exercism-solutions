#include "space_age.h"

namespace space_age {

	space_age::space_age(long long int sec) : ageInSeconds{sec} { }

	long int space_age::seconds() const{
		return ageInSeconds;
	}

	double space_age::on_earth() const{
		return ageInSeconds/yearInSecondsEarth;
	}

	double space_age::on_mercury() const{
		return ageInSeconds / (yearInMercury * yearInSecondsEarth);
	}

	double space_age::on_venus() const{
		return ageInSeconds / (yearInVenus * yearInSecondsEarth);
	}

	double space_age::on_mars() const{
		return ageInSeconds / (yearInMars * yearInSecondsEarth);
	}

	double space_age::on_jupiter() const{
		return ageInSeconds / (yearInJupiter * yearInSecondsEarth);
	}	

	double space_age::on_saturn() const{
		return ageInSeconds / (yearInSaturn * yearInSecondsEarth);
	}

	double space_age::on_uranus() const{
		return ageInSeconds / (yearInUranus * yearInSecondsEarth);
	}

	double space_age::on_neptune() const{
		return ageInSeconds / (yearInNeptune * yearInSecondsEarth);
	}

}  // namespace space_age
