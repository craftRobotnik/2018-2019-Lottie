/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        /
/ Open Source Software - may be modified and shared by FRC teams. The code   /
/ must be accompanied by the FIRST BSD license file in the root directory of /
/ the project.                                                               /
/----------------------------------------------------------------------------*/

#include "subsystems/DriveTrain.h"
#include "commands/JoystickDrive.h"
#include <frc/drive/DifferentialDrive.h>
#include <frc/PWMVictorSPX.h>
#include <frc/WPILib.h>
//#include "subsystems/Appendage.h"


using namespace frc;



// Called just before this Command runs the first time



DriveTrain::DriveTrain() : Subsystem("DriveTrain") {
 WPI_VictorSPX * left = new WPI_VictorSPX (1);
 WPI_VictorSPX * right = new WPI_VictorSPX (3);
 WPI_VictorSPX * left2 = new WPI_VictorSPX (2);
 WPI_VictorSPX * right2 = new WPI_VictorSPX (4);
 drive = std::make_unique<frc::RobotDrive>(left,right);
 //drive2 = std::make_unique<frc::RobotDrive>(left2,right2);




}


void DriveTrain::InitDefaultCommand() {
    SetDefaultCommand(new JoystickDrive());

}
void DriveTrain::ArcadeDrive(double x, double y)
{
    
    drive->ArcadeDrive(-x,y);
   // drive2->ArcadeDrive(-x,-y);
    //drive2->SetMaxOutput(0.5);
    drive->SetMaxOutput(0.3);

      // drive->ArcadeDrive(-x,-y);
    //drive2->ArcadeDrive(-x,y);
}

void DriveTrain::FlingControl(double x)
{
    if (x > 0)
    {
        append->Set(.3);
    }
    
    if (x < 0)
    {
        append->Set(-.3);
    }

    if (x==0)
    {
         append->Set(0.0);
    }

}

void DriveTrain::turnBars(double w)
{
    barOne->Set(w);
}
