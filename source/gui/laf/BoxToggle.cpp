#include "../../../include/gui/laf/BoxToggle.h"
#include "../../../include/gui/Theme.h"
#include "../../../include/gui/element/BoxToggle.h"

namespace nierika::gui::laf
{

void BoxToggle::drawTickBox
(
    juce::Graphics& g,
    juce::Component& button,
    float x,
    float y,
    float w,
    float h,
    bool ticked,
    bool isEnabled,
    bool shouldDrawButtonAsHighlighted,
    bool shouldDrawButtonAsDown
)
{
    (void) shouldDrawButtonAsDown;
    auto whiteColor = Theme::getInstance().getColor(Theme::ThemeColor::EMPTY_SHADE).asJuce();
    auto disabledColor = Theme::getInstance().getColor(Theme::ThemeColor::DISABLED).asJuce();
    auto accentColor = Theme::getInstance().getColor(Theme::ThemeColor::ACCENT).asJuce();

    g.setColour(isEnabled ? whiteColor : disabledColor);
    
    if (shouldDrawButtonAsHighlighted)
    {
        auto highlightedColor = Theme::getInstance().getColor(Theme::ThemeColor::LIGHT_SHADE).asJuce();
        g.setColour(highlightedColor);
    }
    
    if (ticked)
    {
        if (isEnabled && static_cast<element::BoxToggle&>(button).isActive())
        {
            g.setColour(accentColor);
        }
        g.drawRoundedRectangle(x, y, w, h, 4.0, 1.0);
        g.fillRoundedRectangle(x + 4, y + 4, w - 8, h - 8, 2.0);
    }
    else if (isEnabled && static_cast<element::BoxToggle&>(button).isActive())
    {
        g.drawRoundedRectangle(x, y, w, h, 4.0, 1.0);
        g.setColour(accentColor.withAlpha(0.4f));
        g.fillRoundedRectangle(x + 4, y + 4, w - 8, h - 8, 2.0);
    }
    else
    {
        g.drawRoundedRectangle(x, y, w, h, 4.0, 1.0);
    }
}

}
