//https://etutor2.itsa.org.tw/mod/topics/view.php?id=42738

#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a = n / 100;
    int b = (n % 100) / 10;
    int c = n % 10;
        a = a * a * a;
        b = b * b * b; 
        c = c * c * c;
    if((a + b + c) == n){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" <<endl;
    }
    return 0;
}
