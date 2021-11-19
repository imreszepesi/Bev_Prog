
#include "std_lib_facilities.h"



void swap_v(int a, int b)
{
	int temp;
	temp = a, a = b;			
	b = temp;

	cout << "swap_v     x: " << a << "   y: " << b << endl;
}



void swap_r(int& a, int& b)
{
	int temp;
	temp = a, a = b;			
	b = temp;

	cout << "swap_r     x: " << a << "   y: " << b << endl;
}



//Nem jó
//void swap_cr(const int& a, const int& b)
//{
//	int temp;
//	temp = a, a = b;
//	b = temp;
//
//}


int main()
{
	cout << "Originals. X = 7   Y = 9" << endl;
	int x = 7;
	int y = 9;

	swap_v(x, y);		
	cout << "           x: " << x << "   y: " << y << endl;
	swap_r(x, y);		
	cout << "           x: " << x << "   y: " << y << endl;
	//swap_cr(x, y);	
	swap_v(7, 9);		
	//swap_r(7, 9);		
	//swap_cr(7, 9);	

	cout << "Originals. CX = 7   CY = 9" << endl;
	const int cx = 7;
	const int cy = 9;

	swap_v(cx, cy);		
	cout << "           x: " << cx << "   y: " << cy << endl;
	//swap_r(cx, cy);	
	//swap_cr(cx, cy);	
	swap_v(7, 9);		
	//swap_r(7, 9);		
	//swap_cr(7, 9);	

	cout << "Originals. DX = 7.7   DY = 9.9" << endl;
	double dx = 7.7;
	double dy = 9.9;

	swap_v(dx, dy);		
	cout << "           x: " << dx << "   y: " << dy << endl;
	//swap_r(dx, dy);	
	//swap_cr(dx, dy);	
	swap_v(7.7, 9.9);	



	return 0;
}