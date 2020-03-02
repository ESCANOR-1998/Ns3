#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;

int main()
{
    const int no = 54;
	int x[no],y[no];
	int count,count1,i;
	
	ifstream inputFile, inputFile1;
	inputFile.open("mote_locs_x.txt");
	inputFile1.open("mote_locs_y.txt")
	
	count= 0;
	while(!inputFile.eof())
	{
		cin >> x[count];
		count++;
	}
	
	while(!inputFile.eof())
	{
		cin >> y[count1];
		count++;
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
	