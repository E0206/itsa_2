//https://etutor2.itsa.org.tw/mod/topics/view.php?id=42747

#include <iostream>
using namespace std;

int main(void)
{
	int a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;
    if((a * x + b * y) == (c * (-1)))cout << "YES" << endl;
    else cout << "NO" << endl;
	return 0;
}
