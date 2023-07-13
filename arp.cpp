#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;


int main(){
    vector<string> ip;
    vector< pair<string, string> > mac;

    ip.push_back("ip1");
    ip.push_back("ip2");
    ip.push_back("ip3");
    ip.push_back("ip4");
    ip.push_back("ip5");
    ip.push_back("ip6");
    ip.push_back("ip7");


    mac.push_back( make_pair("mac1", "ip6"));
    mac.push_back(make_pair("mac2", "ip3"));
    mac.push_back(make_pair("mac3", "ip2"));
   mac.push_back(make_pair("mac4", "ip7"));
   mac.push_back(make_pair("mac5", "ip5"));
   mac.push_back(make_pair("mac6", "ip1"));
   mac.push_back(make_pair("mac7", "ip4"));

    map<string, string> cache;

    cache["ip6"] = "mac1";


    while(true){
        cout << " enter ip adress for which you want to find mac" <<endl;
        string a;
        cin >> a;
        if(a == "exit"){
            return 0;
        }

        if(cache.find(a) != cache.end()){
            cout << "mac adress is " << cache[a] <<endl;
            continue;
        }else{
            for(int i = 0; i < mac.size(); i++){
                if(mac[i].second == a){
                    cache[a] = mac[i].first;
                    cout << "mac adress is " << cache[a] <<endl;
                    continue;
                }
            }
        }
    }


    return 0;


}