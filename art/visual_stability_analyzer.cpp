#include "visual_stability_analyzer.h"
#include <iostream>

namespace aic :: creative :: art 
{
    double VisualStabilityAnalyzer :: evaluate(
        const string &rep
    )
    {
        double symmetry = symmetry_score(rep); 
        double chaos = chaos_penalty(rep); 

        return symmetry - chaos; 
    }

    double VisualStabilityAnalyzer :: symmetry_score(
        const string &rep 
    )
    {
        if (rep.find("symmetry") != string ::npos)
        return 1.0; 

        if (rep.find("circle") != string :: npos)
        return 0.8; 

        return 0.5; 
    }

    double VisualStabilityAnalyzer :: chaos_penalty(
        const string &rep
    )
    {
        if (rep.find("break") != string :: npos)
        return 0.3; 

        return 0.1;
    }
}