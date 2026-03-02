#include "generative_art.h"
using namespace std; 

#include <string> 
#include <iostream> 

namespace aic :: creative :: art 
{
    GenerativeArt:: GenerativeArt(){}

    ArtOutput GenerativeArt :: create(const ArtDescriptor &descriptor)
    {
        string symbolic = symbolic_engine_.compose(
            descriptor.theme, 
            descriptor.archetype, 
            descriptor.abstraction_level
        ); 

        double stability = stability_analyzer_.evaluate(symbolic); 
        double symbolism = symbolic_engine_.evaluate_symbolism(symbolic);

        bool ok = approve(stability, symbolism) ; 

        return {
            symbolic, stability, symbolism, ok
        }; 
    }

    bool GenerativeArt :: approve(double stability, double symbolism)
    {
        if (stability < 0.6)
        return false; 

        if (stability < 0.5)
        return false; 

        return true; 
    }
}