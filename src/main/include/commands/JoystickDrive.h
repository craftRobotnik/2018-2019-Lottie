/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once
#include "subsystems/DriveTrain.h"
//#include "subsystems/Appendage.h"
#include "RobotMap.h"
#include <frc/commands/Command.h>
#include <frc/WPILib.h>

class JoystickDrive : public frc::Command {
 public:
 JoystickDrive();
  void Initialize() override;
  void Execute() override;
  bool IsFinished() override;
  void End() override;
  void Interrupted() override;
};

