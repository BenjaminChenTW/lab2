#include "a.h"
BMIcul::BMIcul(){set(0,0);}
BMIcul::BMIcul(float H, float M){
	set(H, M);
}
void BMIcul::set(float H, float M){
	height = H;
	mass = M;
	BMI = mass/(height/100)/(height/100);
}
void BMIcul::get(){
	cout << BMIvalue() << '\t' << category() << endl;
}
float BMIcul::BMIvalue(){
	return BMI;
}
std::string BMIcul::category(){
	if (BMI <= 0)
		return "BMI Error. #1";
	else if (BMI < 15)
		return "Very severely underweight.";
	else if (BMI < 16)
		return "Severely underweight";
	else if (BMI < 18.5)
		return "Underweight";
	else if (BMI < 25)
		return "Normal";
	else if (BMI < 30)
		return "Overweight";
	else if (BMI < 35)
		return "Obese Class I (Moderately obese)";
	else if (BMI < 40)
		return "Obese class II (Severely obese)";
	else if (BMI < 100)
		return "Obese class III (Very severely)";
	else
		return "BMI Error. #2";
}
