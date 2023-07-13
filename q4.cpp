#include<bits/stdc++.h>
#include<fstream>
#include<string>
 
using namespace std;
 
int main()
{
string filename;   // Name of the file
cout<<"Enter filename:";
cin>>filename;
 
string line;   // To read each line from code
int count=0;    // Variable to keep count of each line
ifstream mFile (filename);  
if(mFile.is_open())
{
while(mFile.peek()!=EOF)
{
getline(mFile, line);
count++;
}
mFile.close();
cout<<"Number of lines in the file are: "<<count<<endl;
}
else
cout<<"Couldn't open the file\n";
 
return 0;
}