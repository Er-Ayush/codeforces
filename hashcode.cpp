#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define u unsigned
#define pb push_back
#define rpt(n) for(int i = 0; i < n; i++)

#define LONG 1000000000
#define MED 1000000

#define TESTCASE

void solve(void);

struct project{

    string name;
    int day, points, deadline, roles;
    vector<pair<string, int>> skillset;

    project(string _n, int _d, int _p, int _dd, int _r){
        name = _n;
        day = _d;
        points = _p;
        deadline = _dd;
        roles = _r;
    }
};

int main() {
    srand(time(0));
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t;

    #ifdef TESTCASE
    #else
    t = 1;
    #endif
    
    int c, p;
    cin >> c >> p;

    unordered_map<string, multimap<int, string>> skills;
    
    rpt(c){
        string name;
        int n_sk;
        cin >> name >> n_sk;
        multimap<int, string> lvl_name;


        rpt(n_sk){
            string  sk_name;
            int sk_lvl;
            cin >> sk_name >> sk_lvl; 
            skills[sk_name] = lvl_name;
            skills[sk_name].insert({sk_lvl, name});
        }
    }

    multimap<double, project> projects;

    rpt(p){
        string name;
        int day, points, deadline, roles;
        double sort_factor;

        cin >> name >> day >> points >> deadline >> roles;
        project p(name, day, points, deadline, roles);

        sort_factor = (double)points*deadline/day;

        rpt(roles){
            string _name;
            int level;
            cin >> _name >> level;
            p.skillset.push_back({_name, level});
        }
        projects.insert({sort_factor, p});
    }


    for (auto _begin = projects.begin(), __end = projects.end(); _begin != __end; ++_begin){
        auto x = _begin->second;
        
    }
        



    return 0;
}