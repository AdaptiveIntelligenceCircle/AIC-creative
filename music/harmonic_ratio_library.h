#pragma once 

#include <iostream> 
#include <vector> 

namespace aic :: creative :: music 
{
    class HarmonicRatioLibrary 
    {
    public:
    static std::vector<double> pythagorean_ratios() {
        return {1.0, 9.0/8.0, 5.0/4.0, 4.0/3.0, 3.0/2.0, 5.0/3.0, 15.0/8.0};
    }

    static std::vector<double> sacred_intervals() {
        return {1.0, 1.618, 2.0}; // includes golden ratio
    }
    }; 
}