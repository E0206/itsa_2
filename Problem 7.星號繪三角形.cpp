//https://etutor2.itsa.org.tw/mod/topics/view.php?id=43060

#include <iostream>
using namespace std;

int main(void)
{
	int n;
    cin >> n;
    if(n == 1){
    cout << "    *" <<endl;
    cout << "   * *" << endl;
    cout << "  *   *"  << endl;
    cout << " *     *" << endl;
    cout << "*********" << endl;
    }
    else if (n == 2){
        for(int i = 0; i < 5; i++){
            for(int j = 4 - i - 1; j >= 0; j--){
                cout << " ";
            }
            for(int j = 0; j < 2 * i + 1; j++){
                cout << "*";
            }
            cout << endl;
        }
    }
	else if (n == 3){
        for(int i = 0; i < 5; i++){
            for(int j = 0; j < i; j++){
                cout << " ";
            }
            for(int j = 2 * (4 - i); j >= 0; j--){
                cout << "*";
            }
            cout << endl;
        }
    }
	
	return 0;
}
