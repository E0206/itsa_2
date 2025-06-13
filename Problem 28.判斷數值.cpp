//https://etutor2.itsa.org.tw/mod/topics/view.php?id=43085

#include <iostream>
using namespace std;

int main(void)
{
	
	int n;
    cin >> n;
    bool check = true;
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            check = false;
            break;
        }
    }
    if(n % 2 == 0 && check)cout << "even prime" << endl;
    else if(n % 2 == 0 && !check)cout << "even" << endl;
    else if(n % 2 == 1 && check) cout << "odd prime" << endl;
    else if(n % 2 == 1 && !check)cout << "odd" << endl;

	
	return 0;
}
