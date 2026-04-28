#include <iostream>
using namespace std;

void area(double x, double y){

	// x = height, y = base.

	cout << "Area of triangle: " << x * y / 2 << endl;
}

void area (int e, int r){

	cout << "Area of rectangle: " << e * r << endl;
}

void area (float h, float g){

	cout << "Area of square: " << h * g << endl;
}



void qualityPoints(int average){
	if (average >= 90 && average <= 100)
		cout << "4" << endl;
	else if (average >= 80 && average <= 89)
		cout << "3" << endl;
	else if (average >= 70 && average <= 79)
		cout << "2" << endl;
	else if (average >= 60 && average <= 69)
		cout << "1" << endl;
	else if (average >= 0 && average <= 60)
		cout << "0" << endl;

}

template <class T>
T maximum(T num1,T num2){
	return max(num1, num2);
}

template <class T>
T minimum(T num1, T num2){
	return min(num1, num2);
}

int main(){
	area(6.5, 10.4);
	area(7, 32);
	area(5.5f,6.5f);

	int average;

	// HERE YOU INPUT STUDENT'S AVERAGE, BASED ON THAT THE FUNCTION WILL WORK!!!

	cout << "Enter student's average: ";
	cin >> average;
	
	qualityPoints(average);

	int result1, result2;

	char result3, result4;

	float result5, result6;

	result1 = maximum<int>(98, 86);

	result2 = minimum<int>(98, 86);

	result3 = maximum<char>('x', 'v');

	result4 = minimum<char>('x', 'v');

	result5 = maximum<float>(96.77f, 101.69f);

	result6 = minimum<float>(96.77f, 101.69f);

	cout << "Max(98, 86) = " << result1 << endl

		 << "Min(98, 86) = " << result2 << endl

		 << "Max(x, v) = " << result3 << endl

		 << "Min(x, v) = " << result4 << endl

		 << "Max(96.77, 101.69) = " << result5 << endl

		 << "Min(96.77, 101.69) = " << result6 << endl;


return 0;
}