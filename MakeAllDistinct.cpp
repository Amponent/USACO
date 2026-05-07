#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    
    for (int _ = 0; _ < T; _++)
    {
        int N;
        int K;
        
        cin >> N >> K;
        
        vector <long long> a(N);
        for (int j = 0; j < N; j++)
        {
            cin >> a[j];
        }
        
        set<long long> used;
        
        long long operationCount = 0;
        
        for (int i = 0; i < N; i++)
        {
            while (used.count(a[i]))
            {
                a[i] = a[i] + K;
                operationCount++;
            }
            
            used.insert(a[i]);
        }
        
        cout << operationCount << std::endl;
        
    }
}
