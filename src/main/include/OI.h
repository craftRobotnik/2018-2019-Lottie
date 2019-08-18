/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once
#include <frc/WPILib.h>
class OI {

 public:
  OI();
  
  std::unique_ptr <frc::Joystick> Joy;
  std::unique_ptr <frc::Joystick> joyAppend;
  std::unique_ptr<frc::JoystickButton> button1;
  std::unique_ptr<frc::JoystickButton> button2;
  std::unique_ptr<frc::JoystickButton> button3;
  std::unique_ptr<frc::JoystickButton> button4;

 friend class DriveTrain;
};

//make function for buttons, make pointer call them