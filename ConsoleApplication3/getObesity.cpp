#include <iostream>
#include <string>
using namespace std;

string getObesity(double bmi) {
	
	string judgeMent;

	if (bmi < 18.5) {
		judgeMent = "��̏d�ł��B";
	
    }
	else if (bmi < 25.0) {
		judgeMent = "���ʑ̏d�ł��B";

	}
	else if (bmi < 30.0) {
		judgeMent = "�얞�i1�x�j�ł��B";

	}
	else if(bmi < 35.0){
		judgeMent = "�얞�i2�x�j�ł��B";

	}
	else if(bmi < 40.0){
		judgeMent = "�얞�i3�x�j�ł��B";

	}
	else{
		judgeMent = "�얞�i4�x�j�ł��B";

	}

	
	return judgeMent;
}
