#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;

int main()
{
    const int no = 54;
	int x[no],y[no];
	int count=0,count1=0,i;
	
	ifstream inputFile, inputFile1;
	inputFile.open("mote_locs_x.txt");
	inputFile1.open("mote_locs_y.txt")
	
	
	while(!inputFile.eof())
	{
		cin >> x[count];
		count++;
	}
	
	while(!inputFile1.eof())
	{
		cin >> y[count1];
		count1++;
	}

	cout<< " " <<count;
	cout<< "the x-coordinate details are:";
	
	for(i=0;i<count;i++)
	{
		cout<< " " << x[i];
	}
	
	cout<< " " <<count1;
	cout<< "the y-coordinate details are:";
	
	for(i=0;i<count1;i++)
	{
		cout<< " " << y[i];
	}
	
	cout << endl;
	
	return 0;
}
	
