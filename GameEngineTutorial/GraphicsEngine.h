#pragma once
#include <d3d11.h>
#include "Prerequisites.h"
#include "RenderSystem.h"

class GraphicsEngine
{
private:
	GraphicsEngine();
	~GraphicsEngine();
	RenderSystem* m_render_system = nullptr;
	static GraphicsEngine* m_engine;
public:
	RenderSystem* getRenderSystem();
	static GraphicsEngine* get();
	static void create();
	static void release();
};