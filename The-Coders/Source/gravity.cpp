#include "../Header files/gravity.h"
#include "../Header files/menu.h"

void gravity()
{
    int choice, choice2;
    float height;
    cout << "Here you can find out at what height you were bent down on the planets of the Solar system!" << endl << endl;
    cout << "Please, enter your jump height on Earth:" << endl;
    cin >> height; //jump height
    cout << endl;
    cout << "Please, choose a planet:" << endl << "- Mercury[1]" << endl << "- Venus[2]" << endl;
    cout << "- Mars[3]" << endl << "- Jupiter[4]" << endl << "- Saturn[5]" << endl;
    cout << "- Uranus[6]" << endl << "- Neptune[7]" << endl;
    cin >> choice; //planet selection
    cout << endl << endl;
    switch (choice) //calculating the height of the footing
    {
    case 1:
        cout << "If you jump with a height of " << height << " meter on Earth, then on Mercury you will jump with a height of " << height * 2.65 << " meters.";
        break;
    case 2:
        cout << "If you jump with a height of " << height << " meter on Earth, then on Venus you will jump with a height of " << height * 1.11 << " meters.";
        break;
    case 3:
        cout << "If you jump with a height of " << height << " meter on Earth, then on Mars you will jump with a height of " << height * 2.64 << " meters.";
        break;
    case 4:
        cout << "If you jump with a height of " << height << " meter on Earth, then on Jupiter you will jump with a height of " << height * 0.40 << " meters.";
        break;
    case 5:
        cout << "If you jump with a height of " << height << " meter on Earth, then on Saturn you will jump with a height of " << height * 1.13 << " meters.";
        break;
    case 6:
        cout << "If you jump with a height of " << height << " meter on Earth, then on Uranus you will jump with a height of " << height * 1.15 << " meters.";
        break;
    case 7:
        cout << "If you jump with a height of " << height << " meter on Earth, then on Neptune you will jump with a height of " << height * 0.88 << " meters.";
        break;
    default:
        cout << "Invalid choice. Please restart the program.";
        return;
    }
    cout << endl << endl;

    finish();
}