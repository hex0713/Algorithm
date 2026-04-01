#include <iostream>

using namespace std;

int main()
{
    int timeH{0}, timeM{0}, timeN{0};
	
	cin >> timeH >> timeM >> timeN;
	
	timeH += timeN / 60;
	
	
	if(timeM + timeN % 60 >= 60)
	{
		timeH += 1;
		timeM = timeN % 60 + timeM - 60;
	}
	else
	{
		timeM = timeN % 60 + timeM;
	}
	
	timeH = timeH % 24;
	
	cout << timeH << " " << timeM << endl;
	
    
    return 0;
}