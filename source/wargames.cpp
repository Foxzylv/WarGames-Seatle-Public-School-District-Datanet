#include <iostream>
#include<windows.h>
using namespace std;

int main()
{
    Sleep(1000);
    bool password_is_correct;
    string studentname;
    cout << "PBP 11/278 PR3 TIP";
    Sleep(70);
    cout << "# 45                          ";
    Sleep(70);
    cout << "TTY 34/984" << endl;
    cout << "WELCOME TO THE SE";
    Sleep(70);
    cout << "ATTLE PUBLIC SCHOOL D";
    Sleep(70);
    cout << "ISTRICT DATANET" << endl;
    Sleep(70);
 do 
 {
    cout << "" << endl;
    cout << "PLEASE LOGGIN WI";
    Sleep(70);
    cout << "TH USER PASSWORD: ";
    string password;
    getline(cin, password);
    if (password == "pencil")
    {
        bool password_is_correct = true;
        cout << " " << endl;
        cout << "PASSWORD VERIFIED" << endl;
        Sleep(1000);
        system("cls");
     do
     {
        cout << "PLEASE EN";
        Sleep(200);
        cout << "TER STUDENT NAME: ";
        getline(cin, studentname);
        if (studentname == "Lightman, David L" || studentname == "lightman, david l")
        {
        cout << "                                                            " << endl;
        cout << "CLASS"; 
        Sleep(100);
        cout << "#   ";
        Sleep(100);
        cout << "COURSE ";
        Sleep(100);
        cout << "TITLE    ";
        Sleep(100);
        cout << "GRADE   ";
        Sleep(100);
        cout << "TEACHER   ";
        Sleep(100);
        cout << "PERIOD    ";
        Sleep(100);
        cout << "ROOM" << endl;
        Sleep(100);
        cout << "_________";
        Sleep(100);
        cout << "________________";
        Sleep(100);
        cout << "____________";
        Sleep(100);
        cout << "______________________" << endl;
        Sleep(100);
        cout << "S-202     ";
        Sleep(100);
        cout << "BIOLOGY ";
        Sleep(100);
        cout << "2         ";
        Sleep(100);
        cout << "F      ";
        Sleep(100);
        cout << "LIGGET      ";
        Sleep(100);
        cout << "3      ";
        Sleep(100);
        cout << "214" << endl;
        Sleep(100);
        cout << "E-314     ";
        Sleep(100);
        cout << "ENGLISH ";
        Sleep(100);
        cout << "11B       ";
        Sleep(100);
        cout << "D      ";
        Sleep(100);
        cout << "TURNMAN     ";
        Sleep(100);
        cout << "5      ";
        Sleep(100);
        cout << "172" << endl;
        Sleep(100);
        cout << "H-221     ";
        Sleep(100);
        cout << "WORLD HISTORY ";
        Sleep(100);
        cout << "11B ";
        Sleep(100);
        cout << "C      ";
        Sleep(100);
        cout << "DWYER       ";
        Sleep(100);
        cout << "2      ";
        Sleep(100);
        cout << "108" << endl;
        Sleep(100);
        cout << "M-106     ";
        Sleep(100);
        cout << "TRIG ";
        Sleep(100);
        cout << "2            ";
        Sleep(100);
        cout << "B      ";
        Sleep(100);
        cout << "DICKERSON   ";
        Sleep(100);
        cout << "4      ";
        Sleep(100);
        cout << "315" << endl;
        Sleep(100);
        cout << "PE-02     ";
        Sleep(100);
        cout << "PHYSICALEDUCATION ";
        Sleep(100);
        cout << "C      ";
        Sleep(100);
        cout << "COMSTOCK    ";
        Sleep(100);
        cout << "1      ";
        Sleep(100);
        cout << "GYM" << endl;
        Sleep(100);
        cout << "M-122     ";
        Sleep(100);
        cout << "CALCULUS ";
        Sleep(100);
        cout << "1        ";
        Sleep(100);
        cout << "B      ";
        Sleep(100);
        cout << "LOGAN       ";
        Sleep(100);
        cout << "6      ";
        Sleep(100);
        cout << "240" << endl;
        Sleep(100);
        cout << "                                   " << endl;
        Sleep(100);
        cout << "TO ";
        Sleep(100);
        cout << "CHANGE ";
        Sleep(100);
        cout << "ANY ITEM, ";
        Sleep(100);
        cout << "MOVE CURSOR ";
        Sleep(100);
        cout << "TO DESIRED ";
        Sleep(100);
        cout << "POSITION " << endl;
        Sleep(100);
        cout << "AND ENTER NEW VALUE";
        Sleep(100);
        std::getchar();
        }
      }
      while (studentname != "Lightman, David L"); //while student name is not "Lightman, David L" it will loop back to "do" statement at line 23 
    }
  }
  while (!password_is_correct); //while password is not "pencil" it will loop back to "do" statement at line 11 
}
