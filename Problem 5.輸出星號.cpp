//https://etutor2.itsa.org.tw/mod/topics/view.php?id=43058

#include <iostream>
#include<cmath>
using namespace std;

int main(void)
{
	int a;
    cin >> a;
    for(int i = 4; i >= 0; i--){
        int num = (a / static_cast<int>(pow(10, i))) % 10;
        for(int j = 0; j < num; j++){
            cout << "*";
        }
        cout << endl;
    }
	return 0;
}
