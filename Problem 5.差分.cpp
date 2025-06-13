// https://etutor2.itsa.org.tw/mod/topics/view.php?id=43018

#include <iostream>
using namespace std;

int main(void)
{
	int num;
    cin >> num;
    int front, back, diff;
    cin >> front;
    cout << front << ' ' ;
    for(int i = 1; i < num; i++){
        cin >> back;
        cout << back - front;
        if(i < num - 1)cout << " ";
        front = back;
    }
    cout << endl;
	return 0;
}
