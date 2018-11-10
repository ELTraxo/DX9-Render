#pragma once
//#include <d3d9.h>
//#include <d3dx9.h>

#include "vec2.h"
#include "vec3.h"
#include "vec4.h"

#define safe_release(p) \
	if(p)				\
	{					\
		p->Release();	\
		p = nullptr;	\
	}

using DevicePtr = LPDIRECT3DDEVICE9;
using StateBlockPtr = LPDIRECT3DSTATEBLOCK9;
using SwapChainPtr = LPDIRECT3DSWAPCHAIN9;
using SurfacePtr = LPDIRECT3DSURFACE9;

#define UIXFVF D3DFVF_XYZRHW | D3DFVF_DIFFUSE

using Color = DWORD;

struct Vertex
{
	float x, y, z, rhw;
	Color dwColor;
};

#define vert_count(v) sizeof(v) / sizeof(Vertex)
using VertexBuffer = std::vector<Vertex>;
#define sq(n) n*n


using uint = unsigned int;
using vec2ui = vec2<uint>;
using vec2i = vec2<int>;
using vec2f = vec2<float>;
using vec3f = vec3<float>;
using vec4f = vec4<float>;

#ifdef UNICODE
using tstring = std::wstring;
#else
using tstring = std::string;
#endif