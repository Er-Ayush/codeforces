#include <iostream>
using namespace std;
void solve();

int main()
{
    solve();
}

void solve(){
   // input length of the array and no of elements you want to check.
        int n=10,x=3;
        int arr[n]={13 ,12, 9, 1, 9, 8, 4, 19, 16 ,19};
  //declare variables to count number of odd and even numbers.
        int even = 0,odd = 0;
        for(int i=0; i<n; i++){
            if(arr[i] % 2 == 1) odd++;
            else even++;
        }
// if number of odd elements are 0 then simply print no and return
        if(odd==0){
            cout<<"No";
            return;
        }
for (int i = 1; i <= odd; i++)
{
    if(i>x) break;
    if((x-1)<=even){
        cout<<"YES";
        return;
    }
}
 cout<<"No";
}