#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here
TEST_CASE("Task A"){
    CHECK(isDivisibleBy(100, 25) == true);
    CHECK(isDivisibleBy(35, 17) == false);
    CHECK(isDivisibleBy(100, 0) == false);
    CHECK(isDivisibleBy(100, -100) == true);
}

TEST_CASE("Task B"){
    CHECK(isPrime(-1) == false);
    CHECK(isPrime(0) == false);
    CHECK(isPrime(13) == true);
    CHECK(isPrime(1) == false);
    CHECK(isPrime(2) == true);
}

TEST_CASE("Task C"){
    CHECK(nextPrime(-1) == 2);
    CHECK(nextPrime(0) == 2);
    CHECK(nextPrime(17) == 19);
    CHECK(nextPrime(22) == 23);
}

TEST_CASE("Task D"){
    CHECK(countPrimes(-10, 1) == 0);
    CHECK(countPrimes(1,2) == 1);
    CHECK(countPrimes(11,19) == 4);
    CHECK(countPrimes(62,66) == 0);
}

TEST_CASE("Task E"){
    CHECK(isTwinPrime(-1) == false);
    CHECK(isTwinPrime(0) == false);
    CHECK(isTwinPrime(3) == true);
    CHECK(isTwinPrime(61) == true);
    CHECK(isTwinPrime(86) == false); 
    CHECK(isTwinPrime(2) == false);
}

TEST_CASE("Task F"){
    CHECK(nextTwinPrime(-5) == 3);
    CHECK(nextTwinPrime(0) == 3);
    CHECK(nextTwinPrime(19) == 29);
    CHECK(nextTwinPrime(67) == 71);
}

TEST_CASE("Task G"){
    CHECK(largestTwinPrime(-10, 0) == -1);
    CHECK(largestTwinPrime(7, 10) == 7);
    CHECK(largestTwinPrime(14,16) == -1);
    CHECK(largestTwinPrime(14, 17) == 17);
    CHECK(largestTwinPrime(1,74) == 73);
}
