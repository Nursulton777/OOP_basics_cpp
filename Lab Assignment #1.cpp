#include <iostream>
using namespace std;
int main()
{
	//task 1
	int a = 77;
	float b = 3.14;
	double c = 3.1426295325;
	char d = 'S';
	bool e = true;
cout << "Integer: " << a << endl
     << "FLoat: " << b << endl 
     << "Double: " << c << endl
     << "Character: " << d << endl
     <<  "Boolean: " << e <<endl;
return 0;
}


//task 2
#include <iostream>
using namespace std;
int main()
{
cout << "Variables:\tType Sizes:" <<endl;
cout << "int\t\t" << sizeof(int) <<endl
     << "short\t\t" << sizeof(short) <<endl
     << "long\t\t" << sizeof(long) <<endl
     << "long long\t" << sizeof(long long) <<endl
     << "float\t\t" << sizeof(float) <<endl
     << "double\t\t" << sizeof(double) << endl
     << "long double\t" << sizeof(long double) <<endl
     << "char\t\t" <<sizeof(char) <<endl
     << "bool\t\t" <<sizeof(bool) << endl;
return 0;
}

//task 3
#include <iostream>
using namespace std;
int main()
{
int ID;
cin >> ID;
int age;
cin >> age;
float metersF;
cin >> metersF;

cout << "Enter your ID: " << ID << endl;
cout << "Enter your age: " << age << endl;
cout << "Enter your height in meters: " << metersF << endl;

cout << "\t--- Summary ---\n";
cout << "ID:\t" << ID << endl;
cout << "Age:\t" << age << endl;
cout << "Height:\t" << metersF << endl;

return 0;
}
