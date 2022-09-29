#include <iostream>
#include "funcs.h"

// add functions here
//Task A
bool isDivisibleBy(int n, int d){
    if(n % d == 0)
        return true;
    else
        return false;
}

//Task B
bool isPrime(int n){
    for(int x = 2; x < n; x++){
        if(n % x == 0){
            return false;
        }
    }
    return true;
}

//Task C
int nextPrime(int n){
    int next = n + 1;
    bool validNextPrime = false;
    while(!validNextPrime){
        if(isPrime(next))
            validNextPrime=isPrime(next);
        else
            next++;
    }

    return next;
}

//Task D
int countPrimes(int a, int b){
    int count = 0;
    for(int x = a; x <= b; x++){
        if(isPrime(x))
            count++
    }
    return count;
}

//Task E
bool isTwinPrime(int n){
    bool low = isPrime(n - 2);
    bool high = isPrime(n + 2);
    if(low || high)
        return true;
    else
        return false;
}

//Task F
int nextTwinPrime(int n){
    int next = n + 1;
    bool validNextTwinPrime = false;
    while(!validTwinNextPrime){
        if(isTwinPrime(next))
            validTwinNextPrime=isTwinPrime(next);
        else
            next++;
    }

    return next;
}

//Task G
int largestTwinPrime(int a, int b){
    bool firstTwin = false;
    int largest = -1;
    for(int x = a; x <= b; x++){
        if(!firstTwin){
            if(isTwinPrime(x)){
                largest = x;
                firstTwin = true;
            }
        }
        else{
            if(isTwinPrime(x)){
                if(x > largest)
                    largest = x;
            }
        }
    }
    
    return largest;
}