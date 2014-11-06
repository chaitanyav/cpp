cpp
===
My Experiments with C++


Building googletest
----------------------
    unzip gtest-1.7.0.zip
    cd $GTEST_DIR
    mkdir build
    cd build
    c++ -isystem ../include -I.. -g -Wall -Wextra -pthread -c ../src/gtest-all.cc
    c++ -isystem ../include -I.. -g -Wall -Wextra -pthread -c ../src/gtest_main.cc
    ar -rv libgtest.a gtest-all.o gtest_main.o

Using gtest (use the files in enhanced_fraction folder in this repo)

    clang++ -Wall -g -I${GTEST_DIR}/include -pthread -c fraction.cpp
    clang++ -Wall -g -I${GTEST_DIR}/include -pthread -c fraction_test.cpp
    clang++ -Wall -I${GTEST_DIR}/include -L${GTEST_DIR}/build -lpthread -lgtest fraction.o fraction_test.o -o fraction_test

References:
-----------
* https://github.com/Offirmo/googletest-reference-sheet
* [Google test cheatsheet](http://offirmo.net/googletest-reference-sheet/)
* https://code.google.com/p/googletest/
