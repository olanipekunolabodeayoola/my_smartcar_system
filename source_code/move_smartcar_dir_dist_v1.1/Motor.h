// Motor.h
// d24m08y2024
// Class header file
// Rationale: Named it 'Motor' as opposed to 'Motors' because in the future
// one can create an array of motors like in the example on p. 460
// of Horton & Van Weert, (2023).
// Goal: To move smartcar forward using class implementation
// Bibliography"
// 1.) McWhorter, (2020), Introduction to Robotics and Robot Training Tutorials
// 2.) Horton and Van Weert, (2023), C++ 23
//

// Class declaration of prototypes:
class Motor
{
  public:
      Motor();    // User defined default constructor prototypes
      ~Motor();    // " " " destructor " "

      explicit Motor(int f_pinNum);    // " " constructor prototype with 'explicit' keyword...
                                       // because this is a single argument constructor.
      Motor(const Motor& f_pinNum);    // User defined copy constructor prototype

      void setPinNumber(int f_pinNum);    // Member function prototype to assign
                                          // member variable with pin number
      int getPinNumber();    // "" to retrieve value of member variable
  private:
      int m_pinNumber;    // Member variable    

};    // Never forget to add ';' to make this a class declaration
