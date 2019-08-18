/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/



#include "commands/JoystickDrive.h"
#include "subsystems/DriveTrain.h"
//#include "subsystems/Appendage.h"
#include "CommandBase.h"
#include <frc/WPILib.h>


JoystickDrive::JoystickDrive() {
    // Use Requires() here to declare subsystem dependencies
    // eg. Requires(Robot::chassis.get());
   
   Requires(CommandBase::driveTrain.get());
}

// Called just before this Command runs the first time
void JoystickDrive::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void JoystickDrive::Execute() {
    CommandBase::driveTrain->ArcadeDrive(CommandBase::oi->Joy->GetZ(),CommandBase::oi->Joy->GetY());
    //CommandBase::append->FlingControl(CommandBase::oi2->joyAppend->GetY());
   //CommandBase::append-> DriveTrain::FlingControl(0.5);
    

    //{
       if (CommandBase::oi2->button2->Get())
       {
           CommandBase::driveTrain->turnBars(.7);
       }
       else
       {
           CommandBase::driveTrain->turnBars(0.0);
       }

       if (CommandBase::oi2->button3->Get())
       {
           CommandBase::driveTrain->FlingControl(-.40);
       }
       else if (CommandBase::oi2->button4->Get())
       {
           CommandBase::driveTrain->FlingControl(.40);
       }
       else
       {
           CommandBase::driveTrain->FlingControl(0.0);
       }

    //}
}
bool JoystickDrive::IsFinished()
{
    return false;
}
// Called once after isFinished returns true
void JoystickDrive::End() {
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void JoystickDrive::Interrupted() {

}