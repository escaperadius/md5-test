cmake_minimum_required(VERSION 3.15)
PROJECT(PocoMD5 CXX)

find_package(Poco REQUIRED)

ADD_EXECUTABLE(md5 md5.cpp)
target_link_libraries(${PROJECT_NAME} Poco::Poco)
