#pragma once

#include <string>

#include "../common_classes/OpenGLWindow.h"
#include "../common_classes/HUD.h"
#include "../common_classes/texture.h"

/**
  HUD for tutorial 013.
*/
class HUD013 : public HUD
{
public:
	HUD013(const OpenGLWindow& window);

	/** \brief  Renders HUD. */
	void renderHUD() const override {}
	void renderHUD(bool turnDepthMaskOff) const;
};
