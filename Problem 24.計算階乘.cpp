//https://etutor2.itsa.org.tw/mod/topics/view.php?id=42750

#include <iostream>
using namespace std;

int main(void)
{
	int num;
    cin >> num;
    for(int i = 0; i < num; i++){
        int test;
        cin >> test;
        if(test == 0){
            cout << 1 << endl;
            continue;
        }
        long int ans = 1;
        for(int j = 1; j <= test; j++){
            ans *= j;
        }
        cout << ans << endl;
    }
	return 0;
}
