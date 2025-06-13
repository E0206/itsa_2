//https://etutor2.itsa.org.tw/mod/topics/view.php?id=43021

#include <iostream>
#include<vector>
using namespace std;

int main(void)
{
	vector<int> arr;
    int num;
    cin >> num;
    for(int i = 0; i < 5; i ++){
        int n;
        cin >> n; 
        arr.push_back(n);
    }
    int count = 0;
    for(int i = 0; i < num; i++){
        for(int  j = 0; j < 5; j++){
            int n;
            cin >> n;
            for(int k = 0; k < 5; k++){
                if(arr[k] == n){
                    count ++;
                    arr[k] = 0;
                }
            }
        }
    }
	cout << count << endl;
	return 0;
}
