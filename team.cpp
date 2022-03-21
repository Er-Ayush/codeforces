// One day three best friends Petya, Vasya and Tonya decided to form a team and take part in programming contests. Participants are usually offered several problems during programming contests. Long before the start the friends decided that they will implement a problem if at least two of them are sure about the solution. Otherwise, the friends won't write the problem's solution.

// This contest offers n problems to the participants. For each problem we know, which friend is sure about the solution. Help the friends find the number of problems for which they will write a solution.
#include <iostream>
using namespace std;

int main(){
int t,count=0;
cin>>t;
while(t--){
int a,b,c;
cin>>a>>b>>c;
if (a==1 && b==1 &&c!=1)
{
    count++;
}
else if (a!=1 && b==1 &&c==1)
{
    count++;
}
else if (a==1 && b!=1 &&c==1)
{
     count++;
}
else if (a=1 && b==1 &&c==1)
{
      count++;
}

}
cout<<count<<endl;
return 0;
}