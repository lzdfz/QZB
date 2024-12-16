#!/bin/bash

source /opt/ros/foxy/setup.sh

cd /home/ros2_alg_bridge

rm -rf build
rm -rf install
rm -rf log

colcon build --symlink-install --packages-select fq