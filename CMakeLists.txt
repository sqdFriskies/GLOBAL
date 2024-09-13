cmake_minimum_required(VERSION 3.20.3)


set(MY_PROJECT_NAME pipa_learning)

project (${MY_PROJECT_NAME})

set(PROJECT_COMPILE_OPTIONS
    -Werror
    -Wall)

add_compile_options(${PROJECT_COMPILE_OPTIONS})

set(    MY_SRC  
        #  college_tasks.cpp 
            mega_main_pipa.cpp
        # usefull_functions.cpp
    )

add_executable(${MY_PROJECT_NAME} ${MY_SRC})
#target_compile_definitions(${MY_PROJECT_NAME} PUBLIC -Wall)