#include "../Header files/menu.h"
#include "../Header files/quiz.h"
#include "../Header files/star.h"
#include "../Header files/gravity.h"

void start()
{
    cout << "Hello! We are glad to see you! This is a project by The Coders team, " << endl << "here you will find a lot of useful and interesting things for yourself. " << endl << "Let's begin!" << endl << endl;


    int choice;
    cout << "Now you can choose what you would like to try:" << endl << endl;
    cout << "How high can I jump on another planet?[1]" << endl;
    cout << "What will happen to my star?[2]" << endl;
    cout << "Solar System Quiz[3]" << endl << endl;
    cin >> choice; //task selection
    cout << endl;
    switch (choice)
    {
    case 1:
        gravity();
    case 2:
        liveOfTheStar();
    case 3:
        quiz();
    }
    if (choice < 0 || choice > 2) //error
    {
        cout << "Please, enter a valid number!" << endl << endl;
        start();
    }
}


void finish()
{
    int choice;
    cout << "Do you want to continue?" << endl << "Yes[1] or No[0]?" << endl;
    cin >> choice;
    cout << endl;
    if (choice == 1) //continue
    {
        cout << endl;
        start();
    }
    if (choice == 0) //finish
    {
        cout << "Thank you for your attention!";
        exit(0);
    }
    if (choice != 0 && choice != 1) //error
    {
        cout << "Please enter the correct option!" << endl;
        finish();
    }
}