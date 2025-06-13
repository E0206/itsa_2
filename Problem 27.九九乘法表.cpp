//https://etutor2.itsa.org.tw/mod/topics/view.php?id=43084

#include <iostream>
using namespace std;

int main(void)
{
	int a, b;
    cin >> a >> b;
    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= b; j++){
            cout << i << "x" << j << "=" << i * j << endl;
        }
    }
	
	
	return 0;
}
