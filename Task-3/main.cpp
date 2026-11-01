#include <iostream> // Standard library
using namespace std; // So i dont have to type std:: everytime

int main(){
    string name; // Expecting names so using a string
    string weapon; // Expecting a number for the weapon however I want it to last if someone inputs something weird
    string path; // Expecting letters so using string
    string anything; // just used as a break in between dialogue so the reader has time to understand the story
    string pots; // Expecting Y or N  and pots=potion
    int dog; // Expecting a number in the dog path
    cout << "Welcome travaler! What is your name?" << endl;
    cin >> name; // Gets the name of the player
    cout << "Ah yes " << name << "!\nA wonderful name indeed!" << endl; // Implements the name as well as making it seem more personal because it does that :)
    cout << name << " you should be weary this world is a dangerous one and it is important to be able to handle threats from enemies and monsters alike." << endl;
    cout << "I have a starter weapon for you traverler, would you like a mage wand or a knights claymore?" << endl;
    cout << "1. Mage Wand\n2. Knights claymore?\n(1 or 2)" << endl;
    cin >> weapon; // WOWOWO time for a weapon now the story is getting a bit intersting :)
   if (weapon == "1"){ // alr so initially I used switch but it would go too far and end the whole thing if it wasnt a number so I swapped if and else if and made weapon a string instead of int
        cout << name << " I always knew you would become a Mage one day you know?" << endl;
   }
   else if(weapon == "2"){
    cout << name << " I always knew you would become a Swordsman one day you know?" << endl;
    }
    else { // If the weapon is anything besides 1 or 2
        cout << "Very well it appears you are indecisive. A mage will suit you better on your journey." << endl; // To handle numbers besides 1 or 2 and made it make sense too because a mage would be less in the face of an opponent so the dialogue relates :p
    }
        cout << "Now then travaler your journey awaits you would you like to go to the forest path on the left or the hells castle on the right?" << endl;
        cout << "(left or right)" << endl;
        cin >> path;
        if (path == "left" || path == "LEFT") { // the || lets it take left or LEFT
            cout << "Very well travaler I wish you a safe journey through the forest.\n(Type anything to continue)" << endl;
            cin >> anything; // Buffer time so the reader can comprehend before moving on
            cout << "Why hello travaler I am but a merchant may I perhaps intrest you in testing my agility potions?\n(y/n)" << endl; // Using Y or N for the dialgoue option 
            cin >> pots;
            if (pots == "y" || pots == "Y"){ // handles "y" and i put the capital version incase of caps lock being on for the user
                cout << "*You feel dizzy as the world starts spinning around you as a faint voice says*\nYou've suffered a terrible fate havent you?\n('Potion' Ending Unlocked)" << endl; // Funfact this is a Zelda's Majoras Mask Reference :)
            }
            else { // to handle the answer "n" or anything else entered 
                cout << "Oh well, I tried to be nice about it but I guess I'll just take you out the hard way.\n*He quickly weilds a blunt blade and strikes at you before you can react.*\nThus is the life of a rogue traveler dangerous and unperdicatble.\n('How did we get here?' Ending Unlocked)" << endl;
            }
        }
        else if (path == "right" || path == "RIGHT") { // the || lets it take right or RIGHT
            cout << "Very well travaler I wish you a safe journey to the hells castle.\n(Type anything to continue)" << endl;
            cin >> anything; // Buffer time so the reader can comprehend before moving on
            cout << "Along your path you see what appears to be a giant dog with three heads.\nIt sniffs you and appears to be fixated on your bag.\nWhat do you do?" << endl;
            cout << "1. Feed the dog some of your food\n2. Try to run away as fast as possible\n(1 or 2)" << endl;
            cin >> dog;
            switch (dog) {
            case 1:
                cout << "*Aww he starts spinning in circles and as appreciation shows you to a treasure chest containing enough riches for generations*\n('Good' Ending Unlocked)" << endl;  
            break;
            default: // Handles both the option of 2 as well as if they enter anything else
                cout << "The dog in a panic at your sudden movement attacks you leaving you to die an early death.\n('Bad Dog' Ending Unlocked)" << endl;
            break;
        }
    }
    else { // Ends the story quick if they dont give a valid input letting them try again by re running it if they would like
    cout << "Indeiciveness on the journey of a travaler would not serve you well.\nPerhaps you should give up on the dreams and try another time when you have grown." << endl;
}
return 0; // Return 0 for good habit
}
