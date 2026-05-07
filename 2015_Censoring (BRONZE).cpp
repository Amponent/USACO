#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
	string S;
	string T;

	cin >> S;
	cin >> T;

	while (S.find(T) != string::npos)
	{
		int index = S.find(T);
		S.erase(index, T.length());
	}
	
	cout << S;
}
