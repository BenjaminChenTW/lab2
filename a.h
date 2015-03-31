#include <iostream>
#include <string>

using namespace std;

class BMIcul
{
	public:
		BMIcul();
		BMIcul(float H, float M);
		void set(float H, float M);
		void get();
		string category();
		float BMIvalue();
		float BMI;
	private:
		float height;
		float mass;
};
