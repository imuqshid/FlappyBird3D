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

// Vuforia.ObjectTargetImpl
struct ObjectTargetImpl_t_295646168_0;
// System.String
struct String_t;
// Vuforia.DataSet
struct DataSet_t_2109692640_0;
// Vuforia.DataSetImpl
struct DataSetImpl_t2035018592_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// System.Void Vuforia.ObjectTargetImpl::.ctor(System.String,System.Int32,Vuforia.DataSet)
extern "C"  void ObjectTargetImpl__ctor_m_1661596861_0 (ObjectTargetImpl_t_295646168_0 * __this, String_t* ___name, int32_t ___id, DataSet_t_2109692640_0 * ___dataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.ObjectTargetImpl::GetSize()
extern "C"  Vector3_t_725341337_0  ObjectTargetImpl_GetSize_m_685417783_0 (ObjectTargetImpl_t_295646168_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetImpl::SetSize(UnityEngine.Vector3)
extern "C"  void ObjectTargetImpl_SetSize_m1521199594_0 (ObjectTargetImpl_t_295646168_0 * __this, Vector3_t_725341337_0  ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTargetImpl::StartExtendedTracking()
extern "C"  bool ObjectTargetImpl_StartExtendedTracking_m_207849812_0 (ObjectTargetImpl_t_295646168_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTargetImpl::StopExtendedTracking()
extern "C"  bool ObjectTargetImpl_StopExtendedTracking_m_1119349254_0 (ObjectTargetImpl_t_295646168_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.DataSetImpl Vuforia.ObjectTargetImpl::get_DataSet()
extern "C"  DataSetImpl_t2035018592_0 * ObjectTargetImpl_get_DataSet_m_1736108620_0 (ObjectTargetImpl_t_295646168_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
