#include <iostream>
#include <cmath>
#include <cstdio>
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
// 36
// i had the idea of reducing and log but i can't do it myself
void hardCompare(){
    long double a,b,c,d;
    cin >> a >> b >> c >> d;
    a = b*log(a);
    c = d*log(c);
    if(a>c)cout << "YES";
    else cout << "NO";
}
// 37
void winterSales(){
    float x,p,price;
    cin >> x >> p;
    x = 1-(x/100);
    price = p / x;
    printf("%.2lf",price);
}
int main() {
    //lastTwoDigits();
    //hardCompare();
    winterSales();
    return 0;
}
