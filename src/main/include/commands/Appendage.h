

#pragma once
#include "subsystems/DriveTrain.h"
//#include "OI.h"
#include "RobotMap.h"
#include "CommandBase.h"
#include <frc/commands/Command.h>
#include <frc/WPILib.h>
using namespace frc;

class Appendage : public frc::Command {
    
     //figure out what name of thing
    

 public:
  WPI_VictorSPX * lift = new WPI_VictorSPX (5); 
  WPI_VictorSPX * twistOne = new WPI_VictorSPX (6); 
  WPI_VictorSPX * twistTwo = new WPI_VictorSPX (7); 



 Appendage();
 void LiftControl(int x);
 void TurnBarsPos();
 void TurnBarsNeg();

  //void Initialize() override;
  //void Execute() override;
  //bool IsFinished() override;
  //void End() override;
  //void Interrupted() override;

 friend class DriveTrain;
};

