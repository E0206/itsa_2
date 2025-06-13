//https://etutor2.itsa.org.tw/mod/topics/view.php?id=43022

#include <iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main(void)
{
	char ch;
    vector<int> arr;
    int num;
    while(cin >> num){
        arr.push_back(num);
        cin >> ch;
    }
    sort(arr.begin(), arr.end());  // 升序排序
    int big = 0, small = 0, small_num;
    for(int i = 0; i < arr.size(); i++){
        big += arr[arr.size() - 1 - i] * (pow(10 , (arr.size() - i - 1)));
        small += arr[i] * (pow(10 , (arr.size() - i - 1)));
        //cout << big << " " << small << endl;
    }
    cout << big - small << endl;
	return 0;
}
