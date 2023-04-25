#include <sas_core/examples/sas_robot_driver_example.hpp>
#include <iostream>

sas::RobotDriverExample::RobotDriverExample(const RobotDriverExampleConfiguration &configuration, std::atomic_bool *break_loops):
    RobotDriver(break_loops),
    configuration_(configuration)
{

}

VectorXd sas::RobotDriverExample::get_joint_positions()
{
    return joint_positions_;
}

void sas::RobotDriverExample::set_target_joint_positions(const VectorXd &set_target_joint_positions_rad)
{
    if(joint_positions_.size() != set_target_joint_positions_rad.size())
        throw std::runtime_error("sas::RobotDriverExample::set_target_joint_positions invalid size for set_target_joint_positions_rad");
    joint_positions_ = set_target_joint_positions_rad;
}

void sas::RobotDriverExample::connect()
{
    std::cout << "Connecting to " << configuration_.name << std::endl;
}

void sas::RobotDriverExample::disconnect()
{
    std::cout << "Disconnecting from " << configuration_.name << std::endl;
}

void sas::RobotDriverExample::initialize()
{
    std::cout << "Initializing " << configuration_.name << std::endl;
    joint_positions_ = configuration_.initial_joint_positions;
}

void sas::RobotDriverExample::deinitialize()
{
    std::cout << "Deinitializing " << configuration_.name << std::endl;
}
