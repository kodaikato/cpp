#include <iostream>

using namespace std;

int main(){
    int a,b,c;

    string s;

    cin >> a >> b >> c;
    cin >> s;
    if(1<=a && a<=1000 && 1<=b && b<=1000 && 1<=c && c<=1000){
        cout << a+b+c << " " << s << endl;
    } else {
        cout << "error" << endl;
    }

}