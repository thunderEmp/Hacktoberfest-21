// HackerEarth
// Ali_and_helping_innocent_people.cpp
// Basic Programming

#include <iostream>
#include <string>
using namespace std;

bool isNotVowel(char ch)
{
    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'Y')
        return false;
    else
        return true;
}

int num(char ch)
{
    int x;
    switch (ch)
    {
    case '0':
        x = 0;
        break;
    case '1':
        x = 1;
        break;
    case '2':
        x = 2;
        break;
    case '3':
        x = 3;
        break;
    case '4':
        x = 4;
        break;
    case '5':
        x = 5;
        break;
    case '6':
        x = 6;
        break;
    case '7':
        x = 7;
        break;
    case '8':
        x = 8;
        break;
    case '9':
        x = 9;
        break;
    default:
        x = -1;
    }

    return x;
}

int main()
{
    string str;
    cin >> str;
    int x1 = num(str[0]);
    int x2 = num(str[1]);
    int x4 = num(str[3]);
    int x5 = num(str[4]);
    int x6 = num(str[5]);
    int x8 = num(str[7]);
    int x9 = num(str[8]);

    if (str.length() > 9)
    {
        cout << "valid";
        goto exit;
    }
    else
    {
        if (((x1 + x2) / 2 == 0) && ((x4 + x5) / 2 == 0) && ((x5 + x6) / 2 == 0) && ((x8 + x9) / 2 == 0) && isNotVowel(str[2]))
        {
            cout << "valid";
            goto exit;
        }

        else
        {
            cout << "invalid";
            goto exit;
        }
    }

exit:
    return 0;
}
