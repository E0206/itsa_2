//https://etutor2.itsa.org.tw/mod/topics/view.php?id=42735

#include <iostream>
using namespace std;

int main(void)
{
	int money;
    cin >> money;
    cout << "百元 " << money / 100 << endl;
    money = money % 100;
    cout << "十元 " << money / 10 << endl;
    money = money % 10;
    cout << "壹元 " << money << endl;
	return 0;
}
