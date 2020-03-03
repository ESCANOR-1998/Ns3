#include<fstream>
#include<iostream>

using namespace std;

int main()
{
int x[54];
int count=0,i=0;

ifstream inputFile;
inputFile.open("mote_locs_x.txt");

if(!inputFile)
 cout << "FILE READING ERROR";
else
{
while(!inputFile.eof())
{
inputFile >> x[count];
count++;
}
}

for(i=0;i<count;i++)
{
cout<< " " << x[count];
}

return 0;
}