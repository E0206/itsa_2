//https://etutor2.itsa.org.tw/mod/topics/view.php?id=42744

#include <iostream>
using namespace std;

int main(void)
{
	int a, b, c;
    cin >> a >> b >> c;
    if(!(((a + b) > c) && ((b + c) > a) && ((a + c) > b)))cout << "Not Triangle" << endl;
    else if(((a * a) + (b * b)) == (c * c))cout << "Right Triangle" << endl;
    else if(((a * a) + (b * b)) < (c * c))cout << "Obtuse Triangle" << endl;
    else if(((a * a) + (b * b)) > (c * c))cout << "Acute Triangle" << endl;
	return 0;
}
