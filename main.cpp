#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:

 int
 float
 bool
 double
 char
 unsigned int

 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    remember:
    Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'

    int myNumber = 23;
    int vehicleSpeed = 42;
    int ammoInWeapon = 10;

    float pi = 3.14f; 
    float gravity = 9.81f;
    float localTemperature = 23.4f;

    bool isAlive = true;
    bool isDead = false;
    bool isOn = true;

    double heightOfPlayer = 6.23562;
    double distance = 95.3290592;
    double weight = 92.34242;

    char letter = 'q';
    char grade = 'A';
    char color = 'R';

    unsigned int health = 100;
    unsigned int weaponDamage = 97;
    unsigned int armor = 12;
    
    ignoreUnused(number, myNumber, vehicleSpeed, ammoInWeapon, pi, gravity, localTemperature, isAlive, isDead, isOn, heightOfPlayer, distance, weight, letter, grade, color, health, weaponDamage, armor); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
int findBiggerNumber(int num1, int num2)
{
    ignoreUnused(num1, num2);
    return {};    
}

/*
 2)
 */
int storeRandomNumber(int min, int max)
{
    ignoreUnused(min, max);
    return {};
}

/*
 3)
 */
bool buyGun(int ammo, int bullets, double gunWeight = 0.5443)
{
    ignoreUnused(ammo, bullets, gunWeight);
    return {};
}

/*
 4)
 */
bool checkForFoodExpiration(int daysLeft, char foodGrade, bool isExpired)
{
    ignoreUnused(daysLeft, foodGrade, isExpired);
    return {};
}

/*
 5)
 */
char findMiddleLetter(char firstLetter, char secondLetter, char thirdLetter, bool isMiddle = false)
{
    ignoreUnused(firstLetter, secondLetter, thirdLetter, isMiddle);
    return {};
}

/*
 6)
 */
void createNewAccount(int creditScore, float creditLimit, float creditUsed, int creditRemaining, bool isAccountActive = true)
{
    ignoreUnused(creditScore, creditLimit, creditUsed, creditRemaining, isAccountActive);
}

/*
 7)
 */
float calculateGPA(int grade1, int grade2, int grade3, int grade4, int grade5, float gpaWeight = 4.0f)
{
    ignoreUnused(grade1, grade2, grade3, grade4, grade5, gpaWeight);
    return{};
}

/*
 8)
 */
unsigned int multiplyNumbers(unsigned int num1, unsigned int num2)
{
    ignoreUnused(num1, num2);
    return {};
}

/*
 9)
 */
void createObjectDimensions(float length, float width, float height, float weight, float volume, float surfaceArea = 0.5f)
{
    ignoreUnused(length, width, height, weight, volume, surfaceArea);
}

/*
 10)
 */

float startNewGame(float health, float damage, float armor, float healing, float healingAmount = 0.5f, int magicType = 3, char magicTypeLetter = 'A')
{
    ignoreUnused(health, damage, armor, healing, healingAmount, magicType, magicTypeLetter);
    return {};
}

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto findBigger = findBiggerNumber(6, 9);
    
    //2)
    auto storeRandom = storeRandomNumber(4, 25);
    
    //3)
    auto gun = buyGun(20, 30);
    
    //4)
    auto foodExpired = checkForFoodExpiration(7, 'A', true);
    
    //5)
    auto middleLetter = findMiddleLetter('A', 'B', 'C');
    
    //6)
    createNewAccount(800, 5000, 2000, 3000, false);
    
    //7)
    auto gpa = calculateGPA(90, 80, 70, 60, 50, 3.2f);
    
    //8)
    auto multiply = multiplyNumbers(6, 8);
    
    //9)
    createObjectDimensions(2.5f, 4.5f, 5.5f, 6.5f, 7.5f, 8.5f);
    
    //10)
    auto game = startNewGame(100, 50, 30, 20, 1.5f);
    
    
    ignoreUnused(carRented, findBigger, storeRandom, gun, foodExpired, middleLetter, gpa, multiply, game);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
