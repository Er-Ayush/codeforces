#include<bits/stdc++.h>
using namespace std;

#define int             long long

int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) ;


int32_t main()
{
    int n;
    cin>>n;
    vector<int>startTime;
    vector<int>endTime;
    vector<int>profit;
    for(int i=0;i<n;i++)
    {
        int start,end,pro;
        cin>>start;
        startTime.push_back(start);
        cin>>end;
        endTime.push_back(end);
        cin>>pro;
        profit.push_back(pro);
    }
    cout<<jobScheduling(startTime, endTime, profit);
}

 int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        int n = startTime.size();
        vector<vector<int>> jobs;
        for (int i = 0; i < n; ++i) {
            jobs.push_back({endTime[i], startTime[i], profit[i]});
        }
        sort(jobs.begin(), jobs.end());
        map<int, int> dp = {{0, 0}};
        for (auto& job : jobs) {
            int cur = prev(dp.upper_bound(job[1]))->second + job[2];
            if (cur > dp.rbegin()->second)
                dp[job[0]] = cur;
        }
        return dp.rbegin()->second;
}


// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <map>

// struct Job {
//     int start;
//     int end;
//     int profit;
// };

// int jobScheduling(const std::vector<Job>& jobs);

// int main() {
//     int n;
//     std::cin >> n;

//     std::vector<Job> jobs(n);
//     for (int i = 0; i < n; ++i) {
//         std::cin >> jobs[i].start >> jobs[i].end >> jobs[i].profit;
//     }

//     std::cout << jobScheduling(jobs) << std::endl;
//     return 0;
// }

// int jobScheduling(const std::vector<Job>& jobs) {
//     int n = jobs.size();
//     std::vector<Job> sortedJobs(jobs);
//     std::sort(sortedJobs.begin(), sortedJobs.end(), [](const Job& a, const Job& b) {
//         return a.end < b.end;
//     });

//     std::map<int, int> dp = {{0, 0}};
//     for (const Job& job : sortedJobs) {
//         int cur = prev(dp.upper_bound(job.start))->second + job.profit;
//         if (cur > dp.rbegin()->second) {
//             dp[job.end] = cur;
//         }
//     }

//     return dp.rbegin()->second;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// struct Call {
//     int start_time;
//     int end_time;
//     int value;
// };

// int find_latest_call_index(vector<Call>& calls, int i) {
//     int l = 0, r = i - 1;
//     while (l <= r) {
//         int mid = (l + r) / 2;
//         if (calls[mid].end_time <= calls[i].start_time) {
//             if (calls[mid + 1].end_time <= calls[i].start_time) {
//                 l = mid + 1;
//             } else {
//                 return mid;
//             }
//         } else {
//             r = mid - 1;
//         }
//     }
//     return -1;
// }

// int maximize_call_value(vector<Call>& calls) {
//     int n = calls.size();
//     sort(calls.begin(), calls.end(), [](Call& a, Call& b) {
//         return a.end_time < b.end_time;
//     });
//     vector<int> dp(n + 1, 0);
//     for (int i = 1; i <= n; i++) {
//         int j = find_latest_call_index(calls, i - 1);
//         int value = calls[i - 1].value;
//         dp[i] = max(dp[i - 1], (j >= 0 ? dp[j + 1] : 0) + value);
//     }
//     return dp[n];
// }

// int main() {
//     int n;
//     cin >> n;
//     vector<Call> calls(n);
//     for (int i = 0; i < n; i++) {
//         cin >> calls[i].start_time >> calls[i].end_time >> calls[i].value;
//     }
//     int max_value = maximize_call_value(calls);
//     cout << max_value << endl;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// bool compare(vector<int> a, vector<int> b) {
//     return a[1] < b[1]; // Sorting calls based on end time
// }

// int main() {
//     int n;
//     cin >> n;

//     vector<vector<int>> calls(n, vector<int>(3)); // Creating a 2D vector to store calls

//     for(int i=0; i<n; i++) {
//         cin >> calls[i][0] >> calls[i][1] >> calls[i][2]; // Inputting call details
//     }

//     sort(calls.begin(), calls.end(), compare); // Sorting calls based on end time

//     vector<int> dp(n, 0); // Creating a dynamic programming array to store maximum value at each call

//     dp[0] = calls[0][2]; // Base case - Maximum value at first call

//     for(int i=1; i<n; i++) {
//         int prev = -1;
//         for(int j=i-1; j>=0; j--) { // Finding the last non-overlapping call
//             if(calls[j][1] <= calls[i][0]) {
//                 prev = j;
//                 break;
//             }
//         }
//         if(prev != -1) { // If a non-overlapping call is found
//             dp[i] = max(dp[i-1], dp[prev] + calls[i][2]);
//         }
//         else { // If no non-overlapping call is found
//             dp[i] = max(dp[i-1], calls[i][2]);
//         }
//     }

//     cout << dp[n-1]; // Maximum value at the end of shift

//     return 0;
// }       