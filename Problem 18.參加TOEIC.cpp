//https://etutor2.itsa.org.tw/mod/topics/view.php?id=42742

#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
	int num;
    cin >> num;
    int max = 0, gold = 0, middle = 0;
    double mean = 0;
    for(int i = 0; i < num; i++){
        int score;
        cin >> score;
        if(score > max)max = score;
        if(score >= 900)gold++;
        if(score >= 600 && score <= 700)middle++;
        mean += score;
    }
    mean /= num;
    cout << max << endl << gold << endl << middle << endl << fixed << setprecision(1) << mean << endl;
	return 0;
}
