#pragma once 

#include <string> 
using namespace std; 

namespace aic :: Slowmedia
{
    enum class AttentionRiskLevel
    {
        Safe, 
        Elavated, 
        Manipulated, 
        Addictive
    };

    struct AttentionMetrics
    {
        double stimulationScore; 
        double noveltyEntropy;
        double rewardVariability; 
        double sessionDurationMinutes; 

        bool hasInfiniteScroll; 
        bool hasAutoplay; 
        bool usesStreakMechanic; 
    }; 

    class AttentionConstitution 
    {
        public: 
        static AttentionRiskLevel evaluate(const AttentionMetrics &metrics);

        static bool violatesNonExtraction(const AttentionMetrics &metrics);
        static bool violatesTemporalIntegrity(const AttentionMetrics &metrics); 
        static bool violatesAntiAddiction(const AttentionMetrics &metrics); 

        static void enforce(const AttentionMetrics &metrics); 
    };
}