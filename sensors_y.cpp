#include<fstream>
#include<iostream>

using namespace std;

int main()
{
float y[54];
int count1=0,j;
string line1;

ifstream file1("mote_locs_y.txt");

while(getline(file1,line1))
{
  y[count1] = atof(line1.c_str());
  count1++;
}

cout << count1 << endl;
for(j=0;i<count1;j++)
{
	cout << y[j] << endl;
}

return 0;
}
