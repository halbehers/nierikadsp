#include "../../include/gui/EmbeddedFonts.h"

const juce::Font EmbeddedFonts::getBold()
{
    static auto typeface = juce::Typeface::createSystemTypefaceFor(NierikaDSPBinaryData::Brandon_bld_otf, NierikaDSPBinaryData::Brandon_bld_otfSize);
    return juce::Font(typeface);
}

const juce::Font EmbeddedFonts::getMedium()
{
    static auto typeface = juce::Typeface::createSystemTypefaceFor(NierikaDSPBinaryData::Brandon_med_otf, NierikaDSPBinaryData::Brandon_med_otfSize);
    return juce::Font(typeface);
}

const juce::Font EmbeddedFonts::getRegular()
{
    static auto typeface = juce::Typeface::createSystemTypefaceFor(NierikaDSPBinaryData::Brandon_reg_otf, NierikaDSPBinaryData::Brandon_reg_otfSize);
    return juce::Font(typeface);
}

const juce::Font EmbeddedFonts::getLight()
{
    static auto typeface = juce::Typeface::createSystemTypefaceFor(NierikaDSPBinaryData::Brandon_light_otf, NierikaDSPBinaryData::Brandon_light_otfSize);
    return juce::Font(typeface);
}

const juce::Font EmbeddedFonts::getThin()
{
    static auto typeface = juce::Typeface::createSystemTypefaceFor(NierikaDSPBinaryData::Brandon_thin_otf, NierikaDSPBinaryData::Brandon_thin_otfSize);
    return juce::Font(typeface);
}
