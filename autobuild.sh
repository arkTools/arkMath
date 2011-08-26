#!/bin/bash

PS3='Please enter your choice: '
LIST="developer_build build grab_debian_dependencies package_source \
	package remake test clean END"
MAKEARGS="-j8"
echo 
echo 1\)developer_build: is used for development and you can start the scicoslab toolbox by typing scicoslab in the mavsim source directory
echo 2.\)build: is used for building before final installation to the system.
echo 3.\)grab_debian_dependencies: installs all the required packages for debian based systems \(ubuntu maverick/ debian squeeze,lenny\)
echo 4.\)package_source: creates a source package for distribution
echo 5.\)package: creates binary packages for distribution
echo 6.\)remake: calls make again after project has been configured as install or in source build
echo 7.\)test: run tests 
echo 8.\)clean: removes the build directory 

echo
select OPT in $LIST
do
	if [ $OPT = "developer_build" ] &> /dev/null
	then
		echo you chose in developer build
		mkdir -p build && cd build && cmake -DDEV_MODE:bool=TRUE .. && make $MAKEARGS
		exit 0
	elif [ $OPT = "build" ] &> /dev/null
	then
		echo you chose install build
		mkdir -p build && cd build && cmake .. && make $MAKEARGS
		exit 0
	elif [ $OPT = "grab_debian_dependencies" ] &> /dev/null
	then
		echo you chose to install debian dependencies
		sudo apt-get install cmake libqt4-dev libboost-all-dev libopenscenegraph-dev
		sudo apt-get install libgl1-mesa-dri libgl1-mesa-glx libglu1-mesa 
		exit 0

	elif [ $OPT = "remake" ] &> /dev/null
	then
		echo you chose to recall make on the previously configured build
		cd build && make $MAKEARGS
		exit 0

	elif [ $OPT = "package_source" ] &> /dev/null
	then
		echo you chose to package the source
		mkdir -p build && cd build && cmake .. && make package_source
		exit 0

	elif [ $OPT = "package" ] &> /dev/null
	then
		echo you chose to package the binary
		mkdir -p build && cd build && cmake .. && make package
		exit 0

	elif [ $OPT = "test" ] &> /dev/null
	then
		echo you chose to run the test suite 
		cd build && ctest
		exit 0

	elif [ $OPT = "clean" ] &> /dev/null
	then
		echo you chose to clean the build 
		rm -rf build

	elif [ $OPT = "END" ] &> /dev/null
	then
		exit 0
	fi
done
