//https://etutor2.itsa.org.tw/mod/topics/view.php?id=43017

#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int num;
    cin >> num;
    //vector<int> A;
    int total = 0;
    for(int i = 0; i < num; i++){
        int n;
        cin >> n;
        //A.push_back(n);
        total += n;
        if(i < num - 1)cout << total << " ";
    }
    cout << total << endl;
	return 0;
}
