#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    char user_chosen;
    // я выбрал размер 5x5
    cout << "\t\tВам приветствует бестолковая, однако чрезвычайно надменная программа\n";
    cout << "Прошу, выберите циферку (a,b,c,d,e,f,h,g,i,j), под ней значится фигура -> "; cin >> user_chosen;




    switch (user_chosen) {
    case('a'):
        for (int i = 5, j = 0; i > 0; i--, j++) {
            cout << string(j,' ') << string(i, '*') << endl;
        }
        break;
    case('b'):
        for (int i = 0; i < 5; i++) {
            cout << string(i, '*') << endl;
        }
        break;
    case('c'):
        for (int i = 5, j = 0; i > 0; i -= 2, j++) {
            cout << string(j, ' ') << string(i, '*') << string(j, ' ') << endl;
        }
        break;
    case('d'):
        for (int i = 1, j = 2; i < 6; i += 2, j--) {
            cout << string(j, ' ') << string(i, '*') << string(j, ' ') << endl;
        }
        break;
    case('e'):
        for (int i = 5, j = 0; i > 0; i -= 2, j++) {
            cout << string(j, ' ') << string(i, '*') << string(j, ' ') << endl;
        }
        for (int i = 3, j = 1; i < 6; i += 2, j--) {
            cout << string(j, ' ') << string(i, '*') << string(j, ' ') << endl;
        }
        break;
    case('f'):
        for (int i = 1, j = 6; i < 5; i++, j -= 2) {
            cout << string(i, '*') << string(j, ' ') << string(i, '*') << endl;
        }
        for (int i = 3, j = 2; i > 0; i--, j += 2) {
            cout << string(i, '*') << string(j, ' ') << string(i, '*') << endl;
        }
        break;
    case('g'):
        for (int i = 1; i < 5; i++) {
            cout << string(i, '*') << endl;
        }
        for (int i = 3; i > 0; i--) {
            cout << string(i, '*') << endl;
        }
        break;
    case('h'):
        for (int i = 1, j = 3; i < 5; i++, j--) {
            cout << string(j, ' ') << string(i, '*') << endl;
        }
        for (int i = 3, j = 1; i > 0; i--, j++) {
            cout << string(j, ' ') << string(i, '*') << endl;
        }
        break;
    case('i'):
        for (int i = 5; i > 0; i--) {
            cout << string(i, '*') << endl;
        }
        break;
    case('j'):
        for (int i = 1, j = 4; i < 6; i++, j--) {
            cout << string(j, ' ') << string(i, '*') << endl;
        }
        break;
    }
}









    //к
     /*for (int i = 1, j = 4; i < 6; i++, j--) {
        cout << string(j, ' ')  << string(i, '*') << endl;
    }*/


    //и
    /*for (int i = 5; i > 0; i--) {
        cout << string(i, '*') << endl;
    }*/


    //з
    /*for (int i = 1, j = 3; i < 5; i++, j--) {
        cout << string(j, ' ') << string(i, '*') << endl;
    }
    for (int i = 3, j = 1; i > 0; i--, j++) {
        cout << string(j, ' ') << string(i, '*') << endl;
    }*/


    //ж
    /*for (int i = 1; i < 5; i++) {
        cout << string(i, '*') << endl;
    }
    for (int i = 3; i > 0; i--) {
        cout << string(i, '*') << endl;
    }*/


    //е
    /*for (int i = 1, j = 6; i < 5; i++,j-=2) {
        cout << string(i, '*') << string(j, ' ') << string(i, '*') << endl;
    }
    for (int i = 3, j = 2; i > 0; i--, j += 2) {
        cout << string(i, '*') << string(j, ' ') << string(i, '*') << endl;
    }*/


    //д
    /*for (int i = 5, j = 0; i > 0; i -= 2, j++) {
        cout << string(j, ' ') << string(i, '*') << string(j, ' ') << endl;
    }
    for (int i = 3, j = 1; i < 6; i += 2, j--) {
        cout << string(j, ' ') << string(i, '*') << string(j, ' ') << endl;
    }*/


    //г
    /*for (int i = 1, j = 2; i < 6; i += 2, j--) {
        cout << string(j, ' ') << string(i, '*') << string(j, ' ') << endl;
    }*/


    //в
    /*for (int i = 5, j = 0 ; i > 0; i-=2,j++) {
        cout << string(j,' ') << string(i, '*') << string(j, ' ') << endl;
    }*/


    //a
    /*for (int i = 5, j = 0; i > 0; i--, j++) {
        cout << string(j,' ') << string(i, '*') << endl;
    }*/


    //б
   /* for (int i = 0; i < 5; i++) {
        cout << string(i, '*') << endl;
    }*/





