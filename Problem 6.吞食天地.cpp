//https://etutor2.itsa.org.tw/mod/topics/view.php?id=43019

#include <iostream>
#include <vector>
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
    int start, end;
    cin >> start >> end;
    int total = 0;
    for(int i = start - 1; i <= end - 1; i++){
        total += arr[i];
    }
    cout << total << endl;
	return 0;
}
