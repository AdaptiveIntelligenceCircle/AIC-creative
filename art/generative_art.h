#ifndef AIC_GENERATIVE_ART_H 
#define AIC_GENERATIVE_ART_H 

#include <string> 
#include <vector>

#include "symbolic_art_engine.h"
#include "visual_stability_analyzer.h"

using namespace std; 

namespace aic 
{
    namespace creative 
    {
        namespace art 
        {
            struct ArtDescriptor
            {
                string theme; 
                string archetype; 

                double abstraction_level; 
                double symmetry_preference; 
                double entropy_target; 
            }; 

            struct ArtOutput 
            {
                string symbolic_representation;
                double stability_score; 
                double symbolism_score; 
                bool approved; 
            };

            class GenerativeArt 
            {
                public: 
                GenerativeArt(); 

                ArtOutput create(const ArtDescriptor &descriptor); 

                private: 
                bool approve(double stability, double symbolism); 
            }; 
        }
    }
}

#endif 