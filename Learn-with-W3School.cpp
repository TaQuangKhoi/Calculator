#include <iostream>
#include <string>
#include <cmath>
#include <cstdio>

#include <fstream> // allows us to work with files.

/* #include <clocale>
#include <cstdlib>
#include <io.h>
#include <fcntl.h> */
using namespace std;

void scanWhatYInput();


int main () {
    cout << "Calculator DH20LT \n" ;
        /* \n is used more often and is the preferred way*/
    cout << "I love you, C++" << endl; // endl = end line
    cout << "What do you want at me? \n";

        // _setmode(_fileno(stdin), _O_U16TEXT);
        // _setmode(_fileno(stdout), _O_U16TEXT);

        // std::wcout << L"Toi yeu em" <<std::endl;

    const string myName = "Keios";
    int myAge = 18;
    const float PI = 3.14;
    int minutesPerHour = 60;

    float f1 = 35e3;
    double d1 = 12E4;
    cout << f1;
    cout << d1;

    cout << endl;
    bool isCodingFun = true;
    bool isFishTasty = false;
    cout << isCodingFun;  // Outputs 1 (true)
    cout << isFishTasty;  // Outputs 0 (false)

    cout << endl;
    char a = 65, b = 66, c = 67; //you can use ASCII values to display certain characters
    cout << a;
    cout << b;
    cout << c;

    cout << endl;
    cout << myName;
    cout << endl;
        // std::wcout << L"Chao. Đay la tieng Viet. \n";
    wcout << "I want you \n";
    bool isF = false;
    bool isT = true;
    int xF = 2;
    int myNum = 525;               // Integer (whole number without decimals)
    double myFloatNum = 5.99;    // Floating point number (with decimals)
    char myLetter = 'D';         // Character
    string myText = "Hello";     // String (text)
    bool myBoolean = true;       // Boolean (true or false)
    int x;
    cout << "Write what you want to calculate here : \n";
    // cin >> x;

    int sum1 = 100 + 50;

    int y = 1;

    y<<=3;
    cout << "Gia tri la " << y;
    cout << endl;

    string firstName = "John ";
    string lastName = "Doe";
    string fullName = firstName.append(lastName);
    cout << fullName;
    cout << "\nThe length of the fullName is " << fullName.length();
    cout << "\nI can use size() function to show length(), Length is " << fullName.size() << endl;

    string myString = "Hello";
    cout << myString[1] << endl;
    // Outputs H

    myString[0] = 'J';
    cout << myString << endl;
    // Outputs Jello instead of Hello

    cout << "Type your full name: ";
    //getline (cin, fullName);
    cout << "Your name is: " << fullName << endl;

    cout << sqrt(64) << endl;
    cout << round(2.6) << endl;
    cout << log(1) << endl;

    //if a = ""
    //string CN = 8;
    int whatDay;
    //cout << "Today is what day? : "; cin >> whatDay;

    int day = whatDay;
    switch (day) {
      case 2:
        cout << "Monday\n";
        break;
      case 3:
        cout << "Tuesday\n";
        break;
      case 4:
        cout << "Wednesday\n";
        break;
      case 5:
        cout << "Thursday\n";
        break;
      case 6:
        cout << "Friday\n";
        break;
      case 7:
        cout << "Saturday\n";
        break;
      case 8:
        cout << "Sunday\n";
        break;
      default:
        cout << "You are not in the time river \n";
    }

    /*int ii;
    //cout << "What number? : "; cin >> ii;
    int i = 0;
    while (i < ii) {
      cout << i << "\n";
      i++;
    }*/

    cout << "DO WHILE----------------------\n";

    /*int d = 0;
    do {
      cout << d << "\n";
      d++;
    }
    while (d < 5);*/

    cout << "FOR LOOP----------------------\n";

    /*for (int i = 3; i < 2; i++) {
      cout << i << "\n";
    }*/

    cout << "C++ CONTINUE in FOR LOOP----------------------\n";

    /*for (int i = 0; i < 10; i++) {
      if (i == 4) {
        continue;
      }
      cout << i << "\n";
    }*/

    cout << "C++ CONTINUE in FOR LOOP----------------------\n";

    int e = 0;
    while (e < 10) {
      cout << e << "\n";
      e++;
      if (e == 6) {
        break;
      }
    }



    return 0 ; //it ends the main function
};

class MyClass {
};
