#include <bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;cin>>n;
string s1,s2;
cin>>s1;
int team1,team2;
string secteam;
for (int i = 1; i < n; i++)
{
    cin>>s2;
   if (s1!=s2)
   {
      secteam=s2;
      team2++;
   }
   else
   team1++;

}

if (team1>team2)
{
    cout<<secteam<<endl;
}
else
cout<<s1<<endl;
return 0;
}