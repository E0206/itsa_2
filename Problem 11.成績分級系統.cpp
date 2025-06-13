//https://etutor2.itsa.org.tw/mod/topics/view.php?id=43024

#include <iostream>
using namespace std;

int main(void)
{
	int a = 0, b = 0,  c = 0, d = 0, e = 0;
    int num;
    cin >> num;
    for(int i = 0; i < num; i++){
        int score;
        cin >> score;
        if(score < 60)e++;
        else if(score >= 60 && score < 70)d++;
        else if(score >= 70 && score < 80)c++;
        else if(score >= 80 && score < 90)b++;
        else if(score >= 90 && score <= 100)a++;
    }	
    cout << "優等 " << a << endl << "甲等 " << b << endl << "乙等 " << c << endl << "丙等 " << d << endl << "不及格 " << e << endl;
	
	return 0;
}
