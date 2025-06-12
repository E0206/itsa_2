//https://etutor2.itsa.org.tw/mod/topics/view.php?id=42748

#include <iostream>
using namespace std;

int main(void)
{
	int x, y;
    cin >> x >> y;
    if((x * x + y * y) <= 10000)cout << "inside" << endl;
    else cout << "outside" << endl;
	return 0;
}
