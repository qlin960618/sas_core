/*
# Copyright (c) 2016-2023 Murilo Marques Marinho
#
#    This file is part of sas_core.
#
#    sas_core is free software: you can redistribute it and/or modify
#    it under the terms of the GNU Lesser General Public License as published by
#    the Free Software Foundation, either version 3 of the License, or
#    (at your option) any later version.
#
#    sas_core is distributed in the hope that it will be useful,
#    but WITHOUT ANY WARRANTY; without even the implied warranty of
#    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#    GNU Lesser General Public License for more details.
#
#    You should have received a copy of the GNU Lesser General Public License
#    along with sas_core.  If not, see <https://www.gnu.org/licenses/>.
#
# ################################################################
#
#   Author: Murilo M. Marinho, email: murilomarinho@ieee.org
#
# ################################################################*/
#pragma once

#include <sas_core/sas_robot_driver.hpp>
#include <eigen3/Eigen/Dense>

using namespace Eigen;

namespace sas
{

struct RobotDriverExampleConfiguration
{
    std::string name;
    VectorXd initial_joint_positions;
};

class RobotDriverExample: RobotDriver
{
protected:
    const RobotDriverExampleConfiguration configuration_;
    VectorXd joint_positions_;

public:
    RobotDriverExample(RobotDriverExample&) = delete;
    RobotDriverExample()=delete;

    RobotDriverExample(const RobotDriverExampleConfiguration& configuration, std::atomic_bool* break_loops);

    virtual VectorXd get_joint_positions() override;
    virtual void set_target_joint_positions(const VectorXd& set_target_joint_positions_rad) override;

    virtual void connect() override;
    virtual void disconnect() override;

    virtual void initialize() override;
    virtual void deinitialize() override;
};
}
