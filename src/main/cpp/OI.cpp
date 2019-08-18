/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "OI.h"

#include <frc/WPILib.h>


using namespace frc;
OI::OI() {

Joy = std::make_unique <frc::Joystick> (0);
joyAppend = std::make_unique <frc::Joystick> (1);

button1 = std::make_unique <frc::JoystickButton>(joyAppend.get(),0);
button2 = std::make_unique <frc::JoystickButton>(joyAppend.get(),1);
button3 = std::make_unique <frc::JoystickButton>(joyAppend.get(),2);
button4 = std::make_unique <frc::JoystickButton>(joyAppend.get(),3);
//button5 = std::make_unique <frc::JoystickButton>(Joy.get(),4);



}
