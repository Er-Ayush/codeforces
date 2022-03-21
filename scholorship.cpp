// The ZCO Scholarship Contest has just finished, and you finish with a rank of R. You know that Rank 1 to Rank 50 will get 100% scholarship on the ZCO exam fee and Rank 51 to Rank 100 will get 50% percentage scholarship on the ZCO exam fee. The rest do not get any scholarship.
// What percentage of scholarship will you get ?

#include <iostream>
using namespace std;

int main(){
int r;
cin>>r;
if (r<=50)
{
    cout<<"100";
}
else if (r>50 && r<=100)
{
    cout<<"50";
}
else
cout<<"0";
return 0;
}