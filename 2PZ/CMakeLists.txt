cmake_minimum_required(VERSION 3.10)
project(Calculator)

# Установка стандартов C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Добавляем библиотеку калькулятора
# add_library(calculator calculator.cpp)

# Добавляем исполняемый файл основной программы
add_executable(calculator_main 2PZ.cpp calculator.cpp)
target_link_libraries(calculator_main calculator)

# Настройка Google Test (если вы добавили его как внешнюю библиотеку)
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/release-1.11.0.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Подключаем Google Test к проекту
enable_testing()

# Создаем тесты
add_executable(test_calculator test_calculator.cpp)
target_link_libraries(test_calculator calculator gtest_main)
add_test(NAME CalculatorTests COMMAND test_calculator)
