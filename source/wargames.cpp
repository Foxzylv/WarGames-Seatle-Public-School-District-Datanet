#include <iostream>
using namespace std;

int main()
{
    cout << "PBP 11/278 PR3 TIP # 45                          TTY 34/984" << endl;
    cout << "WELCOME TO THE SEATTLE PUBLIC SCHOOL DISTRICT DATANET" << endl;
    cout << "PLEASE LOGGIN WITH USER PASSWORD: " << endl;
    string password;
    getline(cin, password);
    if (password == "pencil")
    {
        cout << "PASSWORD VERIFIED" << endl;
        system("cls");
        cout << "PLEASE ENTER STUDENT NAME: ";
        string studentname;
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
        if (studentname == "Mack, Jennifer K")
        {
        cout << "                                                            " << endl;
        cout << "CLASS #   COURSE TITLE    GRADE   TEACHER   PERIOD    ROOM" << endl;
        cout << "___________________________________________________________" << endl;
        cout << "S-202     BIOLOGY 2         F      LIGGET      3      214" << endl;
        cout << "E-325     ENGLISH 11B 2     A      ROBINSON    1      114" << endl;
        cout << "H-221     WORLD HISTORY 11B B      DWYER       2      108" << endl;
        cout << "M-106     HOME ECONOMICS    D      MARKE       4      315" << endl;
        cout << "PE-02     PHYSICALEDUCATION A      COMSTOCK    1      GYM" << endl;
        cout << "M-122     CALCULUS 1        B      LOGAN       6      240" << endl;
        cout << "                                   " << endl;
        cout << "TO CHANGE ANY ITEM, MOVE CURSOR TO DESIRED POSITION" << endl;
        cout << "AND ENTER NEW VALUE";
        std::getchar();
        }
    }
    //if (studentname = "David Lightman")
    //{
    //   cout << "CLASS #   COURSE TITLE    GRADE   TEACHER   PERIOD    ROOM"; 
    //}
    //if (studentname = "David")
    //{
    //  cout << "CLASS #   COURSE TITLE    GRADE   TEACHER   PERIOD    ROOM";
    //}
}
