//https://etutor2.itsa.org.tw/mod/topics/view.php?id=42743

#include <iostream>
using namespace std;

int main(void)
{
	int a, b, c;
    cin >> a >> b >> c;
    if(((a + b) > c) && ((b + c) > a) && ((a + c) > b))cout << "fit" << endl;
    else cout << "unfit" << endl;
	return 0;
}
