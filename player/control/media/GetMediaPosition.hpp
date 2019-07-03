#pragma once

#include "MediaGeometry.hpp"

#include <utility>

class GetMediaPosition
{
public:
    GetMediaPosition(int regionWidth, int regionHeight);

    int getMediaX(int width, MediaGeometry::Align align) const;
    int getMediaY(int height, MediaGeometry::Valign valign) const;

private:
    int m_regionWidth;
    int m_regionHeight;

};
