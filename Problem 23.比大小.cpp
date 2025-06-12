//https://etutor2.itsa.org.tw/mod/topics/view.php?id=42749

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int a, b, c;
    string order;
    cin >> a >> b >> c >> order;
    if(order == "Asc"){
        if(a > b && b > c){
            cout << c << "<" << b << "<" << a << endl;
        }
        else if(a > c && c > b){
            cout << b << "<" << c << "<" << a << endl;
        }
        else if(b > c && c > a){
            cout << a << "<" << c << "<" << b << endl;
        }
        else if(b > a && a > c){
            cout << c << "<" << a << "<" << b << endl;
        }
        else if(c > a && a > b){
            cout << b << "<" << a << "<" << c << endl;
        }
        else if(c > b && b > a){
            cout << a << "<" << b << "<" << c << endl;
        }
    }
    else if(order == "Desc"){
        if(a > b && b > c){
            cout << a << ">" << b << ">" << c << endl;
        }
        else if(a > c && c > b){
            cout << a << ">" << c << ">" << b << endl;
        }
        else if(b > c && c > a){
            cout << b << ">" << c << ">" << a << endl;
        }
        else if(b > a && a > c){
            cout << b << ">" << a << ">" << c << endl;
        }
        else if(c > a && a > b){
            cout << c << ">" << a << ">" << b << endl;
        }
        else if(c > b && b > a){
            cout << c << ">" << b << ">" << a << endl;
        }
    }
	return 0;
}
