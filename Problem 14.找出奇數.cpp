//https://etutor2.itsa.org.tw/mod/topics/view.php?id=42736

#include <iostream>
using namespace std;

int main(void)
{
	int num;
    cin >> num;
    
    for(int i = 1; i <= num - 2; i++){
        if(i % 2 != 0){
            cout << i << " ";
        }
    }
    if((num - 1) % 2 == 0){
        cout << num << endl;
    }
    else{
        cout << num - 1 << endl;
    }
	return 0;
}
