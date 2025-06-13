//https://etutor2.itsa.org.tw/mod/topics/view.php?id=43057

#include <iostream>
using namespace std;

int main(void)
{
	string animal;
    cin >> animal;
    if(animal == "dog") cout << "狗" << endl;
	else if(animal == "cat") cout << "貓" << endl;
	else if(animal == "duck") cout << "鴨" << endl;
    else if(animal == "cow") cout << "牛" << endl;
    else if(animal == "fox") cout << "狐" << endl;
    else if(animal == "貓") cout << "cat" << endl;
	else if(animal == "鴨") cout << "duck" << endl;
    else if(animal == "牛") cout << "cow" << endl;
    else if(animal == "狗") cout << "dog" << endl;
    else if(animal == "狐") cout << "fox" << endl;
	return 0;
}
