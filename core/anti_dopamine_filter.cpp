#include "anti_dopamine.h"
#include <vector> 

namespace aic :: creative 
{
    AntiDopamineFilter :: AntiDopamineFilter(){}

    double AntiDopamineFilter :: evaluate(const string &content)
    {
        double spike_score = detect_spike_language(content);
        double loop_score = detect_short_loop_pattern(content); 
        double outrage_score = detect_outrage_pattern(content); 

        return 0.5 * spike_score + 0.3 * loop_score + 0.2 *outrage_score; 
    }

    double AntiDopamineFilter :: detect_spike_language(const string &content)
    {
        static const vector<string> spike_words = 
        {
            "shocking", "unbelievable", "insane", "you won't believe"
        }; 

        double score = 0.0; 

        for (const auto &word : spike_words)
        {
            if (content.find(word) != string :: npos)
            {
                score += 1.0; 
            }
        }
        return score; 
    }

    double AntiDopamineFilter :: detect_short_loop_pattern(const string &content)
    {
        // Penalize overly short content(possible viral loop).. 
        if (content.length()< 200)
        {
            return 1.0; 
        }
        return 0.0; 
    }

    bool AntiDopamineFilter :: approve(double risk_score)
    {
        const double threshold = 1.5; 
        return risk_score < threshold; 
    }
}