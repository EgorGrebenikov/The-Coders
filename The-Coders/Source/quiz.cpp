#include "../Header files/quiz.h"
#include "../Header files/menu.h"


void quiz()
{
    int order[8], result = 0;
    string question1, question2;

    cout << endl;

    cout << "Task number 1: " << endl << "Enter the correct order of planets in the solar system, starting from the closest planet to the Sun." << endl; //list with planets
    cout << "- Earth[1]" << endl;
    cout << "- Mercury[2]" << endl;
    cout << "- Mars[3]" << endl;
    cout << "- Neptune[4]" << endl;
    cout << "- Uranus[5]" << endl;
    cout << "- Saturn[6]" << endl;
    cout << "- Jupiter[7]" << endl;
    cout << "- Venus[8]" << endl << endl;

    for (int i = 0; i < 8; i++) // entering an answer
    {
        cin >> order[i];
    }

    result += order[0] == 2 ? 10 : 0; //checking the correctness of answers
    result += order[1] == 8 ? 10 : 0;
    result += order[2] == 1 ? 10 : 0;
    result += order[3] == 3 ? 10 : 0;
    result += order[4] == 7 ? 10 : 0;
    result += order[5] == 6 ? 10 : 0;
    result += order[6] == 5 ? 10 : 0;
    result += order[7] == 4 ? 10 : 0;

    cout << endl;

    cout << "Task number 2: " << endl << "Between which planets is the asteroid belt located?" << endl << endl;
    cout << "A) Saturn and Neptune" << endl;
    cout << "B) Mercury and Venus" << endl;
    cout << "C) Mars and Jupiter" << endl << endl;
    cin >> question1;
    result += (question1 == "c" || question1 == "C") ? 10 : 0; //checking the correctness of the answer

    cout << endl;

    cout << "Task number 3: " << endl << "In what year was Pluto deprived of its planetary status?" << endl;
    cout << "A)2006" << endl << "B)2020" << endl << "C)2001" << endl;
    cin >> question2;
    result += (question2 == "a" || question2 == "A") ? 10 : 0; //checking the correctness of the answer

    int percentage = result;

    cout << endl;

    if (percentage <= 40) //checking the correctness of the answer
    {
        cout << "You have " << percentage << "% correct answers, you should study more astronomy" << endl << endl;
    }
    else if (percentage > 40 && percentage <= 80)
    {
        cout << "You have " << percentage << "% correct answers, you have a good result, but the basic concepts should be repeated." << endl << endl;
    }
    else if (percentage > 80)
    {
        cout << "You have an excellent result - " << percentage << "%, keep it up!" << endl << endl;
    }

    finish();
}