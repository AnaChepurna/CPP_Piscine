cmake_minimum_required(VERSION 3.9)
project(piscine_cpp)

set(CMAKE_CXX_STANDARD 11)

add_executable(piscine_cpp
        day00/ex00/megaphone.cpp
        day00/ex01/contact.cpp
        day00/ex01/contact.hpp
        day00/ex01/main.cpp
        day00/ex02/Account.class.cpp
        day00/ex02/Account.class.hpp
        day00/ex02/tests.cpp day01/ex00/Pony.cpp day01/ex00/Pony.hpp day01/ex00/main.cpp day01/ex08/Human.cpp day01/ex08/Human.hpp day01/ex08/main.cpp day01/ex09/Logger.cpp day01/ex09/Logger.hpp day01/ex09/main.cpp day01/ex10/main.cpp day02/ex00/Fixed.cpp day02/ex00/Fixed.h day02/ex00/main.cpp day02/ex04/utils.cpp day02/ex04/utils.h day04/ex01/AWeapon.cpp day04/ex01/AWeapon.hpp day04/ex01/PlasmaRifle.cpp day04/ex01/PlasmaRifle.hpp day04/ex01/PowerFist.cpp day04/ex01/PowerFist.hpp)
