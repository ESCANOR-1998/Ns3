#include<fstream>
#include<iostream>

using namespace std;

int main()
{
float x[54];
int count=0,i;
string line;

ifstream file("mote_locs_x.txt");

while(getline(file,line))
{
  x[count] = atof(line.c_str());
  count++;
}

cout << count << endl;
for(i=0;i<count;i++)
{
	cout << x[i] << endl;
}

return 0;
}
