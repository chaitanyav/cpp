cpp
===
My Experiments with C++


Using gtest (use the files in enhanced_fraction folder in this repo)

    clang++ -Wall -g -I${GTEST_DIR}/include -pthread -c fraction.cpp
    clang++ -Wall -g -I${GTEST_DIR}/include -pthread -c fraction_test.cpp
    clang++ -Wall -I${GTEST_DIR}/include -L${GTEST_DIR}/build -lpthread -lgtest fraction.o fraction_test.o -o fraction_test

References:
