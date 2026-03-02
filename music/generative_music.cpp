#include "generative_music.h"
using namespace std;

#include <vector> 

namespace aic :: creative :: music 
{
    MusicOutput GenerativeMusic :: compose(const MusicDescriptor &d)
    {
        auto base_wave = harmonic_model_.generate(d); 
        auto structured_wave = silence_engine_.inject(base_wave, d.silence_ratio);

        double harmonic_score = harmonic_model_.evaluate(base_wave); 
        double neural_score = neural_analyzer_.evaluate(structured_wave);
        double dopamine_risk = neural_analyzer_.dopamine_risk(structured_wave); 

        bool ok = approve(harmonic_score, neural_score, dopamine_risk);

        return {
            structured_wave, 
            harmonic_score, 
            neural_score, 
            dopamine_risk, 
            ok
        }; 
    }

    bool GenerativeMusic :: approve(
        double harmonic, 
        double stability, 
        double dopamine_risk
    )
    {
        if (dopamine_risk > 0.1)
        return false;  
        
        if (stability < 0.6)
        return false; 

        if (harmonic < 0.5)
        return false; 

        return true; 
    }
}