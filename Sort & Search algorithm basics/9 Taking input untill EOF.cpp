//https://stackoverflow.com/questions/201992/how-to-read-until-eof-from-cin-in-c/36978839

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    std::string line;
    while (std::getline(std::cin, line))
    {
        std::cout << line << std::endl;
    }

    // int n;
    // while (cin >> n)
    // {
    //    cout << n << '\n';
    // }

    return 0;
}