#include <iostream>
#include <string>
using namespace std;

string getObesity(double bmi) {
	
	string judgeMent;

	if (bmi < 18.5) {
		judgeMent = "低体重です。";
	
    }
	else if (bmi < 25.0) {
		judgeMent = "普通体重です。";

	}
	else if (bmi < 30.0) {
		judgeMent = "肥満（1度）です。";

	}
	else if(bmi < 35.0){
		judgeMent = "肥満（2度）です。";

	}
	else if(bmi < 40.0){
		judgeMent = "肥満（3度）です。";

	}
	else{
		judgeMent = "肥満（4度）です。";

	}

	
	return judgeMent;
}
