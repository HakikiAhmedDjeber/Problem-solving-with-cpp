#include <iostream>
#include <string>
#include <cmath>
 using namespace std;
// 1
void oddOrEven(){
    cout << "give me a number : ";
    int a ;
    cin >> a;
    if (a%2==0){
        cout << "the number is EVEN";
    } else{
        cout << "the number is ODD";
    };
};
//2
void heirADriver(){
    int age;
    string license;
    cout << "how old are you : ";
    cin >> age;
    cout << "do you have a Drive license (yes/no) :";
    cin >> license;
    if (age > 21 && license == "yes"){
        cout << "you are hired";
    }else{
        cout << "you are rejected";
    };
}
//3
void driverWithRecommendation(){
    string recommend;
    cout << "do you have a Drive Recommendation (yes/no) :";
    cin >> recommend;
    if (recommend == "yes"){
        cout << "you are hired";
    }else{
        int age;
        string license;
        cout << "how old are you : ";
        cin >> age;
        cout << "do you have a Drive license (yes/no) :";
        cin >> license;
        if (age > 21 && license == "yes"){
            cout << "you are hired";
        }else{
            cout << "you are rejected";
        };
    }
}
//4
void fullName(){
    string firstName,lastName,fullName;
    cout << "give me your first name :";
    cin >> firstName;
    cout << "give me your last name :";
    cin >> lastName;
    fullName = firstName+" "+lastName;
    cout << "your full name is : " << fullName;
}
//5
void halfNumber(){
    int number;
    cout << "give me a number : ";
    cin >> number;
    cout << "the half of "<< number<< " is " <<number/2;
}
//6
void averagePassOrFail(){
    float mark1,mark2,mark3,result;
    cout << "write your marks : ";
    cin >> mark1 >> mark2 >> mark3 ;
    result = (mark1+mark2+mark3)/3;
    cout << "your average is : " << result << endl;
    if (result >= 50){
        cout << "PASS!";
    }else{
        cout << "FAIL!";
    };
}
//7
void swipeNumbers(){
    int a,b,c;
    cout << "enter the two numbers : ";
    cin >> a >> b;
    cout << "the first number is " << a << " and the second one is " << b << endl;
    cout << "swipe" << endl;
    c = a;
    a = b;
    b = c;
    cout << "after the swipe the first number is " << a << " and the second is " << b ;
}
//8
void circleArea(){
    const float pi = 3.14;
    float r;
    cout << "enter the value r : ";
    cin >> r;
    cout << "the area of the circle is : " << pi*(r*r) ;
}
//9
void circleAreaWithTriangle(){
    const float pi = 3.14;
    float a,b;
    cout << "give me the Dimensions of the triangle : ";
    cin >> a >> b;
    cout << "the area of the circle is : " << pi*((b*b)/4)*((2*a-b)/(2*a+b));
}
//10
void circleAreaWithArbitraryTriangle(){
    const float pi = 3.14;
    float a,b,c,p,t;
    cout << "enter the triangle's Dimensions : ";
    cin >> a >> b >> c;
    p=(a+b+c)/2;
    t=(a*b*c)/(4* sqrt(p*(p-a)*(p-b)*(p-c)));
    cout << "the area of the circle is : " << pi* pow(t,2);
}
//11
void readUntilValidAge(){
    int age;
    cout << "give your age : ";
    cin >> age;
    while (age < 18 || age > 45 ){
        cout << "give your age again : ";
        cin >> age;
    }
    cout << "your age is valid";
}
// 12
void sumOodAndEven(){
    int n;
    long long int sumOod = 0,sumEven = 0;
    cout << "give the limit number : ";
    cin >> n;
    for (int i = 1; i <=n ; i++) {
        if(i%2==0){
            sumEven += i;
        }else{
            sumOod += i;
        }
    }
    cout << "the sum of even numbers is : " << sumEven << endl;
    cout << "the sum of ood numbers is : " << sumOod << endl;
}
// 13
void factorial(){
    int n,f=1,i;
    cout << "enter the number : ";
    cin >> n;
    i=n;
    while(n>0){
        f *= n;
        n--;
    }
    cout << "the factorial of " << i << " is : " << f ;
}
// 14
void powTo4(){
    int x , pow;
    cout << "enter the number : ";
    cin >> x;
    pow = x;
    for (int i = 2; i <= 4; ++i) {
        pow *= x;
        cout << x << "^" << i << " is : " << pow << endl;
    }
}
// 15
void powToM(){
    int x , pow , M;
    cout << "enter the number : " ;
    cin >> x;
    cout << "enter the last ^ : " ;
    cin >> M;
    if(M == 0) cout << x << "^0 is : 1" << endl;
    pow = x;
    for (int i = 2; i <= M; ++i) {
        pow *= x;
        cout << x << "^" << i << " is : " << pow << endl;
    }
}
// 16
void piggyBank(){
    int penny,nickel,dime,quarter,dollar,result;
    const int Penny=1,Nickel=5,Dime=10,Quarter=25,Dollar=100;
    cout << "enter the number of penny,nickel,dime,quarter,dollar :";
    cin >> penny >> nickel >> dime >> quarter >> dollar;
    result = penny * Penny + nickel * Nickel + dime * Dime + quarter * Quarter + dollar * Dollar;
    cout << "the result in pennies is : " << result << endl;
    cout << "the result in dollars is : " << result/100 << endl;
}
// 17
void simpleCalc(){
    int number1,number2;
    char operation;
    cout << "enter the first and the second numbers : ";
    cin >> number1 >> number2;
    cout << "enter the operation : ";
    cin >> operation;
    switch (operation) {
        case '*':
            cout << "the result of " << number1 << operation << number2 << " is :" << number1 * number2;
            break;
        case '+':
            cout << "the result of " << number1 << operation << number2 << " is :" << number1 + number2;
            break;
        case '-':
            cout << "the result of " << number1 << operation << number2 << " is :" << number1 - number2;
            break;
        case '/':
            cout << "the result of " << number1 << operation << number2 << " is :" << number1 / number2;
            break;
        default:
            cout << "your operation is wrong so you can re-doit ";
            break;
    }
}
// 18
void sumUntil_99(){
    int result = 0 , number;
    while(true){
        cout << "enter the number that you want to add :";
        cin >> number;
        cout << "\n";
        if(number == -99){
            cout << "the result of the sum is : " << result;
            break;
        }
        result += number;
    }
}
// 19
void prime(){
    int number,counter,i=0;
    cout << "enter the number : ";
    cin >> number;
    counter = number;
    for(; counter > 1; counter--){
        if(number % counter == 0){
            i++;
        }
        if(i>1){
            break;
        }
    }
    if(i>1){
        cout << number << " is not prime";
    }else{
        cout << number << " is prime";
    }
}
// 20
void secondsTo(){
    int days,hours,minutes,time,temp;
    cout << "enter the time in seconds :";
    cin >> time;
    days = time / 60 / 60 / 24;
    temp = time - (days * 60 * 60 * 24);
    time = temp;
    hours = temp / 60 / 60;
    temp = time - (hours * 60 * 60);
    time = temp;
    minutes = temp / 60 ;
    temp = time - (minutes * 60 );
    printf("%d:%d:%d:%d",days,hours,minutes,temp);
}
// 21
void dayOfWeek(){
    int day;
    cout << "enter the day :";
    cin >> day;
    switch (day) {
        case 1:
            cout << "it's Saturday";
            break;
        case 2:
            cout << "it's Sunday";
            break;
        case 3:
            cout << "it's Monday";
            break;
        case 4:
            cout << "it's Tuesday";
            break;
        case 5:
            cout << "it's Wednesday";
            break;
        case 6:
            cout << "it's Thursday";
            break;
        case 7:
            cout << "it's Friday";
            break;
        default:
            cout << "you had enter a wrong number of day !" << endl;
            dayOfWeek();
    }
}
// 22
void aToz(){
    for (int i = 65; i < 91 ; ++i) {
        printf("%c\n",i);
    }
}
// 23
void ATMPin3(){
    const string balance = "45,000,000 DA";
    const int PIN = 1234;
    int i=0,pin;
    while(i<3){
        i++;
        cout << "enter the pin : ";
        cin >> pin;
        if (pin == PIN){
            cout << "your Balance is : " << balance;
            break;
        }else {
            cout << "your pin entered is wrong " << endl;
        }
    }
    if(i==3)cout << "your not able to access to the balance";
}
// 24
void digitOrUpperOrLower(){
        char x;
        int y;
        cin >> x;
        y = x;
        cout << y;
    if (y>= 48 && y<=57) cout << "IS DIGIT";
    if (y>= 65 && y<=90)cout << "ALPHA" << endl << "IS CAPITAL";
    if (y>= 97 && y<= 122) cout << "ALPHA" << endl << "IS SMALL";
}
// 25
void calcExpression(){
    int num1,num2;
    char operation='a';
    string expression,temp1="",temp2="";
    cin >> expression;
    for(int i=0;i<expression.size();i++){
        if(!(int(expression[i])>=48 && int(expression[i]<=57))){
            operation = expression[i];
        }else{
            if(operation == 'a'){
                temp1+=expression[i];
            }else{
                temp2+=expression[i];
            }
        }
    }
    num1=stoi(temp1);
    num2=stoi(temp2);
    switch (operation) {
        case '+':
            cout << num1 + num2;
            break;
        case '-':
            cout << num1 - num2;
            break;
        case '*':
            cout << num1 * num2;
            break;
        case '/':
            cout << num1 / num2;
            break;
    }
}
// 26
void firstDigit(){
    string num,fds;
    int fdi;
    cin >> num;
    fds = num[0];
    fdi = stoi(fds);
    if(fdi%2==0){
        cout << "EVEN";
    }else {
        cout << "ODD";
    }
}
int main() {
    //oddOrEven();
    //heirADriver();
    //driverWithRecommendation();
    //fullName();
    //halfNumber();
    //averagePassOrFail();
    //swipeNumbers();
    //circleArea();
    //circleAreaWithTriangle();
    //circleAreaWithArbitraryTriangle();
    //readUntilValidAge();
    //sumOodAndEven();
    //factorial();
    //powTo4();
    //powToM();
    //piggyBank();
    //simpleCalc();
    //sumUntil_99();
    //prime();
    //secondsTo();
    //dayOfWeek();
    //aToz();
    //ATMPin3();
    //digitOrUpperOrLower();
    //calcExpression();
    firstDigit();
    return 0;
}
