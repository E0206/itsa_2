//https://etutor2.itsa.org.tw/mod/topics/view.php?id=43027

#include <iostream>
#include<iomanip>
using namespace std;

int main(void)
{
	int num;
    cin >> num;
    double total = 0, chi = 0, eng = 0, math = 0;
    for(int i = 0;i < num; i++){
        int a, b, c;
        cin >> a >> b >> c;
        total = total + a + b + c;
        chi += a;
        eng += b;
        math += c;
    }
    cout << fixed << setprecision(1) << total / (num * 3) << ' ' << chi / num << ' ' << eng / num << ' ' << math / num << endl;
	return 0;
}
