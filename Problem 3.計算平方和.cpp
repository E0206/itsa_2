//https://etutor2.itsa.org.tw/mod/topics/view.php?id=43016

#include <iostream>
using namespace std;

int main(void)
{
	int arr[6];
    int total;
    for(int i = 0; i < 6; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < 6; i++){
        total += (arr[i] * arr[i]);
    }
    cout << total << endl;
	
	
	return 0;
}
