#include "symbolic_art_engine.h"
#include <iostream>

namespace aic :: creative :: art 
{
    SymbolicArtEngine :: SymbolicArtEngine()
    {
        load_archetypes(); 
    }
    
    void SymbolicArtEngine :: load_archetypes()
    {
        archetype_map_["guardian"] = "circle + vertical_axis + shield_form"; 
        archetype_map_["explorer"] = "triangle + forward_vector + horizon"; 
        archetype_map_["sage"] = "spiral + central_point + symmetry"; 
        archetype_map_["rebirth"] = "circlez + breaker + emerging_line";
    }

    string SymbolicArtEngine :: compose(
        const string &theme, 
        const string &archetype, 
        double abstraction 
    )
    {
        string base = archetype_map_[archetype]; 

        string abstraction_layer = 
        (abstraction > 0.5) ? "minimal_lines" : "detailed geometry";
        
        return "THEME :" + theme + "| Structure:"
        + base + "| STYLE L" + abstraction_layer; 
    }

    double SymbolicArtEngine :: evaluate_symbolism(
        const string &representation
    )
    {
        if (representation.find("circle") != string :: npos)
        {
            return 0.7; 
        }

        return 0.4 ; 
    }
}