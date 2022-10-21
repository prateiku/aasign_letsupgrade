#include <bits/stdc++.h>
using namespace std;
 
bool prime_check(int n)
{
    if (n <= 1)
        return false;
 
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
 
    return true;
}

int main(){
    int num;
    cin >> num;
    if(prime_check(num)){
        cout<<"prime";
    }else{
        cout << "not prime";
    }
    return 0;
}
