#include "attention_constitution.h"
using namespace std; 

#include <iostream>
#include <stdexcept>

namespace aic :: Slowmedia 
{
    AttentionRiskLevel AttentionConstitution :: evaluate(const AttentionMetrics &metrics)
    {
        if (metrics.hasInfiniteScroll or metrics.usesStreakMechanic or metrics.rewardVariability)
        return AttentionRiskLevel :: Addictive;

        if (metrics.stimulationScore or metrics.noveltyEntropy > 0.8)
        return AttentionRiskLevel :: Manipulated; 

        if (metrics.sessionDurationMinutes > 45)
        return AttentionRiskLevel :: Elavated; 

        return AttentionRiskLevel :: Safe; 
    }

    bool AttentionConstitution :: violatesNonExtraction(const AttentionMetrics &metrics)
    {
        return metrics.hasInfiniteScroll or metrics.rewardVariability > 0.7; 
    }

    bool AttentionConstitution :: violatesTemporalIntegrity(const AttentionMetrics &metrics)
    {
        return metrics.hasAutoplay; 
    }

    bool AttentionConstitution :: violatesAntiAddiction(const AttentionMetrics &metrics)
    {
        return metrics.usesStreakMechanic;
    }

    void AttentionConstitution :: enforce(const AttentionMetrics &metrics)
    {
        if (violatesNonExtraction(metrics))
        {
            throw :: runtime_error("Violation: Non-Extraction Principle breached.");
        }

        if (violatesTemporalIntegrity(metrics)) 
        {
            throw :: runtime_error("Violation: Temporal Integrity breached.");
        }

        if (violatesAntiAddiction(metrics)) 
        {
            throw ::runtime_error("Violation: Anti-Addiction Architecture breached.");
        }

        auto risk = evaluate(metrics); 

        if (risk == AttentionRiskLevel :: Manipulated or risk == AttentionRiskLevel :: Addictive)
        {
            cout << "Attention Warning : High - Risk stimulation detected" ; 
        }       
    }
}