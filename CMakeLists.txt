cmake_minimum_required(VERSION 4.1)
project(mini_projects)

set(CMAKE_CXX_STANDARD 14)

add_executable(mini_projects
        .idea/inspectionProfiles/Project_Default.xml
        .idea/.gitignore
        .idea/mini-projects.iml
        .idea/modules.xml
        .idea/vcs.xml
        .idea/workspace.xml
        "Simple Calculator/README.md"
        "Simple Calculator/simpleCalculator.cpp"
        README.md
        "BankAccountSimulator/bankAccountSimulator.cpp"
        DiceRollingSimulator/diceRollingSimulator.cpp
        Stopwatch/stopwatch.cpp
        StringAnalyzer/stringAnalyzer.cpp
        MultiplicationTable/multiplicationTable.cpp
        testing.cpp
        BankAccountSimulator/bankAccountSimulator.cpp
        BankAccountSimulator/bankAccountSimulator.cpp
)
