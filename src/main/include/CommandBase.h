#ifndef COMMANDBASE_H_
#define COMMANDBASE_H_

#include "memory"
#include "string"
#include "frc/commands/Command.h"
#include "OI.h"
#include "subsystems/DriveTrain.h"
#include <frc/WPILib.h>
#include "commands/Appendage.h"

class CommandBase: public frc::Command {
public:
    CommandBase(const std::string& name);
    CommandBase() = default;

    static std::unique_ptr<OI> oi;
    static std::unique_ptr<OI> oi2;
    static std::unique_ptr<DriveTrain> driveTrain;
    static std::unique_ptr<DriveTrain> append;
    static std::unique_ptr<DriveTrain> TurnBars;


};


#endif /* COMMANDBASEH */