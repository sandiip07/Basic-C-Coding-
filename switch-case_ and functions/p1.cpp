#include <iostream>
using namespace std;

int main()
{

    int ammount;
    int hundredNote, fiftyNote, twintyNote, oneRupeeNote, reminder;
    cout << "enter the ammount : ";
    cin >> ammount;

    switch (1)
    {
    case 1:
        hundredNote = ammount / 100;
        cout << "Total hundred rupee notes are :" << hundredNote << endl
             << "\n";
        reminder = ammount - (100 * hundredNote);

    case 2:
        fiftyNote = reminder / 50;
        cout << "Total Fifty rupee notes are :" << fiftyNote << endl
             << "\n";
        reminder = reminder - (50 * fiftyNote);

    case 3:
        twintyNote = reminder / 20;
        cout << "Total Twinty rupee notes are :" << twintyNote << endl
             << "\n";
        reminder = reminder - (20 * twintyNote);

    case 4:
        oneRupeeNote = reminder / 1;
        cout << "Total one rupee notes are :" << oneRupeeNote << endl
             << "\n";
    }
}