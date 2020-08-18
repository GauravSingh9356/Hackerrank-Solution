#include<bits/stdc++.h>
using namespace std;
 int main()
{
ifstream read;
read.open("6.csv");
ofstream write;
write.open("temp.txt");
string line;
vector<string>area;
vector<string>air;
vector<string>water;
vector<string>land;
vector<string>CEPI9;
vector<string>CEPI11;
vector<string>CEPI13;
getline(read, line);
while(read.good())
{
	getline(read,line,',');
    area.push_back(line);
    getline(read,line,',');
    air.push_back(line);
    getline(read,line,',');
    water.push_back(line);
    getline(read,line,',');
    land.push_back(line);
    getline(read,line,',');
    CEPI9.push_back(line);
    getline(read,line,',');
    CEPI11.push_back(line);
    getline(read,line,',');
    CEPI13.push_back(line);

}
for(int j=0;j<air.size();j++)
{
    float c=stof(air[j]);
    cout<<c<<endl;
}
}


