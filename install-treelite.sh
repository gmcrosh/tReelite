#!/bin/sh
set -ex

cd ..
git clone --recursive https://github.com/dmlc/treelite.git
cd treelite/
mkdir build
cd build/
sudo apt-get install cmake
cmake ..
sudo make install
sudo ldconfig
