﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Vuforia.TextureRenderer
struct TextureRenderer_t_1137291322_0;
// UnityEngine.Texture
struct Texture_t1814018354_0;
// UnityEngine.RenderTexture
struct RenderTexture_t1203146108_0;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_V_2044794839.h"

// System.Int32 Vuforia.TextureRenderer::get_Width()
extern "C"  int32_t TextureRenderer_get_Width_m2127279953_0 (TextureRenderer_t_1137291322_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.TextureRenderer::get_Height()
extern "C"  int32_t TextureRenderer_get_Height_m2024983454_0 (TextureRenderer_t_1137291322_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextureRenderer::.ctor(UnityEngine.Texture,System.Int32,Vuforia.VuforiaRenderer/Vec2I)
extern "C"  void TextureRenderer__ctor_m2013633034_0 (TextureRenderer_t_1137291322_0 * __this, Texture_t1814018354_0 * ___textureToRender, int32_t ___renderTextureLayer, Vec2I_t_2044794839_0  ___requestedTextureSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture Vuforia.TextureRenderer::Render()
extern "C"  RenderTexture_t1203146108_0 * TextureRenderer_Render_m_587707669_0 (TextureRenderer_t_1137291322_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextureRenderer::Destroy()
extern "C"  void TextureRenderer_Destroy_m651155170_0 (TextureRenderer_t_1137291322_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
