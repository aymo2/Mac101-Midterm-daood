#include <iostream> // Including the standard library for things like cout and cin
using namespace std; // I AM NOT GOING TO TYPE OUT STD:: EVERYTIME

int main() {
    int rows; // Variable for the ammount of rows on the tree int bc expecting #
    cout << "Hello there!! How many rows do you want on the tree?" << endl; // Asking the question for rows
    cin >> rows; // Recieving the ammount of desired rows
    for (int i = 1; i <= rows; i++){
        for (int j = 1; j <= rows - i; j++){
        cout << " ";
    } // This part of the loop gives us the spaces that decrease as the rows increase giving a reverse staircase effect
    
    for (int j = 1; j <= (2 * i - 1); j++){
        cout << "*";
    } // This puts the stars in place and increases it more as the rows increase 
    cout << endl; // Puts us on the next row
}
cout << "Here is your tree Merry Christmas :)" << endl; // Bc it fits with the theme
    return 0; // Nowadays return 0 is not needed but is good practice and we should know of it so we are not confused
}
