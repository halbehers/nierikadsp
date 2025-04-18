#pragma once

#include <string>

#include "../Component.h"
#include "../TooltipManager.h"

namespace nierika::gui::element
{

class Tooltip : public Component, public TooltipManager::Listener
{
public:
    Tooltip(const std::string& defaultTooltip = "");
    ~Tooltip() override;

    void paint(juce::Graphics&) override;
    void resized() override;
    
    void tooltipChanged(const std::string& newTooltip) override;

private:
    std::string _tooltip;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(Tooltip)
};

}
