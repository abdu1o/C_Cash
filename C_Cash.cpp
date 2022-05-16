#include <iostream>
using namespace std;


//(1)----------------------------------------
//int main()
//{
//	double money;
//	double percent;
//
//	cout << "Enter the amount of the deposit: ";
//	cin >> money;
//
//	cout << "Enter the % per age: ";
//	cin >> percent;
//	
//	double sum = (percent / 100) / 12;
//	cout << "Money per month: " << sum * money << "\n";
//}
//-------------------------------------------


//(2)----------------------------------------
//int main()
//{
//	int money;
//	int value;
//
//	cout << "Enter ur money: ";
//	cin >> money;
//
//	cout << "Enter value of product: ";
//	cin >> value;
//
//	cout << "U can buy: " << money / value << "\n";
//	cout << "Ur change: " << money % value << "\n";
//}
//-------------------------------------------


//(3)----------------------------------------
int main()
{
	double weight, length, height, door_area, liter_value, liter_m2;
	
	cout << "Enter width, length & height of walls (meters): \n";
	cin >> weight >> length >> height;

	cout << "Enter area of doors & windows (%): \n";
	cin >> door_area; 

	cout << "Enter value per liter: \n";
	cin >> liter_value;

	cout << "Enter needed liters per meter square : \n";
	cin >> liter_m2;

	double square_temp = 2 * (weight * height + height * length);
	double square_noDoor = square_temp - (square_temp * door_area) / 100;
	double liter_needed = square_noDoor / liter_m2;

	cout << "U need: " << liter_needed << " liters and pay: " << liter_needed * liter_value;

}
//-------------------------------------------