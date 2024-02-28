#include "../Header files/star.h"
#include "../Header files/menu.h"

void liveOfTheStar()
{
    string name;
    int mass;
    cout << "Here you can find out how your star will end his life!" << endl;
    cout << "Please, enter name of your star:" << endl;
    cin >> name; //entering a name
    cout << "Enter the weight of your star (for convenience, we will calculate the weight in solar mass, for example: Alpha Cam = 31 solar mass):" << endl;
    cout << "The mass of " << name << " = ";
    cin >> mass; //mass input
    cout << endl;
    if (mass <= 8 && mass > 0) //result
    {
        cout << name << " will become a white dwarf." << endl;
        cout << "Stars weighing up to 8 solar masses end their lives relatively calmly. When their cores run out of hydrogen, they become red giants, burning helium and possibly heavier elements in their cores." << endl << endl;
    }
    if (mass > 8 && mass <= 30)
    {
        cout << name << " will become neural." << endl;
        cout << "Stars greater than 8 and less than 30 solar masses at the end of their lives can explode in the form of supernovae, after which a dense core remains - a neutron star" << endl << endl;
    }
    if (mass > 30)
    {
        cout << name << " will end its life even more dramatically, exploding as a supernova and leaving behind a black hole." << endl << endl;
    }

    if (mass < 1)
    {
        cout << "Please enter a number greater than 0!" << endl;
        liveOfTheStar();
    }

    finish();
}