#include <iostream>

using namespace std;

int wiek;

int main()

{
    cout << "Podaj swoj wiek:" << endl;
    cin >> wiek;

    if (wiek <18)
    {
        cout << "Nie jestes pelnoletni. Nie mozesz zostac prezydentem";
    }
    else if ((wiek >= 18)&&(wiek <35))
    {
        cout << "Jestes pelnoletnia. Nie mozesz zostac prezydentem";
    }
    else
    {
        cout << "Jestes pelnoletni i mozesz zostac prezydentem";
    }

    return 0;
}
