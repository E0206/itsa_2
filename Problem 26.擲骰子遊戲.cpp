//https://etutor2.itsa.org.tw/mod/topics/view.php?id=43083

#include <iostream>
using namespace std;

int main(void)
{
	int a, b, c;
    cin >> a >> b >> c;
    int total = a + b + c;
    if( total >9)cout << total << " H" << endl;
    else cout << total << " L" <<endl;
	
	
	return 0;
}
