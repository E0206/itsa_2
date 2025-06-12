//https://etutor2.itsa.org.tw/mod/topics/view.php?id=42739

#include <iostream>
using namespace std;

int main(void)
{
	int num;
    cin >> num;
    for(int i = 0; i < num; i++){
        double BMI;
        cin >> BMI;
        if(BMI < 18.5){
            cout << "體重過輕" << endl;
        }
        if(BMI >= 18.5 && BMI < 24){
            cout << "正常" << endl;
        }
        if(BMI >= 24 && BMI < 28){
            cout << "體重過重" << endl;
        }
        if(BMI >= 28){
            cout << "肥胖" << endl;
        }
    }
	return 0;
}
