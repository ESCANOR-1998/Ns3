#include<fstream>
#include<iostream>

using namespace std;

int main()
{
int y[54];
int count1=0,j=0;

ifstream inputFile1;
inputFile1.open("mote_locs_y.txt");

if(!inputFile1)
 cout << "FILE READING ERROR";
else
{
while(!inputFile1.eof())
{
inputFile1 >> y[count1];
count1++;
}
}

for(j=0;j<count1;j++)
{
cout<< " " << y[count1];
}

return 0;
}