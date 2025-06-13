//https://etutor2.itsa.org.tw/mod/topics/view.php?id=43020

#include <iostream>
#include<vector>
using namespace std;

int main(void)
{
	int num;
    cin >> num;
    vector<int> arr;
    for(int i = 0; i < num; i++){
        int n;
        cin >> n;
        arr.push_back(n);
    }
    int count = 0, front_sum = 0, back_sum = 0;
    for(int i = 0; i < num; i++){
        front_sum += arr[i];
        back_sum +=arr[num - 1 - i];
        if(front_sum == back_sum)count++;
    }
    cout << count << endl;
	return 0;
}
