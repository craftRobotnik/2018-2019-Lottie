#include "CommandBase.h"
//#include "commands/Appendage.h"
#include "subsystems/DriveTrain.h"
#include "OI.h"
#include <frc/commands/Scheduler.h>

std::unique_ptr<OI>CommandBase::oi =
            std::make_unique<OI>();

            std::unique_ptr<OI>CommandBase::oi2 =
            std::make_unique<OI>();

std::unique_ptr<DriveTrain>CommandBase::append=
            std::make_unique<DriveTrain>();

std::unique_ptr<DriveTrain>CommandBase::driveTrain =
            std::make_unique<DriveTrain>();

std::unique_ptr<DriveTrain>CommandBase::TurnBars = //maybe use these for buttons
          std::make_unique<DriveTrain>();

CommandBase::CommandBase(const std::string &name) :
        frc::Command(name) {

        }