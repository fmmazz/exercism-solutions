#include "say.h"

namespace say {

	std::string oneToTwelve(long long int num){

		std::string number = "";

		switch(num){
			case 1:
				number += "one";
				break;
			case 2:
				number += "two";
				break;
			case 3:
				number += "three";
				break;
			case 4:
				number += "four";
				break;
			case 5:
				number += "five";
				break;
			case 6:
				number += "six";
				break;
			case 7:
				number += "seven";
				break;
			case 8:
				number += "eight";
				break;
			case 9:
				number += "nine";
				break;
			case 10:
				number += "ten";
				break;
			case 11:
				number += "eleven";
				break;
			case 12:
				number += "twelve";
				break;
		}

		return number;
	}

	std::string twentyToNinety(long long int num){

		std::string number = "";

		switch(num){
			case 2:
				number += "twenty";
				break;
			case 3:
				number += "thirty";
				break;
			case 4:
				number += "fourty";
				break;
			case 5:
				number += "fifty";
				break;
			case 6:
				number += "sixty";
				break;
			case 7:
				number += "seventy";
				break;
			case 8:
				number += "eighty";
				break;
			case 9:
				number += "ninety";
				break;
		}

		return number;
	}


	std::string in_english(long long int num){

		std::string number = "";

		if (num == 0)
			number = "zero";
		else {
			while(num > 0){
				if (!number.empty())
				{
					number += " ";
				}

				if (num <= 12){
					number += oneToTwelve(num);
					num -= num;
				}
				else if (num <= 19){
					number += oneToTwelve(num%10) + "teen";
					num -= num;
				}
				else if(num <= 99 && num % 10 != 0){
					number += twentyToNinety(num/10) + "-" + oneToTwelve(num%10);
					num -= num;
				}
				else if(num <= 99 && num % 10 == 0){
					number += twentyToNinety(num/10);
					num -= num;
				}
				else if(num <= 999){
					number += oneToTwelve(num/100) + " hundred";
					num -= (num/100) * 100;
				}
				else if(num <= 9999){
					number += oneToTwelve(num/1000) + " thousand";
					num -= (num/1000) * 1000;
				}
				else if(num <= 99999){
					number += twentyToNinety(num/1000) + "-" + oneToTwelve(num%1000) + " thousand";
					num -= (num/1000) * 1000;
				}
			}
		}

		return number;
	}

}  // namespace say
