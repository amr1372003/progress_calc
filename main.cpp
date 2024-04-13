#include<iostream>
using namespace std;

int main() {
	int sec , min, hr , totals , totalm , totalhr , rem , totaldone , total , remsec, remmin, remhr , percentage;
	char x;
	do
	{
	cout << "inter your project time : \n";
	cout << "hr = ";
	cin >> totalhr;
	cout << "min = ";
	cin >> totalm;
	cout << "sec = ";
	cin >> totals;
	cout << "inter your project time done : \n";
	cout << "hr = ";
	cin >> hr;
	cout << "min = ";
	cin >> min;
	cout << "sec = ";
	cin >> sec;
	
	total = totals + (totalm * 60) + (totalhr * 3600);
	totaldone = sec + (min * 60) + (hr * 3600);
	rem = total - totaldone;
	remhr = (rem / 3600);
	remmin = (rem / 60) - (remhr*60);
	remsec = rem - ((remhr * 3600) + (remmin * 60));
	percentage = totaldone *100 / total;
	
	for (int i = 1; i <= 50; i++)
	{
		if (i==1)
		{
			cout << "|";
		}
		if (i<=percentage/2)
		{
			cout << "/";
		}
		else {
			cout << " ";
		}
		if (i == 50)
		{
			cout << "|";
		}
	}

	cout << " about " << percentage << "% done\nremaning :" << remhr << " hr: " << remmin << " min: " << remsec << " sec \n";
	cout << "do you want to repeat press (a) , any key to end\n";
	cin >> x;
	} while (x == 'a');
}
