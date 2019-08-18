

#include "commands/JoystickDrive.h"
#include "subsystems/DriveTrain.h"
#include "CommandBase.h"
#include <frc/WPILib.h>
#include "commands/Appendage.h"
#include "ctre/Phoenix.h"
#include <frc/Commands/Command.h>
//#include "OI.h"

Appendage::Appendage()  {
    // Use Requires() here to declare subsystem dependencies
    // eg. Requires(Robot::chassis.get());
   
    //Requires(CommandBase::driveTrain.get());
    lift = new WPI_VictorSPX(5);
    twistOne = new WPI_VictorSPX(6);
    twistTwo = new WPI_VictorSPX(7);
    //class OI active;
     //find which one it is whenever the homie let u

}

void Appendage::TurnBarsPos()
{
  
  //if (active.button1->WhenPressed)
 // {
    twistOne->Set(.5);
    twistTwo->Set(.5);
  //}

}

void Appendage::TurnBarsNeg()
{
  twistOne->Set(-.5);
  twistTwo->Set(-.5);
}
void Appendage::LiftControl(int x)
{
  lift->Set(x);
}

//void Appendage::Execute()
//{
  
//}