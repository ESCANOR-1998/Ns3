#include<sstream>
#include<vector>
#include<fstream>
using namespace std;

int main()
{
string x1,y1;
vector<float>X1;
vector<float>Y1;
string file;
cout << "Enter the filename: ";
cin >> file;
int i=0;
ifstream coeff(file);

if(coeff.is_open())
{
string line;
getline(coeff, line);

while(!coeff.eof())
{
	getline(coeff, x1, ',');
	X1.push_back(stof(x1));
	getline(coeff, y1, '\n');
    Y1.push_back(stof(y1));
	
	i+=1;
}
coeff.close();
cout << "Number of entries: " << i-1 << endl;
}

else cout << "Unable to open the file";

for( int j=0;j<i;j++)
{
	cout << X1[j] << "\t" << Y1[j] << endl;
}

}