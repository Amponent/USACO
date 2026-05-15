#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);
    
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int X;
    int Y;
    int M;
    
    cin >> X >> Y >> M;
    
    int bestNumber = -10;
    
    for (int i = 0; i <= M/X; i++)
    {
        int firstNumber = X * i;
        int secondNumber = 0;
        for (int j = 0; j <= M/Y; j++)
        {
            if (firstNumber + Y * j <= M)
            {
                secondNumber = Y * j;
            }
            else
            {
                break;
            }
        }
        
        int combinedNumber = firstNumber + secondNumber;
        if (M - combinedNumber < M - bestNumber)
        {
            bestNumber = combinedNumber;
        }
    }
    
    std::cout << bestNumber;
}
