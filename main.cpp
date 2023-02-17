#include <iostream>
using namespace std;
// 35 i can't do it so i see the correction from youtube playlist
void lastTwoDigits(){
    long int a,b,c,d,res;
    cin >> a >> b >> c >> d;
    a = a % 100;
    b = b % 100;
    c = c % 100;
    d = d % 100;
    res = a * b * c * d;
    if(res%100 <= 9) cout << "0" << res % 100;
    else cout << res % 100;
}
int main() {
    lastTwoDigits();
    return 0;
}
