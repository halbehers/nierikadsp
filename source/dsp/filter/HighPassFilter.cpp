#include "../../../include/dsp/filter/HighPassFilter.h"

namespace nierika::dsp
{
    HighPassFilter::HighPassFilter(float defaultCutoffFrenquency):
        Filter::Filter(defaultCutoffFrenquency)
    {
        _stateVariableFilter.state->type = juce::dsp::StateVariableFilter::Parameters<float>
        ::Type::highPass;
    }

    HighPassFilter::~HighPassFilter()
    {
    }
}
