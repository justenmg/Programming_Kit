/*Arduino Progamming Kit V1.0
 * Developed by Justen Gardner
 * July 2018
 * justenmg@gmail.com
 */

/*This is your first Arduino coding Project!
 * In these projects, you will learn strategies for 
 * coding in the Arduino Integrated Development Environment,
 * Arduino IDE for short. That is this window! 
 * Here, we code using the C programming language and many
 * of the libraries (like pinMode, DigitalRead, etc.) that
 * Arduino has written for us.
 * This is a comment. You can make large blocks of comment
 * by using the slash and asterisk before and after the 
 * comment: /*comment*/
 */

//you can aso make single-line comments with two slashes.

//comments are used to help people understand the code you write.
//below are #define statements. The hashtag or pound symbol is used to define macros and include libraries outside your main functions.
//the first word after the #define is the macro- it is the name you are giving to the value. After the space comes the value that name represents.  
//the name is always in all-caps  
#define UP A1 //use: #define NAME value
#define DOWN 5
#define LEFT A2
#define RIGHT A0
#define X 12
#define Y 7
#define B 8
#define A 13
#define LED_1 9
#define LED_2 10
#define LED_3 11
#define SPEAKER 2
#define PWM 6
//these are all the pins available to us on the development board

//below is the setup function definition. It runs ince, before our code runs. We use it to initialize things to their starting state.
void setup() 
{

  //the pinMode() function helps us declare if a pin is acting as an input or output. use: pinMode(pin, input/output);
  //The options for a pin are INPUT, OUTPUT, and INPUT_PULLUP. THis last option enables the pull-up resistors, which help us tell when a button is pressed.
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
  pinMode(LED_3, OUTPUT);
  pinMode(X,INPUT_PULLUP);
  pinMode(Y,INPUT_PULLUP);
  pinMode(B,INPUT_PULLUP);

}

//below is the loop function definition. All the things in this function will run repeatedly, an infinite number of times.
void loop() 
{

  //use an if(condition){action} statement to make something happen only if a certain condition is met. The condition goes inside the parentheses
  //and the action goes inside the curly braces.
  if(!digitalRead(X))
    {
      digitalWrite(LED_1,HIGH);
    }
  else
    {
      digitalWrite(LED_1,LOW);
    }

    //Add some other functionality using the buttons and the lights!
  }
