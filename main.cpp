#include <iostream>

using namespace std;

int main()
{
    int age;
    string hobby;
    string degree;
    string skinType;

    cout << "enter your age:" << endl;
    cin>>age;
    cout << "enter your hobby:" << endl;
    cin>>hobby;
    cout << "enter your skin type:" << endl;
    cin>>skinType;

    if(age<18 && hobby!="cooking" && skinType!="brown")
        cout<< "she is not a perfect match" << endl;
     else if(age>18 && hobby=="cooking" && skinType=="brown")
           cout<< "She is not a perfect match for you" << endl;
          else if(age==18 && hobby!="cooking" && skinType=="brown")
             cout<< "she is not a perfect match for you" << endl;
             else if(age==18 && hobby=="cooking" && skinType!="brown")
                 cout<< "she is not the perfect match" << endl;
                 else
                    cout<< "She is the one for you and i believe that god brought us together for the reason" << endl;
    return 0;
}
