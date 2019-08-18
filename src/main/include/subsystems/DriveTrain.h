#pragma once


#include <frc/WPILib.h>
#include "ctre/Phoenix.h"



class DriveTrain : public frc::Subsystem {
private:
    // It's desirable that everything possible under private except
    // for methods that implement subsystem capabilities

    WPI_VictorSPX * append = new WPI_VictorSPX (5);
    WPI_VictorSPX * barOne = new WPI_VictorSPX (6);
    WPI_VictorSPX * barTwo = new WPI_VictorSPX (7);
    
public:
    DriveTrain();
    void InitDefaultCommand() override;

    void ArcadeDrive(double x, double y);
    void FlingControl(double x);
    void turnBars(double w);



private:
    std::unique_ptr<frc::RobotDrive> drive;
    std::unique_ptr<frc::RobotDrive> drive2;

friend class OI;
};

