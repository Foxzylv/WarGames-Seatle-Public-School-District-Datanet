#include <iostream>
#include<windows.h>
using namespace std;

int main()
{
    bool password_is_correct;
    string studentname;
    cout << "PBP 11/278 PR3 TIP # 45                          TTY 34/984" << endl;
    cout << "WELCOME TO THE SEATTLE PUBLIC SCHOOL DISTRICT DATANET" << endl;
 do 
 {
    cout << "PLEASE LOGGIN WITH USER PASSWORD: " << endl;
    string password;
    getline(cin, password);
    if (password == "pencil")
    {
        {
        bool password_is_correct = true;
        cout << "PASSWORD VERIFIED" << endl;
        Sleep(1000);
        system("cls");
     do
     {
        cout << "PLEASE ENTER STUDENT NAME: ";
        getline(cin, studentname);
        if (studentname == "Lightman, David L")
        {
        cout << "                                                            " << endl;
        cout << "CLASS #   COURSE TITLE    GRADE   TEACHER   PERIOD    ROOM" << endl;
        cout << "___________________________________________________________" << endl;
        cout << "S-202     BIOLOGY 2         F      LIGGET      3      214" << endl;
        cout << "E-314     ENGLISH 11B 2     D      TURNMAN     5      172" << endl;
        cout << "H-221     WORLD HISTORY 11B C      DWYER       2      108" << endl;
        cout << "M-106     TRIG 2            B      DICKERSON   4      315" << endl;
        cout << "PE-02     PHYSICALEDUCATION C      COMSTOCK    1      GYM" << endl;
        cout << "M-122     CALCULUS 1        B      LOGAN       6      240" << endl;
        cout << "                                   " << endl;
        cout << "TO CHANGE ANY ITEM, MOVE CURSOR TO DESIRED POSITION" << endl;
        cout << "AND ENTER NEW VALUE";
        std::getchar();
        }
     }
    while (studentname != "Lightman, David L"); //while student name is not "Lightman, David L" it will loop back to "do" statement at line 23
        }  
    }
  } 
    while (!password_is_correct); //while password is not "pencil" it will loop back to "do" statement at line 11
}
