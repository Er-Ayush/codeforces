#include <iostream>
using namespace std;

class binary
{
  string s;

public:
  void read(void);
  void chkbin(void);
  void ones(void);
  void display(void);
};
void binary ::read(void)
{
  cout << "enter a binary number" << endl;
  cin >> s;
}
void binary ::chkbin(void)
{
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] != '0' && s[i] != '1')
    {
      cout << "number is not binary" << endl;
      exit(0);
    }
  }
}
void binary :: ones(void){
  for (int i = 0; i < s.size(); i++){
  if(s[i]=='0') s[i]='1';
  else if(s[i]=='1') s[i]='0';
  }
}
void binary :: display(void){
  for (int i = 0; i < s.size(); i++){
    cout<<s[i];
  }
  cout<<endl;
}
int main()
{
  binary a;
  a.read();
  a.chkbin();
  a.display();
  a.ones();
  a.display();
  return 0;
}