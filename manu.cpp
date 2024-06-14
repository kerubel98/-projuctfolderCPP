#include "manu.h"

int mainu()
{
    int choise;

    do
    {

        char delimiter = '\n';
        Event Userevent;
        fstream file;
        cout << "1 for printing calender" << endl;
        cout << "2 for Adding Events" << endl;
        cout << "3 for Viewing Events" << endl;
        cout << "4 for Searching Event" << endl;
        cout << "5 Deleteing Event" << endl;
        cin >> choise;
        switch (choise)
        {
        case 1:
            cout << "enter calender year" << endl;
            int year;
            cin >> year;
            runCalender(year);
            break;
        case 2:

            cout << "enter event Id" << endl;
            cin >> Userevent.Id;
            cout << "Enter eventname: ";
            Userevent.getName();
            cout << "enetr event date: ";
            cin >> Userevent.date;
            cout << "eneter event detaile: ";
            Userevent.getdetaile();
            createEvent(file, "/home/cppProject/event.txt", Userevent);
            break;
        case 3:
            veiwEvent(file, "/home/cppProject/event.txt", Userevent);
            break;
        case 4:
            searchEvent(file, "/home/cppProject/event.txt", Userevent);
            break;

        default:
            break;
        }
    } while (choise);

    return 0;
}