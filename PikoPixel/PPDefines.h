/*
    PPDefines.h

    Copyright 2013-2018,2020 Josh Freeman
    http://www.twilightedge.com

    This file is part of PikoPixel for Mac OS X and GNUstep.
    PikoPixel is a graphical application for drawing & editing pixel-art images.

    PikoPixel is free software: you can redistribute it and/or modify it under
    the terms of the GNU Affero General Public License as published by the
    Free Software Foundation, either version 3 of the License, or (at your
    option) any later version approved for PikoPixel by its copyright holder (or
    an authorized proxy).

    PikoPixel is distributed in the hope that it will be useful, but WITHOUT ANY
    WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
    FOR A PARTICULAR PURPOSE. See the GNU Affero General Public License for more
    details.

    You should have received a copy of the GNU Affero General Public License
    along with this program. If not, see <http://www.gnu.org/licenses/>.
*/


#define kNativeFileFormatTypeName       @"PikoPixel Document"

#define kDefaultCanvasDimension         64

#define kMinCanvasDimension             1
#define kMaxCanvasDimension             3000

#define kMinCanvasZoomFactor            1.0f
#define kMaxCanvasZoomFactor            40.0f

#define kMaxCanvasExportDimension       9000

#define kMaxLayersPerDocument           128

#define kMinScalingFactorToDrawGrid     4

#define kMinBackgroundPatternSize       1
#define kMaxBackgroundPatternSize       128

#define kMinGridGuidelineSpacing        1
#define kMaxGridGuidelineSpacing        kMaxCanvasDimension

#define kAutosaveDelay                  23.0f

#define kDefaultKeyboardLayoutLanguageCode          @"en_US"

#define kMatchToolToleranceIndicator_MaxRadius      445

#define kScalingFactorForThumbnailBackgroundPatternSize     0.25f

#define kMaxScaleForHighInterpolationOfThumbnailImages      0.25f
#define kMaxScaleForLowInterpolationOfThumbnailImages       2.0f
