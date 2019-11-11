cmake_minimum_required(VERSION 3.1)
project(EigenSample)

set(CMAKE_CXX_STANDARD 11)




#find_package(EIGEN REQUIRED)
find_package(Eigen3 REQUIRED)
message(STATUS "EIGEN included at ${EIGEN3_INCLUDE_DIR}")


set(THIRD_PARTY_LIB /home/wasku/Code/cppCode/thirdPartyLibrary)
set(LBFGS_PACKAGE ${THIRD_PARTY_LIB}/LBFGSpp)
set(LBFGS_INCLUDE ${LBFGS_PACKAGE}/include)

include_directories(${LBFGS_INCLUDE})

AUX_SOURCE_DIRECTORY(./src/test11 DIR_SRCS)
AUX_SOURCE_DIRECTORY(./src DIR_SRCS)

#add_executable(EigenSample main.cpp  src/test11/MdisFunc.cpp src/TCallback.cpp)
add_executable(EigenSample main.cpp  ${DIR_SRCS})

