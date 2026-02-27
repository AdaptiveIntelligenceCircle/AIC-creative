#include "aesthetic_model.h"
using namespace std; 

namespace aic :: creative
{
    AestheticModel :: AestheticModel(){}

    double AestheticModel :: evaluate_depth(const string &content)
    {
        // heuristic : longer structured content implies potential depth..
        double length_factor = log(1 + content.length()); 

        // penalize excessive reptition (signal, of low-effort loops)
        double repitition_penalty = detect_repitition(content); 

        return max(0.0, length_factor - repitition_penalty); 
    }

    double AestheticModel :: evaluate_stability(const string &content)
    {
        // Basic emotional spike detection heuristic.. 
        double exclamation_density = count_char(content, '!') / (double)content.length();
        double caps_ratio = detect_caps_ratio(content);
        
        double instability = exclamation_density * 5.0 + caps_ratio * 3.0; 

        return max(0.0, 1.0 - instability); 
    }

    double AestheticModel :: score(const string &content)
    {
        double depth = evaluate_depth(content); 
        double stability = evaluate_stability(content); 

        return 0.6 * depth + 0.4 * stability; 
    }

    double AestheticModel :: detect_repitition(const string &content)
    {
        // Simplified placeholder.. 
        return 0.01 * content.length(); 
    }

    double AestheticModel :: count_char(const string &content, char c)
    {
        return count(content.begin(), content.end(), c);
    }

    double AestheticModel :: detect_caps_ratio(const string &content)
    {
        int caps = 0; 
        for (char ch : content)
        {
            if(isupper(ch)) caps++;   
        }

        return content.empty() ? 0.0 : (double)caps/content.length() ;   
    }
}