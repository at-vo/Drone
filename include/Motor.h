/**
 * Motor Header
 * */
#ifndef MOTOR_H
#define MOTOR_H

#include "Configuration.h"

class Motor{
  
    // Defines all the variables that will be used in the construction of the motor object.
    private:
        int speed;
        int range;
        int frequency;
        unsigned int pin;

    // Constructor function for the motor object.
    public:
    	// Specifies a base constructor, constructor with partial and full params, and a deconstructor function.
        Motor(int pin);
        Motor(int pin, int frequency);
        Motor(int pin, int frequency, int pwm_range);
        ~Motor();

        /** Getter Functions **/
        int getPin();
        int getFrequency();
        int getDutyRange();
        int getSpeed();

        /** Setter Functions **/
        void setFrequency(int frequency);
        void setDutyRange(int range);
        int setSpeed(int speed);

  		// Stop condition function.
        int stop();
        bool isRunning() {
            return (this -> speed != 0);
        }
};
#endif
