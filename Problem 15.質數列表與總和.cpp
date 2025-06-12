//https://etutor2.itsa.org.tw/mod/topics/view.php?id=42737

#include <iostream>
using namespace std;

int main(void)
{
	int num;
    cin >> num;
    int arr[num];
    int count = 0;
    int find = 2;
    while(count < num){
        bool check = true;
        for(int i = 2; i < find; i++){
            if(find % i == 0){
                check = false;
                break;
            }
            else{
                check = true;
            }
        }
        if(check){//這個find是質數
            arr[count] = find;
            count ++;
        }
        find++;
    }
    int total = 0;
    for(int i = 0; i < num - 1; i++){
        cout << arr[i] << ",";
        total += arr[i];
    }
    total += arr[num - 1];
    cout << arr[num - 1] << endl << total << endl;
	return 0;
}
