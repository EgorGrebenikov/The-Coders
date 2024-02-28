 #include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

void start();
void finish();

void test()
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
    
    for(int i = 0; i < 8; i++) // entering an answer
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
    
    if(percentage <= 40) //checking the correctness of the answer
    {
        cout << "You have " << percentage << "% correct answers, you should study more astronomy" << endl << endl;
    }
    else if(percentage > 40 && percentage <= 80)
    {
        cout << "You have " << percentage << "% correct answers, you have a good result, but the basic concepts should be repeated." << endl << endl;
    }
    else if(percentage > 80)
    {
        cout << "You have an excellent result - " << percentage << "%, keep it up!" << endl << endl;
    }
    
    finish();
}

void live_of_the_star()
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
    if(mass <= 8 && mass > 0) //result
    {
        cout << name << " will become a white dwarf." << endl;
        cout << "Stars weighing up to 8 solar masses end their lives relatively calmly. When their cores run out of hydrogen, they become red giants, burning helium and possibly heavier elements in their cores." << endl << endl;
    }
    if(mass > 8 && mass <= 30)
    {
        cout << name << " will become neural." << endl;
        cout << "Stars greater than 8 and less than 30 solar masses at the end of their lives can explode in the form of supernovae, after which a dense core remains - a neutron star" << endl << endl;
    }
    if(mass > 30)
    {
        cout << name << " will end its life even more dramatically, exploding as a supernova and leaving behind a black hole." << endl << endl;
    }
        
    if(mass < 1)
    {
        cout << "Please enter a number greater than 0!" << endl;
        live_of_the_star();
    }
    
    finish();
}

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
            cout << "If you jump with a height of " << height <<  " meter on Earth, then on Mercury you will jump with a height of "<< height * 2.65 << " meters.";
            break;
        case 2:
            cout << "If you jump with a height of " << height <<  " meter on Earth, then on Venus you will jump with a height of "<< height * 1.11 << " meters.";
            break;
        case 3:
            cout << "If you jump with a height of " << height <<  " meter on Earth, then on Mars you will jump with a height of "<< height * 2.64 << " meters.";
            break;
        case 4:
            cout << "If you jump with a height of " << height <<  " meter on Earth, then on Jupiter you will jump with a height of "<< height * 0.40 << " meters.";
            break;
        case 5:
            cout << "If you jump with a height of " << height <<  " meter on Earth, then on Saturn you will jump with a height of "<< height * 1.13 << " meters."; 
            break;
        case 6:
            cout << "If you jump with a height of " << height <<  " meter on Earth, then on Uranus you will jump with a height of "<< height * 1.15 << " meters."; 
            break;
        case 7:
            cout << "If you jump with a height of " << height <<  " meter on Earth, then on Neptune you will jump with a height of "<< height * 0.88 << " meters.";
            break;
        default:
            cout << "Invalid choice. Please restart the program.";
            return;
    }
    cout << endl << endl;
    
    finish();
}

void start()
{
    int choice;
    cout << "Now you can choose what you would like to try:" << endl << endl;
    cout << "How high can I jump on another planet?[1]" << endl;
    cout << "What will happen to my star?[2]" << endl;
    cout << "Solar System Quiz[3]" << endl << endl;
    cin >> choice; //task selection
    cout << endl;
    switch(choice)
    {
        case 1:
        gravity();
        case 2:
        live_of_the_star();
        case 3:
        test();
    }
    if(choice < 0 || choice > 2) //error
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
    if(choice == 1) //continue
    {
        cout << endl;
        start();
    } 
    if(choice == 0) //finish
    {
        cout << "Thank you for your attention!";
        exit(0);
    }
    if(choice != 0 && choice != 1) //error
    {
        cout << "Please enter the correct option!" << endl;
        finish();
    }
}

int main() 
{
    cout << "Hello! We are glad to see you! This is a project by The Coders team, " << endl << "here you will find a lot of useful and interesting things for yourself. " << endl << "Let's begin!" << endl << endl;
    start();
    return 0;
}