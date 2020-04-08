// DO NOT EDIT. This file is generated

#include "../Precompiled.h"
#include "../AngelScript/APITemplates.h"

#include "../Core/Attribute.h"
#include "../Core/Spline.h"
#include "../Core/Variant.h"
#ifdef URHO3D_DATABASE
#include "../Database/Database.h"
#endif
#include "../Graphics/Animation.h"
#include "../Graphics/AnimationState.h"
#include "../Graphics/Camera.h"
#include "../Graphics/GraphicsDefs.h"
#include "../Graphics/Light.h"
#include "../Graphics/OctreeQuery.h"
#include "../Graphics/ParticleEffect.h"
#include "../Graphics/RenderPath.h"
#include "../Graphics/RibbonTrail.h"
#include "../Graphics/Skeleton.h"
#include "../Graphics/Technique.h"
#include "../IO/File.h"
#include "../Input/Input.h"
#include "../Input/InputConstants.h"
#include "../Math/Frustum.h"
#include "../Math/MathDefs.h"
#ifdef URHO3D_NAVIGATION
#include "../Navigation/CrowdAgent.h"
#endif
#ifdef URHO3D_NAVIGATION
#include "../Navigation/NavigationMesh.h"
#endif
#ifdef URHO3D_NETWORK
#include "../Network/Connection.h"
#endif
#ifdef URHO3D_NETWORK
#include "../Network/HttpRequest.h"
#endif
#ifdef URHO3D_PHYSICS
#include "../Physics/CollisionShape.h"
#endif
#ifdef URHO3D_PHYSICS
#include "../Physics/Constraint.h"
#endif
#ifdef URHO3D_PHYSICS
#include "../Physics/RigidBody.h"
#endif
#include "../Resource/Image.h"
#include "../Resource/JSONValue.h"
#include "../Scene/AnimationDefs.h"
#include "../Scene/Component.h"
#include "../Scene/Node.h"
#include "../Scene/Scene.h"
#include "../Scene/SmoothedTransform.h"
#include "../Scene/ValueAnimation.h"
#include "../UI/Cursor.h"
#include "../UI/Font.h"
#include "../UI/ListView.h"
#include "../UI/Text.h"
#include "../UI/UI.h"
#include "../UI/UIElement.h"
#include "../UI/Window.h"
#ifdef URHO3D_URHO2D
#include "../Urho2D/AnimatedSprite2D.h"
#endif
#ifdef URHO3D_URHO2D
#include "../Urho2D/ParticleEffect2D.h"
#endif
#ifdef URHO3D_URHO2D
#include "../Urho2D/RigidBody2D.h"
#endif
#ifdef URHO3D_URHO2D
#include "../Urho2D/TileMapDefs2D.h"
#endif

namespace Urho3D
{

void RegisterGenerated(asIScriptEngine* engine)
{
    // enum AttributeMode | File: ../Core/Attribute.h | Line: 35
    engine->RegisterEnum("AttributeMode");
    engine->RegisterEnumValue("AttributeMode", "AM_EDIT", AM_EDIT);
    engine->RegisterEnumValue("AttributeMode", "AM_FILE", AM_FILE);
    engine->RegisterEnumValue("AttributeMode", "AM_NET", AM_NET);
    engine->RegisterEnumValue("AttributeMode", "AM_DEFAULT", AM_DEFAULT);
    engine->RegisterEnumValue("AttributeMode", "AM_LATESTDATA", AM_LATESTDATA);
    engine->RegisterEnumValue("AttributeMode", "AM_NOEDIT", AM_NOEDIT);
    engine->RegisterEnumValue("AttributeMode", "AM_NODEID", AM_NODEID);
    engine->RegisterEnumValue("AttributeMode", "AM_COMPONENTID", AM_COMPONENTID);
    engine->RegisterEnumValue("AttributeMode", "AM_NODEIDVECTOR", AM_NODEIDVECTOR);
    engine->RegisterEnumValue("AttributeMode", "AM_FILEREADONLY", AM_FILEREADONLY);

    // enum InterpolationMode | File: ../Core/Spline.h | Line: 37
    engine->RegisterEnum("InterpolationMode");
    engine->RegisterEnumValue("InterpolationMode", "BEZIER_CURVE", BEZIER_CURVE);
    engine->RegisterEnumValue("InterpolationMode", "CATMULL_ROM_CURVE", CATMULL_ROM_CURVE);
    engine->RegisterEnumValue("InterpolationMode", "LINEAR_CURVE", LINEAR_CURVE);
    engine->RegisterEnumValue("InterpolationMode", "CATMULL_ROM_FULL_CURVE", CATMULL_ROM_FULL_CURVE);

    // enum VariantType | File: ../Core/Variant.h | Line: 42
    engine->RegisterEnum("VariantType");
    engine->RegisterEnumValue("VariantType", "VAR_NONE", VAR_NONE);
    engine->RegisterEnumValue("VariantType", "VAR_INT", VAR_INT);
    engine->RegisterEnumValue("VariantType", "VAR_BOOL", VAR_BOOL);
    engine->RegisterEnumValue("VariantType", "VAR_FLOAT", VAR_FLOAT);
    engine->RegisterEnumValue("VariantType", "VAR_VECTOR2", VAR_VECTOR2);
    engine->RegisterEnumValue("VariantType", "VAR_VECTOR3", VAR_VECTOR3);
    engine->RegisterEnumValue("VariantType", "VAR_VECTOR4", VAR_VECTOR4);
    engine->RegisterEnumValue("VariantType", "VAR_QUATERNION", VAR_QUATERNION);
    engine->RegisterEnumValue("VariantType", "VAR_COLOR", VAR_COLOR);
    engine->RegisterEnumValue("VariantType", "VAR_STRING", VAR_STRING);
    engine->RegisterEnumValue("VariantType", "VAR_BUFFER", VAR_BUFFER);
    engine->RegisterEnumValue("VariantType", "VAR_VOIDPTR", VAR_VOIDPTR);
    engine->RegisterEnumValue("VariantType", "VAR_RESOURCEREF", VAR_RESOURCEREF);
    engine->RegisterEnumValue("VariantType", "VAR_RESOURCEREFLIST", VAR_RESOURCEREFLIST);
    engine->RegisterEnumValue("VariantType", "VAR_VARIANTVECTOR", VAR_VARIANTVECTOR);
    engine->RegisterEnumValue("VariantType", "VAR_VARIANTMAP", VAR_VARIANTMAP);
    engine->RegisterEnumValue("VariantType", "VAR_INTRECT", VAR_INTRECT);
    engine->RegisterEnumValue("VariantType", "VAR_INTVECTOR2", VAR_INTVECTOR2);
    engine->RegisterEnumValue("VariantType", "VAR_PTR", VAR_PTR);
    engine->RegisterEnumValue("VariantType", "VAR_MATRIX3", VAR_MATRIX3);
    engine->RegisterEnumValue("VariantType", "VAR_MATRIX3X4", VAR_MATRIX3X4);
    engine->RegisterEnumValue("VariantType", "VAR_MATRIX4", VAR_MATRIX4);
    engine->RegisterEnumValue("VariantType", "VAR_DOUBLE", VAR_DOUBLE);
    engine->RegisterEnumValue("VariantType", "VAR_STRINGVECTOR", VAR_STRINGVECTOR);
    engine->RegisterEnumValue("VariantType", "VAR_RECT", VAR_RECT);
    engine->RegisterEnumValue("VariantType", "VAR_INTVECTOR3", VAR_INTVECTOR3);
    engine->RegisterEnumValue("VariantType", "VAR_INT64", VAR_INT64);
    engine->RegisterEnumValue("VariantType", "VAR_CUSTOM_HEAP", VAR_CUSTOM_HEAP);
    engine->RegisterEnumValue("VariantType", "VAR_CUSTOM_STACK", VAR_CUSTOM_STACK);
    engine->RegisterEnumValue("VariantType", "MAX_VAR_TYPES", MAX_VAR_TYPES);

#ifdef URHO3D_DATABASE
    // enum DBAPI | File: ../Database/Database.h | Line: 35
    engine->RegisterEnum("DBAPI");
    engine->RegisterEnumValue("DBAPI", "DBAPI_SQLITE", DBAPI_SQLITE);
    engine->RegisterEnumValue("DBAPI", "DBAPI_ODBC", DBAPI_ODBC);
#endif

    // enum AnimationChannel | File: ../Graphics/Animation.h | Line: 37
    engine->RegisterEnum("AnimationChannel");
    engine->RegisterEnumValue("AnimationChannel", "CHANNEL_NONE", CHANNEL_NONE);
    engine->RegisterEnumValue("AnimationChannel", "CHANNEL_POSITION", CHANNEL_POSITION);
    engine->RegisterEnumValue("AnimationChannel", "CHANNEL_ROTATION", CHANNEL_ROTATION);
    engine->RegisterEnumValue("AnimationChannel", "CHANNEL_SCALE", CHANNEL_SCALE);

    // enum AnimationBlendMode | File: ../Graphics/AnimationState.h | Line: 43
    engine->RegisterEnum("AnimationBlendMode");
    engine->RegisterEnumValue("AnimationBlendMode", "ABM_LERP", ABM_LERP);
    engine->RegisterEnumValue("AnimationBlendMode", "ABM_ADDITIVE", ABM_ADDITIVE);

    // enum ViewOverride | File: ../Graphics/Camera.h | Line: 41
    engine->RegisterEnum("ViewOverride");
    engine->RegisterEnumValue("ViewOverride", "VO_NONE", VO_NONE);
    engine->RegisterEnumValue("ViewOverride", "VO_LOW_MATERIAL_QUALITY", VO_LOW_MATERIAL_QUALITY);
    engine->RegisterEnumValue("ViewOverride", "VO_DISABLE_SHADOWS", VO_DISABLE_SHADOWS);
    engine->RegisterEnumValue("ViewOverride", "VO_DISABLE_OCCLUSION", VO_DISABLE_OCCLUSION);

    // enum PrimitiveType | File: ../Graphics/GraphicsDefs.h | Line: 45
    engine->RegisterEnum("PrimitiveType");
    engine->RegisterEnumValue("PrimitiveType", "TRIANGLE_LIST", TRIANGLE_LIST);
    engine->RegisterEnumValue("PrimitiveType", "LINE_LIST", LINE_LIST);
    engine->RegisterEnumValue("PrimitiveType", "POINT_LIST", POINT_LIST);
    engine->RegisterEnumValue("PrimitiveType", "TRIANGLE_STRIP", TRIANGLE_STRIP);
    engine->RegisterEnumValue("PrimitiveType", "LINE_STRIP", LINE_STRIP);
    engine->RegisterEnumValue("PrimitiveType", "TRIANGLE_FAN", TRIANGLE_FAN);

    // enum BlendMode | File: ../Graphics/GraphicsDefs.h | Line: 72
    engine->RegisterEnum("BlendMode");
    engine->RegisterEnumValue("BlendMode", "BLEND_REPLACE", BLEND_REPLACE);
    engine->RegisterEnumValue("BlendMode", "BLEND_ADD", BLEND_ADD);
    engine->RegisterEnumValue("BlendMode", "BLEND_MULTIPLY", BLEND_MULTIPLY);
    engine->RegisterEnumValue("BlendMode", "BLEND_ALPHA", BLEND_ALPHA);
    engine->RegisterEnumValue("BlendMode", "BLEND_ADDALPHA", BLEND_ADDALPHA);
    engine->RegisterEnumValue("BlendMode", "BLEND_PREMULALPHA", BLEND_PREMULALPHA);
    engine->RegisterEnumValue("BlendMode", "BLEND_INVDESTALPHA", BLEND_INVDESTALPHA);
    engine->RegisterEnumValue("BlendMode", "BLEND_SUBTRACT", BLEND_SUBTRACT);
    engine->RegisterEnumValue("BlendMode", "BLEND_SUBTRACTALPHA", BLEND_SUBTRACTALPHA);
    engine->RegisterEnumValue("BlendMode", "MAX_BLENDMODES", MAX_BLENDMODES);

    // enum CompareMode | File: ../Graphics/GraphicsDefs.h | Line: 87
    engine->RegisterEnum("CompareMode");
    engine->RegisterEnumValue("CompareMode", "CMP_ALWAYS", CMP_ALWAYS);
    engine->RegisterEnumValue("CompareMode", "CMP_EQUAL", CMP_EQUAL);
    engine->RegisterEnumValue("CompareMode", "CMP_NOTEQUAL", CMP_NOTEQUAL);
    engine->RegisterEnumValue("CompareMode", "CMP_LESS", CMP_LESS);
    engine->RegisterEnumValue("CompareMode", "CMP_LESSEQUAL", CMP_LESSEQUAL);
    engine->RegisterEnumValue("CompareMode", "CMP_GREATER", CMP_GREATER);
    engine->RegisterEnumValue("CompareMode", "CMP_GREATEREQUAL", CMP_GREATEREQUAL);
    engine->RegisterEnumValue("CompareMode", "MAX_COMPAREMODES", MAX_COMPAREMODES);

    // enum CullMode | File: ../Graphics/GraphicsDefs.h | Line: 100
    engine->RegisterEnum("CullMode");
    engine->RegisterEnumValue("CullMode", "CULL_NONE", CULL_NONE);
    engine->RegisterEnumValue("CullMode", "CULL_CCW", CULL_CCW);
    engine->RegisterEnumValue("CullMode", "CULL_CW", CULL_CW);
    engine->RegisterEnumValue("CullMode", "MAX_CULLMODES", MAX_CULLMODES);

    // enum FillMode | File: ../Graphics/GraphicsDefs.h | Line: 109
    engine->RegisterEnum("FillMode");
    engine->RegisterEnumValue("FillMode", "FILL_SOLID", FILL_SOLID);
    engine->RegisterEnumValue("FillMode", "FILL_WIREFRAME", FILL_WIREFRAME);
    engine->RegisterEnumValue("FillMode", "FILL_POINT", FILL_POINT);

    // enum VertexElementType | File: ../Graphics/GraphicsDefs.h | Line: 160
    engine->RegisterEnum("VertexElementType");
    engine->RegisterEnumValue("VertexElementType", "TYPE_INT", TYPE_INT);
    engine->RegisterEnumValue("VertexElementType", "TYPE_FLOAT", TYPE_FLOAT);
    engine->RegisterEnumValue("VertexElementType", "TYPE_VECTOR2", TYPE_VECTOR2);
    engine->RegisterEnumValue("VertexElementType", "TYPE_VECTOR3", TYPE_VECTOR3);
    engine->RegisterEnumValue("VertexElementType", "TYPE_VECTOR4", TYPE_VECTOR4);
    engine->RegisterEnumValue("VertexElementType", "TYPE_UBYTE4", TYPE_UBYTE4);
    engine->RegisterEnumValue("VertexElementType", "TYPE_UBYTE4_NORM", TYPE_UBYTE4_NORM);
    engine->RegisterEnumValue("VertexElementType", "MAX_VERTEX_ELEMENT_TYPES", MAX_VERTEX_ELEMENT_TYPES);

    // enum VertexElementSemantic | File: ../Graphics/GraphicsDefs.h | Line: 173
    engine->RegisterEnum("VertexElementSemantic");
    engine->RegisterEnumValue("VertexElementSemantic", "SEM_POSITION", SEM_POSITION);
    engine->RegisterEnumValue("VertexElementSemantic", "SEM_NORMAL", SEM_NORMAL);
    engine->RegisterEnumValue("VertexElementSemantic", "SEM_BINORMAL", SEM_BINORMAL);
    engine->RegisterEnumValue("VertexElementSemantic", "SEM_TANGENT", SEM_TANGENT);
    engine->RegisterEnumValue("VertexElementSemantic", "SEM_TEXCOORD", SEM_TEXCOORD);
    engine->RegisterEnumValue("VertexElementSemantic", "SEM_COLOR", SEM_COLOR);
    engine->RegisterEnumValue("VertexElementSemantic", "SEM_BLENDWEIGHTS", SEM_BLENDWEIGHTS);
    engine->RegisterEnumValue("VertexElementSemantic", "SEM_BLENDINDICES", SEM_BLENDINDICES);
    engine->RegisterEnumValue("VertexElementSemantic", "SEM_OBJECTINDEX", SEM_OBJECTINDEX);
    engine->RegisterEnumValue("VertexElementSemantic", "MAX_VERTEX_ELEMENT_SEMANTICS", MAX_VERTEX_ELEMENT_SEMANTICS);

    // enum TextureFilterMode | File: ../Graphics/GraphicsDefs.h | Line: 235
    engine->RegisterEnum("TextureFilterMode");
    engine->RegisterEnumValue("TextureFilterMode", "FILTER_NEAREST", FILTER_NEAREST);
    engine->RegisterEnumValue("TextureFilterMode", "FILTER_BILINEAR", FILTER_BILINEAR);
    engine->RegisterEnumValue("TextureFilterMode", "FILTER_TRILINEAR", FILTER_TRILINEAR);
    engine->RegisterEnumValue("TextureFilterMode", "FILTER_ANISOTROPIC", FILTER_ANISOTROPIC);
    engine->RegisterEnumValue("TextureFilterMode", "FILTER_NEAREST_ANISOTROPIC", FILTER_NEAREST_ANISOTROPIC);
    engine->RegisterEnumValue("TextureFilterMode", "FILTER_DEFAULT", FILTER_DEFAULT);
    engine->RegisterEnumValue("TextureFilterMode", "MAX_FILTERMODES", MAX_FILTERMODES);

    // enum TextureAddressMode | File: ../Graphics/GraphicsDefs.h | Line: 247
    engine->RegisterEnum("TextureAddressMode");
    engine->RegisterEnumValue("TextureAddressMode", "ADDRESS_WRAP", ADDRESS_WRAP);
    engine->RegisterEnumValue("TextureAddressMode", "ADDRESS_MIRROR", ADDRESS_MIRROR);
    engine->RegisterEnumValue("TextureAddressMode", "ADDRESS_CLAMP", ADDRESS_CLAMP);
    engine->RegisterEnumValue("TextureAddressMode", "ADDRESS_BORDER", ADDRESS_BORDER);
    engine->RegisterEnumValue("TextureAddressMode", "MAX_ADDRESSMODES", MAX_ADDRESSMODES);

    // enum TextureCoordinate | File: ../Graphics/GraphicsDefs.h | Line: 257
    engine->RegisterEnum("TextureCoordinate");
    engine->RegisterEnumValue("TextureCoordinate", "COORD_U", COORD_U);
    engine->RegisterEnumValue("TextureCoordinate", "COORD_V", COORD_V);
    engine->RegisterEnumValue("TextureCoordinate", "COORD_W", COORD_W);
    engine->RegisterEnumValue("TextureCoordinate", "MAX_COORDS", MAX_COORDS);

    // enum TextureUsage | File: ../Graphics/GraphicsDefs.h | Line: 266
    engine->RegisterEnum("TextureUsage");
    engine->RegisterEnumValue("TextureUsage", "TEXTURE_STATIC", TEXTURE_STATIC);
    engine->RegisterEnumValue("TextureUsage", "TEXTURE_DYNAMIC", TEXTURE_DYNAMIC);
    engine->RegisterEnumValue("TextureUsage", "TEXTURE_RENDERTARGET", TEXTURE_RENDERTARGET);
    engine->RegisterEnumValue("TextureUsage", "TEXTURE_DEPTHSTENCIL", TEXTURE_DEPTHSTENCIL);

    // enum CubeMapFace | File: ../Graphics/GraphicsDefs.h | Line: 275
    engine->RegisterEnum("CubeMapFace");
    engine->RegisterEnumValue("CubeMapFace", "FACE_POSITIVE_X", FACE_POSITIVE_X);
    engine->RegisterEnumValue("CubeMapFace", "FACE_NEGATIVE_X", FACE_NEGATIVE_X);
    engine->RegisterEnumValue("CubeMapFace", "FACE_POSITIVE_Y", FACE_POSITIVE_Y);
    engine->RegisterEnumValue("CubeMapFace", "FACE_NEGATIVE_Y", FACE_NEGATIVE_Y);
    engine->RegisterEnumValue("CubeMapFace", "FACE_POSITIVE_Z", FACE_POSITIVE_Z);
    engine->RegisterEnumValue("CubeMapFace", "FACE_NEGATIVE_Z", FACE_NEGATIVE_Z);
    engine->RegisterEnumValue("CubeMapFace", "MAX_CUBEMAP_FACES", MAX_CUBEMAP_FACES);

    // enum RenderSurfaceUpdateMode | File: ../Graphics/GraphicsDefs.h | Line: 298
    engine->RegisterEnum("RenderSurfaceUpdateMode");
    engine->RegisterEnumValue("RenderSurfaceUpdateMode", "SURFACE_MANUALUPDATE", SURFACE_MANUALUPDATE);
    engine->RegisterEnumValue("RenderSurfaceUpdateMode", "SURFACE_UPDATEVISIBLE", SURFACE_UPDATEVISIBLE);
    engine->RegisterEnumValue("RenderSurfaceUpdateMode", "SURFACE_UPDATEALWAYS", SURFACE_UPDATEALWAYS);

    // enum FaceCameraMode | File: ../Graphics/GraphicsDefs.h | Line: 362
    engine->RegisterEnum("FaceCameraMode");
    engine->RegisterEnumValue("FaceCameraMode", "FC_NONE", FC_NONE);
    engine->RegisterEnumValue("FaceCameraMode", "FC_ROTATE_XYZ", FC_ROTATE_XYZ);
    engine->RegisterEnumValue("FaceCameraMode", "FC_ROTATE_Y", FC_ROTATE_Y);
    engine->RegisterEnumValue("FaceCameraMode", "FC_LOOKAT_XYZ", FC_LOOKAT_XYZ);
    engine->RegisterEnumValue("FaceCameraMode", "FC_LOOKAT_Y", FC_LOOKAT_Y);
    engine->RegisterEnumValue("FaceCameraMode", "FC_LOOKAT_MIXED", FC_LOOKAT_MIXED);
    engine->RegisterEnumValue("FaceCameraMode", "FC_DIRECTION", FC_DIRECTION);

    // enum ShadowQuality | File: ../Graphics/GraphicsDefs.h | Line: 374
    engine->RegisterEnum("ShadowQuality");
    engine->RegisterEnumValue("ShadowQuality", "SHADOWQUALITY_SIMPLE_16BIT", SHADOWQUALITY_SIMPLE_16BIT);
    engine->RegisterEnumValue("ShadowQuality", "SHADOWQUALITY_SIMPLE_24BIT", SHADOWQUALITY_SIMPLE_24BIT);
    engine->RegisterEnumValue("ShadowQuality", "SHADOWQUALITY_PCF_16BIT", SHADOWQUALITY_PCF_16BIT);
    engine->RegisterEnumValue("ShadowQuality", "SHADOWQUALITY_PCF_24BIT", SHADOWQUALITY_PCF_24BIT);
    engine->RegisterEnumValue("ShadowQuality", "SHADOWQUALITY_VSM", SHADOWQUALITY_VSM);
    engine->RegisterEnumValue("ShadowQuality", "SHADOWQUALITY_BLUR_VSM", SHADOWQUALITY_BLUR_VSM);

    // enum MaterialQuality | File: ../Graphics/GraphicsDefs.h | Line: 445
    engine->RegisterEnum("MaterialQuality");
    engine->RegisterEnumValue("MaterialQuality", "QUALITY_LOW", QUALITY_LOW);
    engine->RegisterEnumValue("MaterialQuality", "QUALITY_MEDIUM", QUALITY_MEDIUM);
    engine->RegisterEnumValue("MaterialQuality", "QUALITY_HIGH", QUALITY_HIGH);
    engine->RegisterEnumValue("MaterialQuality", "QUALITY_MAX", QUALITY_MAX);

    // enum ClearTarget | File: ../Graphics/GraphicsDefs.h | Line: 453
    engine->RegisterEnum("ClearTarget");
    engine->RegisterEnumValue("ClearTarget", "CLEAR_COLOR", CLEAR_COLOR);
    engine->RegisterEnumValue("ClearTarget", "CLEAR_DEPTH", CLEAR_DEPTH);
    engine->RegisterEnumValue("ClearTarget", "CLEAR_STENCIL", CLEAR_STENCIL);

    // enum VertexMask | File: ../Graphics/GraphicsDefs.h | Line: 462
    engine->RegisterEnum("VertexMask");
    engine->RegisterEnumValue("VertexMask", "MASK_NONE", MASK_NONE);
    engine->RegisterEnumValue("VertexMask", "MASK_POSITION", MASK_POSITION);
    engine->RegisterEnumValue("VertexMask", "MASK_NORMAL", MASK_NORMAL);
    engine->RegisterEnumValue("VertexMask", "MASK_COLOR", MASK_COLOR);
    engine->RegisterEnumValue("VertexMask", "MASK_TEXCOORD1", MASK_TEXCOORD1);
    engine->RegisterEnumValue("VertexMask", "MASK_TEXCOORD2", MASK_TEXCOORD2);
    engine->RegisterEnumValue("VertexMask", "MASK_CUBETEXCOORD1", MASK_CUBETEXCOORD1);
    engine->RegisterEnumValue("VertexMask", "MASK_CUBETEXCOORD2", MASK_CUBETEXCOORD2);
    engine->RegisterEnumValue("VertexMask", "MASK_TANGENT", MASK_TANGENT);
    engine->RegisterEnumValue("VertexMask", "MASK_BLENDWEIGHTS", MASK_BLENDWEIGHTS);
    engine->RegisterEnumValue("VertexMask", "MASK_BLENDINDICES", MASK_BLENDINDICES);
    engine->RegisterEnumValue("VertexMask", "MASK_INSTANCEMATRIX1", MASK_INSTANCEMATRIX1);
    engine->RegisterEnumValue("VertexMask", "MASK_INSTANCEMATRIX2", MASK_INSTANCEMATRIX2);
    engine->RegisterEnumValue("VertexMask", "MASK_INSTANCEMATRIX3", MASK_INSTANCEMATRIX3);
    engine->RegisterEnumValue("VertexMask", "MASK_OBJECTINDEX", MASK_OBJECTINDEX);

    // enum LightType | File: ../Graphics/Light.h | Line: 40
    engine->RegisterEnum("LightType");
    engine->RegisterEnumValue("LightType", "LIGHT_DIRECTIONAL", LIGHT_DIRECTIONAL);
    engine->RegisterEnumValue("LightType", "LIGHT_SPOT", LIGHT_SPOT);
    engine->RegisterEnumValue("LightType", "LIGHT_POINT", LIGHT_POINT);

    // enum RayQueryLevel | File: ../Graphics/OctreeQuery.h | Line: 177
    engine->RegisterEnum("RayQueryLevel");
    engine->RegisterEnumValue("RayQueryLevel", "RAY_AABB", RAY_AABB);
    engine->RegisterEnumValue("RayQueryLevel", "RAY_OBB", RAY_OBB);
    engine->RegisterEnumValue("RayQueryLevel", "RAY_TRIANGLE", RAY_TRIANGLE);
    engine->RegisterEnumValue("RayQueryLevel", "RAY_TRIANGLE_UV", RAY_TRIANGLE_UV);

    // enum EmitterType | File: ../Graphics/ParticleEffect.h | Line: 35
    engine->RegisterEnum("EmitterType");
    engine->RegisterEnumValue("EmitterType", "EMITTER_SPHERE", EMITTER_SPHERE);
    engine->RegisterEnumValue("EmitterType", "EMITTER_BOX", EMITTER_BOX);
    engine->RegisterEnumValue("EmitterType", "EMITTER_SPHEREVOLUME", EMITTER_SPHEREVOLUME);
    engine->RegisterEnumValue("EmitterType", "EMITTER_CYLINDER", EMITTER_CYLINDER);
    engine->RegisterEnumValue("EmitterType", "EMITTER_RING", EMITTER_RING);

    // enum RenderCommandType | File: ../Graphics/RenderPath.h | Line: 41
    engine->RegisterEnum("RenderCommandType");
    engine->RegisterEnumValue("RenderCommandType", "CMD_NONE", CMD_NONE);
    engine->RegisterEnumValue("RenderCommandType", "CMD_CLEAR", CMD_CLEAR);
    engine->RegisterEnumValue("RenderCommandType", "CMD_SCENEPASS", CMD_SCENEPASS);
    engine->RegisterEnumValue("RenderCommandType", "CMD_QUAD", CMD_QUAD);
    engine->RegisterEnumValue("RenderCommandType", "CMD_FORWARDLIGHTS", CMD_FORWARDLIGHTS);
    engine->RegisterEnumValue("RenderCommandType", "CMD_LIGHTVOLUMES", CMD_LIGHTVOLUMES);
    engine->RegisterEnumValue("RenderCommandType", "CMD_RENDERUI", CMD_RENDERUI);
    engine->RegisterEnumValue("RenderCommandType", "CMD_SENDEVENT", CMD_SENDEVENT);

    // enum RenderCommandSortMode | File: ../Graphics/RenderPath.h | Line: 54
    engine->RegisterEnum("RenderCommandSortMode");
    engine->RegisterEnumValue("RenderCommandSortMode", "SORT_FRONTTOBACK", SORT_FRONTTOBACK);
    engine->RegisterEnumValue("RenderCommandSortMode", "SORT_BACKTOFRONT", SORT_BACKTOFRONT);

    // enum RenderTargetSizeMode | File: ../Graphics/RenderPath.h | Line: 61
    engine->RegisterEnum("RenderTargetSizeMode");
    engine->RegisterEnumValue("RenderTargetSizeMode", "SIZE_ABSOLUTE", SIZE_ABSOLUTE);
    engine->RegisterEnumValue("RenderTargetSizeMode", "SIZE_VIEWPORTDIVISOR", SIZE_VIEWPORTDIVISOR);
    engine->RegisterEnumValue("RenderTargetSizeMode", "SIZE_VIEWPORTMULTIPLIER", SIZE_VIEWPORTMULTIPLIER);

    // enum TrailType | File: ../Graphics/RibbonTrail.h | Line: 33
    engine->RegisterEnum("TrailType");
    engine->RegisterEnumValue("TrailType", "TT_FACE_CAMERA", TT_FACE_CAMERA);
    engine->RegisterEnumValue("TrailType", "TT_BONE", TT_BONE);

    // enum BoneCollisionShape | File: ../Graphics/Skeleton.h | Line: 34
    engine->RegisterEnum("BoneCollisionShape");
    engine->RegisterEnumValue("BoneCollisionShape", "BONECOLLISION_NONE", BONECOLLISION_NONE);
    engine->RegisterEnumValue("BoneCollisionShape", "BONECOLLISION_SPHERE", BONECOLLISION_SPHERE);
    engine->RegisterEnumValue("BoneCollisionShape", "BONECOLLISION_BOX", BONECOLLISION_BOX);

    // enum PassLightingMode | File: ../Graphics/Technique.h | Line: 37
    engine->RegisterEnum("PassLightingMode");
    engine->RegisterEnumValue("PassLightingMode", "LIGHTING_UNLIT", LIGHTING_UNLIT);
    engine->RegisterEnumValue("PassLightingMode", "LIGHTING_PERVERTEX", LIGHTING_PERVERTEX);
    engine->RegisterEnumValue("PassLightingMode", "LIGHTING_PERPIXEL", LIGHTING_PERPIXEL);

    // enum MouseMode | File: ../Input/Input.h | Line: 40
    engine->RegisterEnum("MouseMode");
    engine->RegisterEnumValue("MouseMode", "MM_ABSOLUTE", MM_ABSOLUTE);
    engine->RegisterEnumValue("MouseMode", "MM_RELATIVE", MM_RELATIVE);
    engine->RegisterEnumValue("MouseMode", "MM_WRAP", MM_WRAP);
    engine->RegisterEnumValue("MouseMode", "MM_FREE", MM_FREE);
    engine->RegisterEnumValue("MouseMode", "MM_INVALID", MM_INVALID);

    // enum MouseButton | File: ../Input/InputConstants.h | Line: 40
    engine->RegisterEnum("MouseButton");
    engine->RegisterEnumValue("MouseButton", "MOUSEB_NONE", MOUSEB_NONE);
    engine->RegisterEnumValue("MouseButton", "MOUSEB_LEFT", MOUSEB_LEFT);
    engine->RegisterEnumValue("MouseButton", "MOUSEB_MIDDLE", MOUSEB_MIDDLE);
    engine->RegisterEnumValue("MouseButton", "MOUSEB_RIGHT", MOUSEB_RIGHT);
    engine->RegisterEnumValue("MouseButton", "MOUSEB_X1", MOUSEB_X1);
    engine->RegisterEnumValue("MouseButton", "MOUSEB_X2", MOUSEB_X2);
    engine->RegisterEnumValue("MouseButton", "MOUSEB_ANY", MOUSEB_ANY);

    // enum Qualifier | File: ../Input/InputConstants.h | Line: 52
    engine->RegisterEnum("Qualifier");
    engine->RegisterEnumValue("Qualifier", "QUAL_NONE", QUAL_NONE);
    engine->RegisterEnumValue("Qualifier", "QUAL_SHIFT", QUAL_SHIFT);
    engine->RegisterEnumValue("Qualifier", "QUAL_CTRL", QUAL_CTRL);
    engine->RegisterEnumValue("Qualifier", "QUAL_ALT", QUAL_ALT);
    engine->RegisterEnumValue("Qualifier", "QUAL_ANY", QUAL_ANY);

    // enum Key | File: ../Input/InputConstants.h | Line: 63
    engine->RegisterEnum("Key");
    engine->RegisterEnumValue("Key", "KEY_UNKNOWN", KEY_UNKNOWN);
    engine->RegisterEnumValue("Key", "KEY_A", KEY_A);
    engine->RegisterEnumValue("Key", "KEY_B", KEY_B);
    engine->RegisterEnumValue("Key", "KEY_C", KEY_C);
    engine->RegisterEnumValue("Key", "KEY_D", KEY_D);
    engine->RegisterEnumValue("Key", "KEY_E", KEY_E);
    engine->RegisterEnumValue("Key", "KEY_F", KEY_F);
    engine->RegisterEnumValue("Key", "KEY_G", KEY_G);
    engine->RegisterEnumValue("Key", "KEY_H", KEY_H);
    engine->RegisterEnumValue("Key", "KEY_I", KEY_I);
    engine->RegisterEnumValue("Key", "KEY_J", KEY_J);
    engine->RegisterEnumValue("Key", "KEY_K", KEY_K);
    engine->RegisterEnumValue("Key", "KEY_L", KEY_L);
    engine->RegisterEnumValue("Key", "KEY_M", KEY_M);
    engine->RegisterEnumValue("Key", "KEY_N", KEY_N);
    engine->RegisterEnumValue("Key", "KEY_O", KEY_O);
    engine->RegisterEnumValue("Key", "KEY_P", KEY_P);
    engine->RegisterEnumValue("Key", "KEY_Q", KEY_Q);
    engine->RegisterEnumValue("Key", "KEY_R", KEY_R);
    engine->RegisterEnumValue("Key", "KEY_S", KEY_S);
    engine->RegisterEnumValue("Key", "KEY_T", KEY_T);
    engine->RegisterEnumValue("Key", "KEY_U", KEY_U);
    engine->RegisterEnumValue("Key", "KEY_V", KEY_V);
    engine->RegisterEnumValue("Key", "KEY_W", KEY_W);
    engine->RegisterEnumValue("Key", "KEY_X", KEY_X);
    engine->RegisterEnumValue("Key", "KEY_Y", KEY_Y);
    engine->RegisterEnumValue("Key", "KEY_Z", KEY_Z);
    engine->RegisterEnumValue("Key", "KEY_0", KEY_0);
    engine->RegisterEnumValue("Key", "KEY_1", KEY_1);
    engine->RegisterEnumValue("Key", "KEY_2", KEY_2);
    engine->RegisterEnumValue("Key", "KEY_3", KEY_3);
    engine->RegisterEnumValue("Key", "KEY_4", KEY_4);
    engine->RegisterEnumValue("Key", "KEY_5", KEY_5);
    engine->RegisterEnumValue("Key", "KEY_6", KEY_6);
    engine->RegisterEnumValue("Key", "KEY_7", KEY_7);
    engine->RegisterEnumValue("Key", "KEY_8", KEY_8);
    engine->RegisterEnumValue("Key", "KEY_9", KEY_9);
    engine->RegisterEnumValue("Key", "KEY_BACKSPACE", KEY_BACKSPACE);
    engine->RegisterEnumValue("Key", "KEY_TAB", KEY_TAB);
    engine->RegisterEnumValue("Key", "KEY_RETURN", KEY_RETURN);
    engine->RegisterEnumValue("Key", "KEY_RETURN2", KEY_RETURN2);
    engine->RegisterEnumValue("Key", "KEY_KP_ENTER", KEY_KP_ENTER);
    engine->RegisterEnumValue("Key", "KEY_SHIFT", KEY_SHIFT);
    engine->RegisterEnumValue("Key", "KEY_CTRL", KEY_CTRL);
    engine->RegisterEnumValue("Key", "KEY_ALT", KEY_ALT);
    engine->RegisterEnumValue("Key", "KEY_GUI", KEY_GUI);
    engine->RegisterEnumValue("Key", "KEY_PAUSE", KEY_PAUSE);
    engine->RegisterEnumValue("Key", "KEY_CAPSLOCK", KEY_CAPSLOCK);
    engine->RegisterEnumValue("Key", "KEY_ESCAPE", KEY_ESCAPE);
    engine->RegisterEnumValue("Key", "KEY_SPACE", KEY_SPACE);
    engine->RegisterEnumValue("Key", "KEY_PAGEUP", KEY_PAGEUP);
    engine->RegisterEnumValue("Key", "KEY_PAGEDOWN", KEY_PAGEDOWN);
    engine->RegisterEnumValue("Key", "KEY_END", KEY_END);
    engine->RegisterEnumValue("Key", "KEY_HOME", KEY_HOME);
    engine->RegisterEnumValue("Key", "KEY_LEFT", KEY_LEFT);
    engine->RegisterEnumValue("Key", "KEY_UP", KEY_UP);
    engine->RegisterEnumValue("Key", "KEY_RIGHT", KEY_RIGHT);
    engine->RegisterEnumValue("Key", "KEY_DOWN", KEY_DOWN);
    engine->RegisterEnumValue("Key", "KEY_SELECT", KEY_SELECT);
    engine->RegisterEnumValue("Key", "KEY_PRINTSCREEN", KEY_PRINTSCREEN);
    engine->RegisterEnumValue("Key", "KEY_INSERT", KEY_INSERT);
    engine->RegisterEnumValue("Key", "KEY_DELETE", KEY_DELETE);
    engine->RegisterEnumValue("Key", "KEY_LGUI", KEY_LGUI);
    engine->RegisterEnumValue("Key", "KEY_RGUI", KEY_RGUI);
    engine->RegisterEnumValue("Key", "KEY_APPLICATION", KEY_APPLICATION);
    engine->RegisterEnumValue("Key", "KEY_KP_0", KEY_KP_0);
    engine->RegisterEnumValue("Key", "KEY_KP_1", KEY_KP_1);
    engine->RegisterEnumValue("Key", "KEY_KP_2", KEY_KP_2);
    engine->RegisterEnumValue("Key", "KEY_KP_3", KEY_KP_3);
    engine->RegisterEnumValue("Key", "KEY_KP_4", KEY_KP_4);
    engine->RegisterEnumValue("Key", "KEY_KP_5", KEY_KP_5);
    engine->RegisterEnumValue("Key", "KEY_KP_6", KEY_KP_6);
    engine->RegisterEnumValue("Key", "KEY_KP_7", KEY_KP_7);
    engine->RegisterEnumValue("Key", "KEY_KP_8", KEY_KP_8);
    engine->RegisterEnumValue("Key", "KEY_KP_9", KEY_KP_9);
    engine->RegisterEnumValue("Key", "KEY_KP_MULTIPLY", KEY_KP_MULTIPLY);
    engine->RegisterEnumValue("Key", "KEY_KP_PLUS", KEY_KP_PLUS);
    engine->RegisterEnumValue("Key", "KEY_KP_MINUS", KEY_KP_MINUS);
    engine->RegisterEnumValue("Key", "KEY_KP_PERIOD", KEY_KP_PERIOD);
    engine->RegisterEnumValue("Key", "KEY_KP_DIVIDE", KEY_KP_DIVIDE);
    engine->RegisterEnumValue("Key", "KEY_F1", KEY_F1);
    engine->RegisterEnumValue("Key", "KEY_F2", KEY_F2);
    engine->RegisterEnumValue("Key", "KEY_F3", KEY_F3);
    engine->RegisterEnumValue("Key", "KEY_F4", KEY_F4);
    engine->RegisterEnumValue("Key", "KEY_F5", KEY_F5);
    engine->RegisterEnumValue("Key", "KEY_F6", KEY_F6);
    engine->RegisterEnumValue("Key", "KEY_F7", KEY_F7);
    engine->RegisterEnumValue("Key", "KEY_F8", KEY_F8);
    engine->RegisterEnumValue("Key", "KEY_F9", KEY_F9);
    engine->RegisterEnumValue("Key", "KEY_F10", KEY_F10);
    engine->RegisterEnumValue("Key", "KEY_F11", KEY_F11);
    engine->RegisterEnumValue("Key", "KEY_F12", KEY_F12);
    engine->RegisterEnumValue("Key", "KEY_F13", KEY_F13);
    engine->RegisterEnumValue("Key", "KEY_F14", KEY_F14);
    engine->RegisterEnumValue("Key", "KEY_F15", KEY_F15);
    engine->RegisterEnumValue("Key", "KEY_F16", KEY_F16);
    engine->RegisterEnumValue("Key", "KEY_F17", KEY_F17);
    engine->RegisterEnumValue("Key", "KEY_F18", KEY_F18);
    engine->RegisterEnumValue("Key", "KEY_F19", KEY_F19);
    engine->RegisterEnumValue("Key", "KEY_F20", KEY_F20);
    engine->RegisterEnumValue("Key", "KEY_F21", KEY_F21);
    engine->RegisterEnumValue("Key", "KEY_F22", KEY_F22);
    engine->RegisterEnumValue("Key", "KEY_F23", KEY_F23);
    engine->RegisterEnumValue("Key", "KEY_F24", KEY_F24);
    engine->RegisterEnumValue("Key", "KEY_NUMLOCKCLEAR", KEY_NUMLOCKCLEAR);
    engine->RegisterEnumValue("Key", "KEY_SCROLLLOCK", KEY_SCROLLLOCK);
    engine->RegisterEnumValue("Key", "KEY_LSHIFT", KEY_LSHIFT);
    engine->RegisterEnumValue("Key", "KEY_RSHIFT", KEY_RSHIFT);
    engine->RegisterEnumValue("Key", "KEY_LCTRL", KEY_LCTRL);
    engine->RegisterEnumValue("Key", "KEY_RCTRL", KEY_RCTRL);
    engine->RegisterEnumValue("Key", "KEY_LALT", KEY_LALT);
    engine->RegisterEnumValue("Key", "KEY_RALT", KEY_RALT);
    engine->RegisterEnumValue("Key", "KEY_AC_BACK", KEY_AC_BACK);
    engine->RegisterEnumValue("Key", "KEY_AC_BOOKMARKS", KEY_AC_BOOKMARKS);
    engine->RegisterEnumValue("Key", "KEY_AC_FORWARD", KEY_AC_FORWARD);
    engine->RegisterEnumValue("Key", "KEY_AC_HOME", KEY_AC_HOME);
    engine->RegisterEnumValue("Key", "KEY_AC_REFRESH", KEY_AC_REFRESH);
    engine->RegisterEnumValue("Key", "KEY_AC_SEARCH", KEY_AC_SEARCH);
    engine->RegisterEnumValue("Key", "KEY_AC_STOP", KEY_AC_STOP);
    engine->RegisterEnumValue("Key", "KEY_AGAIN", KEY_AGAIN);
    engine->RegisterEnumValue("Key", "KEY_ALTERASE", KEY_ALTERASE);
    engine->RegisterEnumValue("Key", "KEY_AMPERSAND", KEY_AMPERSAND);
    engine->RegisterEnumValue("Key", "KEY_ASTERISK", KEY_ASTERISK);
    engine->RegisterEnumValue("Key", "KEY_AT", KEY_AT);
    engine->RegisterEnumValue("Key", "KEY_AUDIOMUTE", KEY_AUDIOMUTE);
    engine->RegisterEnumValue("Key", "KEY_AUDIONEXT", KEY_AUDIONEXT);
    engine->RegisterEnumValue("Key", "KEY_AUDIOPLAY", KEY_AUDIOPLAY);
    engine->RegisterEnumValue("Key", "KEY_AUDIOPREV", KEY_AUDIOPREV);
    engine->RegisterEnumValue("Key", "KEY_AUDIOSTOP", KEY_AUDIOSTOP);
    engine->RegisterEnumValue("Key", "KEY_BACKQUOTE", KEY_BACKQUOTE);
    engine->RegisterEnumValue("Key", "KEY_BACKSLASH", KEY_BACKSLASH);
    engine->RegisterEnumValue("Key", "KEY_BRIGHTNESSDOWN", KEY_BRIGHTNESSDOWN);
    engine->RegisterEnumValue("Key", "KEY_BRIGHTNESSUP", KEY_BRIGHTNESSUP);
    engine->RegisterEnumValue("Key", "KEY_CALCULATOR", KEY_CALCULATOR);
    engine->RegisterEnumValue("Key", "KEY_CANCEL", KEY_CANCEL);
    engine->RegisterEnumValue("Key", "KEY_CARET", KEY_CARET);
    engine->RegisterEnumValue("Key", "KEY_CLEAR", KEY_CLEAR);
    engine->RegisterEnumValue("Key", "KEY_CLEARAGAIN", KEY_CLEARAGAIN);
    engine->RegisterEnumValue("Key", "KEY_COLON", KEY_COLON);
    engine->RegisterEnumValue("Key", "KEY_COMMA", KEY_COMMA);
    engine->RegisterEnumValue("Key", "KEY_COMPUTER", KEY_COMPUTER);
    engine->RegisterEnumValue("Key", "KEY_COPY", KEY_COPY);
    engine->RegisterEnumValue("Key", "KEY_CRSEL", KEY_CRSEL);
    engine->RegisterEnumValue("Key", "KEY_CURRENCYSUBUNIT", KEY_CURRENCYSUBUNIT);
    engine->RegisterEnumValue("Key", "KEY_CURRENCYUNIT", KEY_CURRENCYUNIT);
    engine->RegisterEnumValue("Key", "KEY_CUT", KEY_CUT);
    engine->RegisterEnumValue("Key", "KEY_DECIMALSEPARATOR", KEY_DECIMALSEPARATOR);
    engine->RegisterEnumValue("Key", "KEY_DISPLAYSWITCH", KEY_DISPLAYSWITCH);
    engine->RegisterEnumValue("Key", "KEY_DOLLAR", KEY_DOLLAR);
    engine->RegisterEnumValue("Key", "KEY_EJECT", KEY_EJECT);
    engine->RegisterEnumValue("Key", "KEY_EQUALS", KEY_EQUALS);
    engine->RegisterEnumValue("Key", "KEY_EXCLAIM", KEY_EXCLAIM);
    engine->RegisterEnumValue("Key", "KEY_EXSEL", KEY_EXSEL);
    engine->RegisterEnumValue("Key", "KEY_FIND", KEY_FIND);
    engine->RegisterEnumValue("Key", "KEY_GREATER", KEY_GREATER);
    engine->RegisterEnumValue("Key", "KEY_HASH", KEY_HASH);
    engine->RegisterEnumValue("Key", "KEY_HELP", KEY_HELP);
    engine->RegisterEnumValue("Key", "KEY_KBDILLUMDOWN", KEY_KBDILLUMDOWN);
    engine->RegisterEnumValue("Key", "KEY_KBDILLUMTOGGLE", KEY_KBDILLUMTOGGLE);
    engine->RegisterEnumValue("Key", "KEY_KBDILLUMUP", KEY_KBDILLUMUP);
    engine->RegisterEnumValue("Key", "KEY_KP_00", KEY_KP_00);
    engine->RegisterEnumValue("Key", "KEY_KP_000", KEY_KP_000);
    engine->RegisterEnumValue("Key", "KEY_KP_A", KEY_KP_A);
    engine->RegisterEnumValue("Key", "KEY_KP_AMPERSAND", KEY_KP_AMPERSAND);
    engine->RegisterEnumValue("Key", "KEY_KP_AT", KEY_KP_AT);
    engine->RegisterEnumValue("Key", "KEY_KP_B", KEY_KP_B);
    engine->RegisterEnumValue("Key", "KEY_KP_BACKSPACE", KEY_KP_BACKSPACE);
    engine->RegisterEnumValue("Key", "KEY_KP_BINARY", KEY_KP_BINARY);
    engine->RegisterEnumValue("Key", "KEY_KP_C", KEY_KP_C);
    engine->RegisterEnumValue("Key", "KEY_KP_CLEAR", KEY_KP_CLEAR);
    engine->RegisterEnumValue("Key", "KEY_KP_CLEARENTRY", KEY_KP_CLEARENTRY);
    engine->RegisterEnumValue("Key", "KEY_KP_COLON", KEY_KP_COLON);
    engine->RegisterEnumValue("Key", "KEY_KP_COMMA", KEY_KP_COMMA);
    engine->RegisterEnumValue("Key", "KEY_KP_D", KEY_KP_D);
    engine->RegisterEnumValue("Key", "KEY_KP_DBLAMPERSAND", KEY_KP_DBLAMPERSAND);
    engine->RegisterEnumValue("Key", "KEY_KP_DBLVERTICALBAR", KEY_KP_DBLVERTICALBAR);
    engine->RegisterEnumValue("Key", "KEY_KP_DECIMAL", KEY_KP_DECIMAL);
    engine->RegisterEnumValue("Key", "KEY_KP_E", KEY_KP_E);
    engine->RegisterEnumValue("Key", "KEY_KP_EQUALS", KEY_KP_EQUALS);
    engine->RegisterEnumValue("Key", "KEY_KP_EQUALSAS400", KEY_KP_EQUALSAS400);
    engine->RegisterEnumValue("Key", "KEY_KP_EXCLAM", KEY_KP_EXCLAM);
    engine->RegisterEnumValue("Key", "KEY_KP_F", KEY_KP_F);
    engine->RegisterEnumValue("Key", "KEY_KP_GREATER", KEY_KP_GREATER);
    engine->RegisterEnumValue("Key", "KEY_KP_HASH", KEY_KP_HASH);
    engine->RegisterEnumValue("Key", "KEY_KP_HEXADECIMAL", KEY_KP_HEXADECIMAL);
    engine->RegisterEnumValue("Key", "KEY_KP_LEFTBRACE", KEY_KP_LEFTBRACE);
    engine->RegisterEnumValue("Key", "KEY_KP_LEFTPAREN", KEY_KP_LEFTPAREN);
    engine->RegisterEnumValue("Key", "KEY_KP_LESS", KEY_KP_LESS);
    engine->RegisterEnumValue("Key", "KEY_KP_MEMADD", KEY_KP_MEMADD);
    engine->RegisterEnumValue("Key", "KEY_KP_MEMCLEAR", KEY_KP_MEMCLEAR);
    engine->RegisterEnumValue("Key", "KEY_KP_MEMDIVIDE", KEY_KP_MEMDIVIDE);
    engine->RegisterEnumValue("Key", "KEY_KP_MEMMULTIPLY", KEY_KP_MEMMULTIPLY);
    engine->RegisterEnumValue("Key", "KEY_KP_MEMRECALL", KEY_KP_MEMRECALL);
    engine->RegisterEnumValue("Key", "KEY_KP_MEMSTORE", KEY_KP_MEMSTORE);
    engine->RegisterEnumValue("Key", "KEY_KP_MEMSUBTRACT", KEY_KP_MEMSUBTRACT);
    engine->RegisterEnumValue("Key", "KEY_KP_OCTAL", KEY_KP_OCTAL);
    engine->RegisterEnumValue("Key", "KEY_KP_PERCENT", KEY_KP_PERCENT);
    engine->RegisterEnumValue("Key", "KEY_KP_PLUSMINUS", KEY_KP_PLUSMINUS);
    engine->RegisterEnumValue("Key", "KEY_KP_POWER", KEY_KP_POWER);
    engine->RegisterEnumValue("Key", "KEY_KP_RIGHTBRACE", KEY_KP_RIGHTBRACE);
    engine->RegisterEnumValue("Key", "KEY_KP_RIGHTPAREN", KEY_KP_RIGHTPAREN);
    engine->RegisterEnumValue("Key", "KEY_KP_SPACE", KEY_KP_SPACE);
    engine->RegisterEnumValue("Key", "KEY_KP_TAB", KEY_KP_TAB);
    engine->RegisterEnumValue("Key", "KEY_KP_VERTICALBAR", KEY_KP_VERTICALBAR);
    engine->RegisterEnumValue("Key", "KEY_KP_XOR", KEY_KP_XOR);
    engine->RegisterEnumValue("Key", "KEY_LEFTBRACKET", KEY_LEFTBRACKET);
    engine->RegisterEnumValue("Key", "KEY_LEFTPAREN", KEY_LEFTPAREN);
    engine->RegisterEnumValue("Key", "KEY_LESS", KEY_LESS);
    engine->RegisterEnumValue("Key", "KEY_MAIL", KEY_MAIL);
    engine->RegisterEnumValue("Key", "KEY_MEDIASELECT", KEY_MEDIASELECT);
    engine->RegisterEnumValue("Key", "KEY_MENU", KEY_MENU);
    engine->RegisterEnumValue("Key", "KEY_MINUS", KEY_MINUS);
    engine->RegisterEnumValue("Key", "KEY_MODE", KEY_MODE);
    engine->RegisterEnumValue("Key", "KEY_MUTE", KEY_MUTE);
    engine->RegisterEnumValue("Key", "KEY_OPER", KEY_OPER);
    engine->RegisterEnumValue("Key", "KEY_OUT", KEY_OUT);
    engine->RegisterEnumValue("Key", "KEY_PASTE", KEY_PASTE);
    engine->RegisterEnumValue("Key", "KEY_PERCENT", KEY_PERCENT);
    engine->RegisterEnumValue("Key", "KEY_PERIOD", KEY_PERIOD);
    engine->RegisterEnumValue("Key", "KEY_PLUS", KEY_PLUS);
    engine->RegisterEnumValue("Key", "KEY_POWER", KEY_POWER);
    engine->RegisterEnumValue("Key", "KEY_PRIOR", KEY_PRIOR);
    engine->RegisterEnumValue("Key", "KEY_QUESTION", KEY_QUESTION);
    engine->RegisterEnumValue("Key", "KEY_QUOTE", KEY_QUOTE);
    engine->RegisterEnumValue("Key", "KEY_QUOTEDBL", KEY_QUOTEDBL);
    engine->RegisterEnumValue("Key", "KEY_RIGHTBRACKET", KEY_RIGHTBRACKET);
    engine->RegisterEnumValue("Key", "KEY_RIGHTPAREN", KEY_RIGHTPAREN);
    engine->RegisterEnumValue("Key", "KEY_SEMICOLON", KEY_SEMICOLON);
    engine->RegisterEnumValue("Key", "KEY_SEPARATOR", KEY_SEPARATOR);
    engine->RegisterEnumValue("Key", "KEY_SLASH", KEY_SLASH);
    engine->RegisterEnumValue("Key", "KEY_SLEEP", KEY_SLEEP);
    engine->RegisterEnumValue("Key", "KEY_STOP", KEY_STOP);
    engine->RegisterEnumValue("Key", "KEY_SYSREQ", KEY_SYSREQ);
    engine->RegisterEnumValue("Key", "KEY_THOUSANDSSEPARATOR", KEY_THOUSANDSSEPARATOR);
    engine->RegisterEnumValue("Key", "KEY_UNDERSCORE", KEY_UNDERSCORE);
    engine->RegisterEnumValue("Key", "KEY_UNDO", KEY_UNDO);
    engine->RegisterEnumValue("Key", "KEY_VOLUMEDOWN", KEY_VOLUMEDOWN);
    engine->RegisterEnumValue("Key", "KEY_VOLUMEUP", KEY_VOLUMEUP);
    engine->RegisterEnumValue("Key", "KEY_WWW", KEY_WWW);

    // enum Scancode | File: ../Input/InputConstants.h | Line: 306
    engine->RegisterEnum("Scancode");
    engine->RegisterEnumValue("Scancode", "SCANCODE_UNKNOWN", SCANCODE_UNKNOWN);
    engine->RegisterEnumValue("Scancode", "SCANCODE_CTRL", SCANCODE_CTRL);
    engine->RegisterEnumValue("Scancode", "SCANCODE_SHIFT", SCANCODE_SHIFT);
    engine->RegisterEnumValue("Scancode", "SCANCODE_ALT", SCANCODE_ALT);
    engine->RegisterEnumValue("Scancode", "SCANCODE_GUI", SCANCODE_GUI);
    engine->RegisterEnumValue("Scancode", "SCANCODE_A", SCANCODE_A);
    engine->RegisterEnumValue("Scancode", "SCANCODE_B", SCANCODE_B);
    engine->RegisterEnumValue("Scancode", "SCANCODE_C", SCANCODE_C);
    engine->RegisterEnumValue("Scancode", "SCANCODE_D", SCANCODE_D);
    engine->RegisterEnumValue("Scancode", "SCANCODE_E", SCANCODE_E);
    engine->RegisterEnumValue("Scancode", "SCANCODE_F", SCANCODE_F);
    engine->RegisterEnumValue("Scancode", "SCANCODE_G", SCANCODE_G);
    engine->RegisterEnumValue("Scancode", "SCANCODE_H", SCANCODE_H);
    engine->RegisterEnumValue("Scancode", "SCANCODE_I", SCANCODE_I);
    engine->RegisterEnumValue("Scancode", "SCANCODE_J", SCANCODE_J);
    engine->RegisterEnumValue("Scancode", "SCANCODE_K", SCANCODE_K);
    engine->RegisterEnumValue("Scancode", "SCANCODE_L", SCANCODE_L);
    engine->RegisterEnumValue("Scancode", "SCANCODE_M", SCANCODE_M);
    engine->RegisterEnumValue("Scancode", "SCANCODE_N", SCANCODE_N);
    engine->RegisterEnumValue("Scancode", "SCANCODE_O", SCANCODE_O);
    engine->RegisterEnumValue("Scancode", "SCANCODE_P", SCANCODE_P);
    engine->RegisterEnumValue("Scancode", "SCANCODE_Q", SCANCODE_Q);
    engine->RegisterEnumValue("Scancode", "SCANCODE_R", SCANCODE_R);
    engine->RegisterEnumValue("Scancode", "SCANCODE_S", SCANCODE_S);
    engine->RegisterEnumValue("Scancode", "SCANCODE_T", SCANCODE_T);
    engine->RegisterEnumValue("Scancode", "SCANCODE_U", SCANCODE_U);
    engine->RegisterEnumValue("Scancode", "SCANCODE_V", SCANCODE_V);
    engine->RegisterEnumValue("Scancode", "SCANCODE_W", SCANCODE_W);
    engine->RegisterEnumValue("Scancode", "SCANCODE_X", SCANCODE_X);
    engine->RegisterEnumValue("Scancode", "SCANCODE_Y", SCANCODE_Y);
    engine->RegisterEnumValue("Scancode", "SCANCODE_Z", SCANCODE_Z);
    engine->RegisterEnumValue("Scancode", "SCANCODE_1", SCANCODE_1);
    engine->RegisterEnumValue("Scancode", "SCANCODE_2", SCANCODE_2);
    engine->RegisterEnumValue("Scancode", "SCANCODE_3", SCANCODE_3);
    engine->RegisterEnumValue("Scancode", "SCANCODE_4", SCANCODE_4);
    engine->RegisterEnumValue("Scancode", "SCANCODE_5", SCANCODE_5);
    engine->RegisterEnumValue("Scancode", "SCANCODE_6", SCANCODE_6);
    engine->RegisterEnumValue("Scancode", "SCANCODE_7", SCANCODE_7);
    engine->RegisterEnumValue("Scancode", "SCANCODE_8", SCANCODE_8);
    engine->RegisterEnumValue("Scancode", "SCANCODE_9", SCANCODE_9);
    engine->RegisterEnumValue("Scancode", "SCANCODE_0", SCANCODE_0);
    engine->RegisterEnumValue("Scancode", "SCANCODE_RETURN", SCANCODE_RETURN);
    engine->RegisterEnumValue("Scancode", "SCANCODE_ESCAPE", SCANCODE_ESCAPE);
    engine->RegisterEnumValue("Scancode", "SCANCODE_BACKSPACE", SCANCODE_BACKSPACE);
    engine->RegisterEnumValue("Scancode", "SCANCODE_TAB", SCANCODE_TAB);
    engine->RegisterEnumValue("Scancode", "SCANCODE_SPACE", SCANCODE_SPACE);
    engine->RegisterEnumValue("Scancode", "SCANCODE_MINUS", SCANCODE_MINUS);
    engine->RegisterEnumValue("Scancode", "SCANCODE_EQUALS", SCANCODE_EQUALS);
    engine->RegisterEnumValue("Scancode", "SCANCODE_LEFTBRACKET", SCANCODE_LEFTBRACKET);
    engine->RegisterEnumValue("Scancode", "SCANCODE_RIGHTBRACKET", SCANCODE_RIGHTBRACKET);
    engine->RegisterEnumValue("Scancode", "SCANCODE_BACKSLASH", SCANCODE_BACKSLASH);
    engine->RegisterEnumValue("Scancode", "SCANCODE_NONUSHASH", SCANCODE_NONUSHASH);
    engine->RegisterEnumValue("Scancode", "SCANCODE_SEMICOLON", SCANCODE_SEMICOLON);
    engine->RegisterEnumValue("Scancode", "SCANCODE_APOSTROPHE", SCANCODE_APOSTROPHE);
    engine->RegisterEnumValue("Scancode", "SCANCODE_GRAVE", SCANCODE_GRAVE);
    engine->RegisterEnumValue("Scancode", "SCANCODE_COMMA", SCANCODE_COMMA);
    engine->RegisterEnumValue("Scancode", "SCANCODE_PERIOD", SCANCODE_PERIOD);
    engine->RegisterEnumValue("Scancode", "SCANCODE_SLASH", SCANCODE_SLASH);
    engine->RegisterEnumValue("Scancode", "SCANCODE_CAPSLOCK", SCANCODE_CAPSLOCK);
    engine->RegisterEnumValue("Scancode", "SCANCODE_F1", SCANCODE_F1);
    engine->RegisterEnumValue("Scancode", "SCANCODE_F2", SCANCODE_F2);
    engine->RegisterEnumValue("Scancode", "SCANCODE_F3", SCANCODE_F3);
    engine->RegisterEnumValue("Scancode", "SCANCODE_F4", SCANCODE_F4);
    engine->RegisterEnumValue("Scancode", "SCANCODE_F5", SCANCODE_F5);
    engine->RegisterEnumValue("Scancode", "SCANCODE_F6", SCANCODE_F6);
    engine->RegisterEnumValue("Scancode", "SCANCODE_F7", SCANCODE_F7);
    engine->RegisterEnumValue("Scancode", "SCANCODE_F8", SCANCODE_F8);
    engine->RegisterEnumValue("Scancode", "SCANCODE_F9", SCANCODE_F9);
    engine->RegisterEnumValue("Scancode", "SCANCODE_F10", SCANCODE_F10);
    engine->RegisterEnumValue("Scancode", "SCANCODE_F11", SCANCODE_F11);
    engine->RegisterEnumValue("Scancode", "SCANCODE_F12", SCANCODE_F12);
    engine->RegisterEnumValue("Scancode", "SCANCODE_PRINTSCREEN", SCANCODE_PRINTSCREEN);
    engine->RegisterEnumValue("Scancode", "SCANCODE_SCROLLLOCK", SCANCODE_SCROLLLOCK);
    engine->RegisterEnumValue("Scancode", "SCANCODE_PAUSE", SCANCODE_PAUSE);
    engine->RegisterEnumValue("Scancode", "SCANCODE_INSERT", SCANCODE_INSERT);
    engine->RegisterEnumValue("Scancode", "SCANCODE_HOME", SCANCODE_HOME);
    engine->RegisterEnumValue("Scancode", "SCANCODE_PAGEUP", SCANCODE_PAGEUP);
    engine->RegisterEnumValue("Scancode", "SCANCODE_DELETE", SCANCODE_DELETE);
    engine->RegisterEnumValue("Scancode", "SCANCODE_END", SCANCODE_END);
    engine->RegisterEnumValue("Scancode", "SCANCODE_PAGEDOWN", SCANCODE_PAGEDOWN);
    engine->RegisterEnumValue("Scancode", "SCANCODE_RIGHT", SCANCODE_RIGHT);
    engine->RegisterEnumValue("Scancode", "SCANCODE_LEFT", SCANCODE_LEFT);
    engine->RegisterEnumValue("Scancode", "SCANCODE_DOWN", SCANCODE_DOWN);
    engine->RegisterEnumValue("Scancode", "SCANCODE_UP", SCANCODE_UP);
    engine->RegisterEnumValue("Scancode", "SCANCODE_NUMLOCKCLEAR", SCANCODE_NUMLOCKCLEAR);
    engine->RegisterEnumValue("Scancode", "SCANCODE_KP_DIVIDE", SCANCODE_KP_DIVIDE);
    engine->RegisterEnumValue("Scancode", "SCANCODE_KP_MULTIPLY", SCANCODE_KP_MULTIPLY);
    engine->RegisterEnumValue("Scancode", "SCANCODE_KP_MINUS", SCANCODE_KP_MINUS);
    engine->RegisterEnumValue("Scancode", "SCANCODE_KP_PLUS", SCANCODE_KP_PLUS);
    engine->RegisterEnumValue("Scancode", "SCANCODE_KP_ENTER", SCANCODE_KP_ENTER);
    engine->RegisterEnumValue("Scancode", "SCANCODE_KP_1", SCANCODE_KP_1);
    engine->RegisterEnumValue("Scancode", "SCANCODE_KP_2", SCANCODE_KP_2);
    engine->RegisterEnumValue("Scancode", "SCANCODE_KP_3", SCANCODE_KP_3);
    engine->RegisterEnumValue("Scancode", "SCANCODE_KP_4", SCANCODE_KP_4);
    engine->RegisterEnumValue("Scancode", "SCANCODE_KP_5", SCANCODE_KP_5);
    engine->RegisterEnumValue("Scancode", "SCANCODE_KP_6", SCANCODE_KP_6);
    engine->RegisterEnumValue("Scancode", "SCANCODE_KP_7", SCANCODE_KP_7);
    engine->RegisterEnumValue("Scancode", "SCANCODE_KP_8", SCANCODE_KP_8);
    engine->RegisterEnumValue("Scancode", "SCANCODE_KP_9", SCANCODE_KP_9);
    engine->RegisterEnumValue("Scancode", "SCANCODE_KP_0", SCANCODE_KP_0);
    engine->RegisterEnumValue("Scancode", "SCANCODE_KP_PERIOD", SCANCODE_KP_PERIOD);
    engine->RegisterEnumValue("Scancode", "SCANCODE_NONUSBACKSLASH", SCANCODE_NONUSBACKSLASH);
    engine->RegisterEnumValue("Scancode", "SCANCODE_APPLICATION", SCANCODE_APPLICATION);
    engine->RegisterEnumValue("Scancode", "SCANCODE_POWER", SCANCODE_POWER);
    engine->RegisterEnumValue("Scancode", "SCANCODE_KP_EQUALS", SCANCODE_KP_EQUALS);
    engine->RegisterEnumValue("Scancode", "SCANCODE_F13", SCANCODE_F13);
    engine->RegisterEnumValue("Scancode", "SCANCODE_F14", SCANCODE_F14);
    engine->RegisterEnumValue("Scancode", "SCANCODE_F15", SCANCODE_F15);
    engine->RegisterEnumValue("Scancode", "SCANCODE_F16", SCANCODE_F16);
    engine->RegisterEnumValue("Scancode", "SCANCODE_F17", SCANCODE_F17);
    engine->RegisterEnumValue("Scancode", "SCANCODE_F18", SCANCODE_F18);
    engine->RegisterEnumValue("Scancode", "SCANCODE_F19", SCANCODE_F19);
    engine->RegisterEnumValue("Scancode", "SCANCODE_F20", SCANCODE_F20);
    engine->RegisterEnumValue("Scancode", "SCANCODE_F21", SCANCODE_F21);
    engine->RegisterEnumValue("Scancode", "SCANCODE_F22", SCANCODE_F22);
    engine->RegisterEnumValue("Scancode", "SCANCODE_F23", SCANCODE_F23);
    engine->RegisterEnumValue("Scancode", "SCANCODE_F24", SCANCODE_F24);
    engine->RegisterEnumValue("Scancode", "SCANCODE_EXECUTE", SCANCODE_EXECUTE);
    engine->RegisterEnumValue("Scancode", "SCANCODE_HELP", SCANCODE_HELP);
    engine->RegisterEnumValue("Scancode", "SCANCODE_MENU", SCANCODE_MENU);
    engine->RegisterEnumValue("Scancode", "SCANCODE_SELECT", SCANCODE_SELECT);
    engine->RegisterEnumValue("Scancode", "SCANCODE_STOP", SCANCODE_STOP);
    engine->RegisterEnumValue("Scancode", "SCANCODE_AGAIN", SCANCODE_AGAIN);
    engine->RegisterEnumValue("Scancode", "SCANCODE_UNDO", SCANCODE_UNDO);
    engine->RegisterEnumValue("Scancode", "SCANCODE_CUT", SCANCODE_CUT);
    engine->RegisterEnumValue("Scancode", "SCANCODE_COPY", SCANCODE_COPY);
    engine->RegisterEnumValue("Scancode", "SCANCODE_PASTE", SCANCODE_PASTE);
    engine->RegisterEnumValue("Scancode", "SCANCODE_FIND", SCANCODE_FIND);
    engine->RegisterEnumValue("Scancode", "SCANCODE_MUTE", SCANCODE_MUTE);
    engine->RegisterEnumValue("Scancode", "SCANCODE_VOLUMEUP", SCANCODE_VOLUMEUP);
    engine->RegisterEnumValue("Scancode", "SCANCODE_VOLUMEDOWN", SCANCODE_VOLUMEDOWN);
    engine->RegisterEnumValue("Scancode", "SCANCODE_KP_COMMA", SCANCODE_KP_COMMA);
    engine->RegisterEnumValue("Scancode", "SCANCODE_KP_EQUALSAS400", SCANCODE_KP_EQUALSAS400);
    engine->RegisterEnumValue("Scancode", "SCANCODE_INTERNATIONAL1", SCANCODE_INTERNATIONAL1);
    engine->RegisterEnumValue("Scancode", "SCANCODE_INTERNATIONAL2", SCANCODE_INTERNATIONAL2);
    engine->RegisterEnumValue("Scancode", "SCANCODE_INTERNATIONAL3", SCANCODE_INTERNATIONAL3);
    engine->RegisterEnumValue("Scancode", "SCANCODE_INTERNATIONAL4", SCANCODE_INTERNATIONAL4);
    engine->RegisterEnumValue("Scancode", "SCANCODE_INTERNATIONAL5", SCANCODE_INTERNATIONAL5);
    engine->RegisterEnumValue("Scancode", "SCANCODE_INTERNATIONAL6", SCANCODE_INTERNATIONAL6);
    engine->RegisterEnumValue("Scancode", "SCANCODE_INTERNATIONAL7", SCANCODE_INTERNATIONAL7);
    engine->RegisterEnumValue("Scancode", "SCANCODE_INTERNATIONAL8", SCANCODE_INTERNATIONAL8);
    engine->RegisterEnumValue("Scancode", "SCANCODE_INTERNATIONAL9", SCANCODE_INTERNATIONAL9);
    engine->RegisterEnumValue("Scancode", "SCANCODE_LANG1", SCANCODE_LANG1);
    engine->RegisterEnumValue("Scancode", "SCANCODE_LANG2", SCANCODE_LANG2);
    engine->RegisterEnumValue("Scancode", "SCANCODE_LANG3", SCANCODE_LANG3);
    engine->RegisterEnumValue("Scancode", "SCANCODE_LANG4", SCANCODE_LANG4);
    engine->RegisterEnumValue("Scancode", "SCANCODE_LANG5", SCANCODE_LANG5);
    engine->RegisterEnumValue("Scancode", "SCANCODE_LANG6", SCANCODE_LANG6);
    engine->RegisterEnumValue("Scancode", "SCANCODE_LANG7", SCANCODE_LANG7);
    engine->RegisterEnumValue("Scancode", "SCANCODE_LANG8", SCANCODE_LANG8);
    engine->RegisterEnumValue("Scancode", "SCANCODE_LANG9", SCANCODE_LANG9);
    engine->RegisterEnumValue("Scancode", "SCANCODE_ALTERASE", SCANCODE_ALTERASE);
    engine->RegisterEnumValue("Scancode", "SCANCODE_SYSREQ", SCANCODE_SYSREQ);
    engine->RegisterEnumValue("Scancode", "SCANCODE_CANCEL", SCANCODE_CANCEL);
    engine->RegisterEnumValue("Scancode", "SCANCODE_CLEAR", SCANCODE_CLEAR);
    engine->RegisterEnumValue("Scancode", "SCANCODE_PRIOR", SCANCODE_PRIOR);
    engine->RegisterEnumValue("Scancode", "SCANCODE_RETURN2", SCANCODE_RETURN2);
    engine->RegisterEnumValue("Scancode", "SCANCODE_SEPARATOR", SCANCODE_SEPARATOR);
    engine->RegisterEnumValue("Scancode", "SCANCODE_OUT", SCANCODE_OUT);
    engine->RegisterEnumValue("Scancode", "SCANCODE_OPER", SCANCODE_OPER);
    engine->RegisterEnumValue("Scancode", "SCANCODE_CLEARAGAIN", SCANCODE_CLEARAGAIN);
    engine->RegisterEnumValue("Scancode", "SCANCODE_CRSEL", SCANCODE_CRSEL);
    engine->RegisterEnumValue("Scancode", "SCANCODE_EXSEL", SCANCODE_EXSEL);
    engine->RegisterEnumValue("Scancode", "SCANCODE_KP_00", SCANCODE_KP_00);
    engine->RegisterEnumValue("Scancode", "SCANCODE_KP_000", SCANCODE_KP_000);
    engine->RegisterEnumValue("Scancode", "SCANCODE_THOUSANDSSEPARATOR", SCANCODE_THOUSANDSSEPARATOR);
    engine->RegisterEnumValue("Scancode", "SCANCODE_DECIMALSEPARATOR", SCANCODE_DECIMALSEPARATOR);
    engine->RegisterEnumValue("Scancode", "SCANCODE_CURRENCYUNIT", SCANCODE_CURRENCYUNIT);
    engine->RegisterEnumValue("Scancode", "SCANCODE_CURRENCYSUBUNIT", SCANCODE_CURRENCYSUBUNIT);
    engine->RegisterEnumValue("Scancode", "SCANCODE_KP_LEFTPAREN", SCANCODE_KP_LEFTPAREN);
    engine->RegisterEnumValue("Scancode", "SCANCODE_KP_RIGHTPAREN", SCANCODE_KP_RIGHTPAREN);
    engine->RegisterEnumValue("Scancode", "SCANCODE_KP_LEFTBRACE", SCANCODE_KP_LEFTBRACE);
    engine->RegisterEnumValue("Scancode", "SCANCODE_KP_RIGHTBRACE", SCANCODE_KP_RIGHTBRACE);
    engine->RegisterEnumValue("Scancode", "SCANCODE_KP_TAB", SCANCODE_KP_TAB);
    engine->RegisterEnumValue("Scancode", "SCANCODE_KP_BACKSPACE", SCANCODE_KP_BACKSPACE);
    engine->RegisterEnumValue("Scancode", "SCANCODE_KP_A", SCANCODE_KP_A);
    engine->RegisterEnumValue("Scancode", "SCANCODE_KP_B", SCANCODE_KP_B);
    engine->RegisterEnumValue("Scancode", "SCANCODE_KP_C", SCANCODE_KP_C);
    engine->RegisterEnumValue("Scancode", "SCANCODE_KP_D", SCANCODE_KP_D);
    engine->RegisterEnumValue("Scancode", "SCANCODE_KP_E", SCANCODE_KP_E);
    engine->RegisterEnumValue("Scancode", "SCANCODE_KP_F", SCANCODE_KP_F);
    engine->RegisterEnumValue("Scancode", "SCANCODE_KP_XOR", SCANCODE_KP_XOR);
    engine->RegisterEnumValue("Scancode", "SCANCODE_KP_POWER", SCANCODE_KP_POWER);
    engine->RegisterEnumValue("Scancode", "SCANCODE_KP_PERCENT", SCANCODE_KP_PERCENT);
    engine->RegisterEnumValue("Scancode", "SCANCODE_KP_LESS", SCANCODE_KP_LESS);
    engine->RegisterEnumValue("Scancode", "SCANCODE_KP_GREATER", SCANCODE_KP_GREATER);
    engine->RegisterEnumValue("Scancode", "SCANCODE_KP_AMPERSAND", SCANCODE_KP_AMPERSAND);
    engine->RegisterEnumValue("Scancode", "SCANCODE_KP_DBLAMPERSAND", SCANCODE_KP_DBLAMPERSAND);
    engine->RegisterEnumValue("Scancode", "SCANCODE_KP_VERTICALBAR", SCANCODE_KP_VERTICALBAR);
    engine->RegisterEnumValue("Scancode", "SCANCODE_KP_DBLVERTICALBAR", SCANCODE_KP_DBLVERTICALBAR);
    engine->RegisterEnumValue("Scancode", "SCANCODE_KP_COLON", SCANCODE_KP_COLON);
    engine->RegisterEnumValue("Scancode", "SCANCODE_KP_HASH", SCANCODE_KP_HASH);
    engine->RegisterEnumValue("Scancode", "SCANCODE_KP_SPACE", SCANCODE_KP_SPACE);
    engine->RegisterEnumValue("Scancode", "SCANCODE_KP_AT", SCANCODE_KP_AT);
    engine->RegisterEnumValue("Scancode", "SCANCODE_KP_EXCLAM", SCANCODE_KP_EXCLAM);
    engine->RegisterEnumValue("Scancode", "SCANCODE_KP_MEMSTORE", SCANCODE_KP_MEMSTORE);
    engine->RegisterEnumValue("Scancode", "SCANCODE_KP_MEMRECALL", SCANCODE_KP_MEMRECALL);
    engine->RegisterEnumValue("Scancode", "SCANCODE_KP_MEMCLEAR", SCANCODE_KP_MEMCLEAR);
    engine->RegisterEnumValue("Scancode", "SCANCODE_KP_MEMADD", SCANCODE_KP_MEMADD);
    engine->RegisterEnumValue("Scancode", "SCANCODE_KP_MEMSUBTRACT", SCANCODE_KP_MEMSUBTRACT);
    engine->RegisterEnumValue("Scancode", "SCANCODE_KP_MEMMULTIPLY", SCANCODE_KP_MEMMULTIPLY);
    engine->RegisterEnumValue("Scancode", "SCANCODE_KP_MEMDIVIDE", SCANCODE_KP_MEMDIVIDE);
    engine->RegisterEnumValue("Scancode", "SCANCODE_KP_PLUSMINUS", SCANCODE_KP_PLUSMINUS);
    engine->RegisterEnumValue("Scancode", "SCANCODE_KP_CLEAR", SCANCODE_KP_CLEAR);
    engine->RegisterEnumValue("Scancode", "SCANCODE_KP_CLEARENTRY", SCANCODE_KP_CLEARENTRY);
    engine->RegisterEnumValue("Scancode", "SCANCODE_KP_BINARY", SCANCODE_KP_BINARY);
    engine->RegisterEnumValue("Scancode", "SCANCODE_KP_OCTAL", SCANCODE_KP_OCTAL);
    engine->RegisterEnumValue("Scancode", "SCANCODE_KP_DECIMAL", SCANCODE_KP_DECIMAL);
    engine->RegisterEnumValue("Scancode", "SCANCODE_KP_HEXADECIMAL", SCANCODE_KP_HEXADECIMAL);
    engine->RegisterEnumValue("Scancode", "SCANCODE_LCTRL", SCANCODE_LCTRL);
    engine->RegisterEnumValue("Scancode", "SCANCODE_LSHIFT", SCANCODE_LSHIFT);
    engine->RegisterEnumValue("Scancode", "SCANCODE_LALT", SCANCODE_LALT);
    engine->RegisterEnumValue("Scancode", "SCANCODE_LGUI", SCANCODE_LGUI);
    engine->RegisterEnumValue("Scancode", "SCANCODE_RCTRL", SCANCODE_RCTRL);
    engine->RegisterEnumValue("Scancode", "SCANCODE_RSHIFT", SCANCODE_RSHIFT);
    engine->RegisterEnumValue("Scancode", "SCANCODE_RALT", SCANCODE_RALT);
    engine->RegisterEnumValue("Scancode", "SCANCODE_RGUI", SCANCODE_RGUI);
    engine->RegisterEnumValue("Scancode", "SCANCODE_MODE", SCANCODE_MODE);
    engine->RegisterEnumValue("Scancode", "SCANCODE_AUDIONEXT", SCANCODE_AUDIONEXT);
    engine->RegisterEnumValue("Scancode", "SCANCODE_AUDIOPREV", SCANCODE_AUDIOPREV);
    engine->RegisterEnumValue("Scancode", "SCANCODE_AUDIOSTOP", SCANCODE_AUDIOSTOP);
    engine->RegisterEnumValue("Scancode", "SCANCODE_AUDIOPLAY", SCANCODE_AUDIOPLAY);
    engine->RegisterEnumValue("Scancode", "SCANCODE_AUDIOMUTE", SCANCODE_AUDIOMUTE);
    engine->RegisterEnumValue("Scancode", "SCANCODE_MEDIASELECT", SCANCODE_MEDIASELECT);
    engine->RegisterEnumValue("Scancode", "SCANCODE_WWW", SCANCODE_WWW);
    engine->RegisterEnumValue("Scancode", "SCANCODE_MAIL", SCANCODE_MAIL);
    engine->RegisterEnumValue("Scancode", "SCANCODE_CALCULATOR", SCANCODE_CALCULATOR);
    engine->RegisterEnumValue("Scancode", "SCANCODE_COMPUTER", SCANCODE_COMPUTER);
    engine->RegisterEnumValue("Scancode", "SCANCODE_AC_SEARCH", SCANCODE_AC_SEARCH);
    engine->RegisterEnumValue("Scancode", "SCANCODE_AC_HOME", SCANCODE_AC_HOME);
    engine->RegisterEnumValue("Scancode", "SCANCODE_AC_BACK", SCANCODE_AC_BACK);
    engine->RegisterEnumValue("Scancode", "SCANCODE_AC_FORWARD", SCANCODE_AC_FORWARD);
    engine->RegisterEnumValue("Scancode", "SCANCODE_AC_STOP", SCANCODE_AC_STOP);
    engine->RegisterEnumValue("Scancode", "SCANCODE_AC_REFRESH", SCANCODE_AC_REFRESH);
    engine->RegisterEnumValue("Scancode", "SCANCODE_AC_BOOKMARKS", SCANCODE_AC_BOOKMARKS);
    engine->RegisterEnumValue("Scancode", "SCANCODE_BRIGHTNESSDOWN", SCANCODE_BRIGHTNESSDOWN);
    engine->RegisterEnumValue("Scancode", "SCANCODE_BRIGHTNESSUP", SCANCODE_BRIGHTNESSUP);
    engine->RegisterEnumValue("Scancode", "SCANCODE_DISPLAYSWITCH", SCANCODE_DISPLAYSWITCH);
    engine->RegisterEnumValue("Scancode", "SCANCODE_KBDILLUMTOGGLE", SCANCODE_KBDILLUMTOGGLE);
    engine->RegisterEnumValue("Scancode", "SCANCODE_KBDILLUMDOWN", SCANCODE_KBDILLUMDOWN);
    engine->RegisterEnumValue("Scancode", "SCANCODE_KBDILLUMUP", SCANCODE_KBDILLUMUP);
    engine->RegisterEnumValue("Scancode", "SCANCODE_EJECT", SCANCODE_EJECT);
    engine->RegisterEnumValue("Scancode", "SCANCODE_SLEEP", SCANCODE_SLEEP);
    engine->RegisterEnumValue("Scancode", "SCANCODE_APP1", SCANCODE_APP1);
    engine->RegisterEnumValue("Scancode", "SCANCODE_APP2", SCANCODE_APP2);

    // enum HatPosition | File: ../Input/InputConstants.h | Line: 555
    engine->RegisterEnum("HatPosition");
    engine->RegisterEnumValue("HatPosition", "HAT_CENTER", HAT_CENTER);
    engine->RegisterEnumValue("HatPosition", "HAT_UP", HAT_UP);
    engine->RegisterEnumValue("HatPosition", "HAT_RIGHT", HAT_RIGHT);
    engine->RegisterEnumValue("HatPosition", "HAT_DOWN", HAT_DOWN);
    engine->RegisterEnumValue("HatPosition", "HAT_LEFT", HAT_LEFT);

    // enum ControllerButton | File: ../Input/InputConstants.h | Line: 564
    engine->RegisterEnum("ControllerButton");
    engine->RegisterEnumValue("ControllerButton", "CONTROLLER_BUTTON_A", CONTROLLER_BUTTON_A);
    engine->RegisterEnumValue("ControllerButton", "CONTROLLER_BUTTON_B", CONTROLLER_BUTTON_B);
    engine->RegisterEnumValue("ControllerButton", "CONTROLLER_BUTTON_X", CONTROLLER_BUTTON_X);
    engine->RegisterEnumValue("ControllerButton", "CONTROLLER_BUTTON_Y", CONTROLLER_BUTTON_Y);
    engine->RegisterEnumValue("ControllerButton", "CONTROLLER_BUTTON_BACK", CONTROLLER_BUTTON_BACK);
    engine->RegisterEnumValue("ControllerButton", "CONTROLLER_BUTTON_GUIDE", CONTROLLER_BUTTON_GUIDE);
    engine->RegisterEnumValue("ControllerButton", "CONTROLLER_BUTTON_START", CONTROLLER_BUTTON_START);
    engine->RegisterEnumValue("ControllerButton", "CONTROLLER_BUTTON_LEFTSTICK", CONTROLLER_BUTTON_LEFTSTICK);
    engine->RegisterEnumValue("ControllerButton", "CONTROLLER_BUTTON_RIGHTSTICK", CONTROLLER_BUTTON_RIGHTSTICK);
    engine->RegisterEnumValue("ControllerButton", "CONTROLLER_BUTTON_LEFTSHOULDER", CONTROLLER_BUTTON_LEFTSHOULDER);
    engine->RegisterEnumValue("ControllerButton", "CONTROLLER_BUTTON_RIGHTSHOULDER", CONTROLLER_BUTTON_RIGHTSHOULDER);
    engine->RegisterEnumValue("ControllerButton", "CONTROLLER_BUTTON_DPAD_UP", CONTROLLER_BUTTON_DPAD_UP);
    engine->RegisterEnumValue("ControllerButton", "CONTROLLER_BUTTON_DPAD_DOWN", CONTROLLER_BUTTON_DPAD_DOWN);
    engine->RegisterEnumValue("ControllerButton", "CONTROLLER_BUTTON_DPAD_LEFT", CONTROLLER_BUTTON_DPAD_LEFT);
    engine->RegisterEnumValue("ControllerButton", "CONTROLLER_BUTTON_DPAD_RIGHT", CONTROLLER_BUTTON_DPAD_RIGHT);

    // enum ControllerAxis | File: ../Input/InputConstants.h | Line: 583
    engine->RegisterEnum("ControllerAxis");
    engine->RegisterEnumValue("ControllerAxis", "CONTROLLER_AXIS_LEFTX", CONTROLLER_AXIS_LEFTX);
    engine->RegisterEnumValue("ControllerAxis", "CONTROLLER_AXIS_LEFTY", CONTROLLER_AXIS_LEFTY);
    engine->RegisterEnumValue("ControllerAxis", "CONTROLLER_AXIS_RIGHTX", CONTROLLER_AXIS_RIGHTX);
    engine->RegisterEnumValue("ControllerAxis", "CONTROLLER_AXIS_RIGHTY", CONTROLLER_AXIS_RIGHTY);
    engine->RegisterEnumValue("ControllerAxis", "CONTROLLER_AXIS_TRIGGERLEFT", CONTROLLER_AXIS_TRIGGERLEFT);
    engine->RegisterEnumValue("ControllerAxis", "CONTROLLER_AXIS_TRIGGERRIGHT", CONTROLLER_AXIS_TRIGGERRIGHT);

    // enum FileMode | File: ../IO/File.h | Line: 53
    engine->RegisterEnum("FileMode");
    engine->RegisterEnumValue("FileMode", "FILE_READ", FILE_READ);
    engine->RegisterEnumValue("FileMode", "FILE_WRITE", FILE_WRITE);
    engine->RegisterEnumValue("FileMode", "FILE_READWRITE", FILE_READWRITE);

    // enum FrustumPlane | File: ../Math/Frustum.h | Line: 38
    engine->RegisterEnum("FrustumPlane");
    engine->RegisterEnumValue("FrustumPlane", "PLANE_NEAR", PLANE_NEAR);
    engine->RegisterEnumValue("FrustumPlane", "PLANE_LEFT", PLANE_LEFT);
    engine->RegisterEnumValue("FrustumPlane", "PLANE_RIGHT", PLANE_RIGHT);
    engine->RegisterEnumValue("FrustumPlane", "PLANE_UP", PLANE_UP);
    engine->RegisterEnumValue("FrustumPlane", "PLANE_DOWN", PLANE_DOWN);
    engine->RegisterEnumValue("FrustumPlane", "PLANE_FAR", PLANE_FAR);

    // enum Intersection | File: ../Math/MathDefs.h | Line: 63
    engine->RegisterEnum("Intersection");
    engine->RegisterEnumValue("Intersection", "OUTSIDE", OUTSIDE);
    engine->RegisterEnumValue("Intersection", "INTERSECTS", INTERSECTS);
    engine->RegisterEnumValue("Intersection", "INSIDE", INSIDE);

#ifdef URHO3D_NAVIGATION
    // enum CrowdAgentRequestedTarget | File: ../Navigation/CrowdAgent.h | Line: 34
    engine->RegisterEnum("CrowdAgentRequestedTarget");
    engine->RegisterEnumValue("CrowdAgentRequestedTarget", "CA_REQUESTEDTARGET_NONE", CA_REQUESTEDTARGET_NONE);
    engine->RegisterEnumValue("CrowdAgentRequestedTarget", "CA_REQUESTEDTARGET_POSITION", CA_REQUESTEDTARGET_POSITION);
    engine->RegisterEnumValue("CrowdAgentRequestedTarget", "CA_REQUESTEDTARGET_VELOCITY", CA_REQUESTEDTARGET_VELOCITY);
#endif

#ifdef URHO3D_NAVIGATION
    // enum CrowdAgentTargetState | File: ../Navigation/CrowdAgent.h | Line: 41
    engine->RegisterEnum("CrowdAgentTargetState");
    engine->RegisterEnumValue("CrowdAgentTargetState", "CA_TARGET_NONE", CA_TARGET_NONE);
    engine->RegisterEnumValue("CrowdAgentTargetState", "CA_TARGET_FAILED", CA_TARGET_FAILED);
    engine->RegisterEnumValue("CrowdAgentTargetState", "CA_TARGET_VALID", CA_TARGET_VALID);
    engine->RegisterEnumValue("CrowdAgentTargetState", "CA_TARGET_REQUESTING", CA_TARGET_REQUESTING);
    engine->RegisterEnumValue("CrowdAgentTargetState", "CA_TARGET_WAITINGFORQUEUE", CA_TARGET_WAITINGFORQUEUE);
    engine->RegisterEnumValue("CrowdAgentTargetState", "CA_TARGET_WAITINGFORPATH", CA_TARGET_WAITINGFORPATH);
    engine->RegisterEnumValue("CrowdAgentTargetState", "CA_TARGET_VELOCITY", CA_TARGET_VELOCITY);
#endif

#ifdef URHO3D_NAVIGATION
    // enum CrowdAgentState | File: ../Navigation/CrowdAgent.h | Line: 52
    engine->RegisterEnum("CrowdAgentState");
    engine->RegisterEnumValue("CrowdAgentState", "CA_STATE_INVALID", CA_STATE_INVALID);
    engine->RegisterEnumValue("CrowdAgentState", "CA_STATE_WALKING", CA_STATE_WALKING);
    engine->RegisterEnumValue("CrowdAgentState", "CA_STATE_OFFMESH", CA_STATE_OFFMESH);
#endif

#ifdef URHO3D_NAVIGATION
    // enum NavigationQuality | File: ../Navigation/CrowdAgent.h | Line: 59
    engine->RegisterEnum("NavigationQuality");
    engine->RegisterEnumValue("NavigationQuality", "NAVIGATIONQUALITY_LOW", NAVIGATIONQUALITY_LOW);
    engine->RegisterEnumValue("NavigationQuality", "NAVIGATIONQUALITY_MEDIUM", NAVIGATIONQUALITY_MEDIUM);
    engine->RegisterEnumValue("NavigationQuality", "NAVIGATIONQUALITY_HIGH", NAVIGATIONQUALITY_HIGH);
#endif

#ifdef URHO3D_NAVIGATION
    // enum NavigationPushiness | File: ../Navigation/CrowdAgent.h | Line: 66
    engine->RegisterEnum("NavigationPushiness");
    engine->RegisterEnumValue("NavigationPushiness", "NAVIGATIONPUSHINESS_LOW", NAVIGATIONPUSHINESS_LOW);
    engine->RegisterEnumValue("NavigationPushiness", "NAVIGATIONPUSHINESS_MEDIUM", NAVIGATIONPUSHINESS_MEDIUM);
    engine->RegisterEnumValue("NavigationPushiness", "NAVIGATIONPUSHINESS_HIGH", NAVIGATIONPUSHINESS_HIGH);
    engine->RegisterEnumValue("NavigationPushiness", "NAVIGATIONPUSHINESS_NONE", NAVIGATIONPUSHINESS_NONE);
#endif

#ifdef URHO3D_NAVIGATION
    // enum NavmeshPartitionType | File: ../Navigation/NavigationMesh.h | Line: 47
    engine->RegisterEnum("NavmeshPartitionType");
    engine->RegisterEnumValue("NavmeshPartitionType", "NAVMESH_PARTITION_WATERSHED", NAVMESH_PARTITION_WATERSHED);
    engine->RegisterEnumValue("NavmeshPartitionType", "NAVMESH_PARTITION_MONOTONE", NAVMESH_PARTITION_MONOTONE);
#endif

#ifdef URHO3D_NAVIGATION
    // enum NavigationPathPointFlag | File: ../Navigation/NavigationMesh.h | Line: 74
    engine->RegisterEnum("NavigationPathPointFlag");
    engine->RegisterEnumValue("NavigationPathPointFlag", "NAVPATHFLAG_NONE", NAVPATHFLAG_NONE);
    engine->RegisterEnumValue("NavigationPathPointFlag", "NAVPATHFLAG_START", NAVPATHFLAG_START);
    engine->RegisterEnumValue("NavigationPathPointFlag", "NAVPATHFLAG_END", NAVPATHFLAG_END);
    engine->RegisterEnumValue("NavigationPathPointFlag", "NAVPATHFLAG_OFF_MESH", NAVPATHFLAG_OFF_MESH);
#endif

#ifdef URHO3D_NETWORK
    // enum ObserverPositionSendMode | File: ../Network/Connection.h | Line: 103
    engine->RegisterEnum("ObserverPositionSendMode");
    engine->RegisterEnumValue("ObserverPositionSendMode", "OPSM_NONE", OPSM_NONE);
    engine->RegisterEnumValue("ObserverPositionSendMode", "OPSM_POSITION", OPSM_POSITION);
    engine->RegisterEnumValue("ObserverPositionSendMode", "OPSM_POSITION_ROTATION", OPSM_POSITION_ROTATION);
#endif

#ifdef URHO3D_NETWORK
    // enum HttpRequestState | File: ../Network/HttpRequest.h | Line: 38
    engine->RegisterEnum("HttpRequestState");
    engine->RegisterEnumValue("HttpRequestState", "HTTP_INITIALIZING", HTTP_INITIALIZING);
    engine->RegisterEnumValue("HttpRequestState", "HTTP_ERROR", HTTP_ERROR);
    engine->RegisterEnumValue("HttpRequestState", "HTTP_OPEN", HTTP_OPEN);
    engine->RegisterEnumValue("HttpRequestState", "HTTP_CLOSED", HTTP_CLOSED);
#endif

#ifdef URHO3D_PHYSICS
    // enum ShapeType | File: ../Physics/CollisionShape.h | Line: 53
    engine->RegisterEnum("ShapeType");
    engine->RegisterEnumValue("ShapeType", "SHAPE_BOX", SHAPE_BOX);
    engine->RegisterEnumValue("ShapeType", "SHAPE_SPHERE", SHAPE_SPHERE);
    engine->RegisterEnumValue("ShapeType", "SHAPE_STATICPLANE", SHAPE_STATICPLANE);
    engine->RegisterEnumValue("ShapeType", "SHAPE_CYLINDER", SHAPE_CYLINDER);
    engine->RegisterEnumValue("ShapeType", "SHAPE_CAPSULE", SHAPE_CAPSULE);
    engine->RegisterEnumValue("ShapeType", "SHAPE_CONE", SHAPE_CONE);
    engine->RegisterEnumValue("ShapeType", "SHAPE_TRIANGLEMESH", SHAPE_TRIANGLEMESH);
    engine->RegisterEnumValue("ShapeType", "SHAPE_CONVEXHULL", SHAPE_CONVEXHULL);
    engine->RegisterEnumValue("ShapeType", "SHAPE_TERRAIN", SHAPE_TERRAIN);
    engine->RegisterEnumValue("ShapeType", "SHAPE_GIMPACTMESH", SHAPE_GIMPACTMESH);
#endif

#ifdef URHO3D_PHYSICS
    // enum ConstraintType | File: ../Physics/Constraint.h | Line: 37
    engine->RegisterEnum("ConstraintType");
    engine->RegisterEnumValue("ConstraintType", "CONSTRAINT_POINT", CONSTRAINT_POINT);
    engine->RegisterEnumValue("ConstraintType", "CONSTRAINT_HINGE", CONSTRAINT_HINGE);
    engine->RegisterEnumValue("ConstraintType", "CONSTRAINT_SLIDER", CONSTRAINT_SLIDER);
    engine->RegisterEnumValue("ConstraintType", "CONSTRAINT_CONETWIST", CONSTRAINT_CONETWIST);
#endif

#ifdef URHO3D_PHYSICS
    // enum CollisionEventMode | File: ../Physics/RigidBody.h | Line: 45
    engine->RegisterEnum("CollisionEventMode");
    engine->RegisterEnumValue("CollisionEventMode", "COLLISION_NEVER", COLLISION_NEVER);
    engine->RegisterEnumValue("CollisionEventMode", "COLLISION_ACTIVE", COLLISION_ACTIVE);
    engine->RegisterEnumValue("CollisionEventMode", "COLLISION_ALWAYS", COLLISION_ALWAYS);
#endif

    // enum CompressedFormat | File: ../Resource/Image.h | Line: 39
    engine->RegisterEnum("CompressedFormat");
    engine->RegisterEnumValue("CompressedFormat", "CF_NONE", CF_NONE);
    engine->RegisterEnumValue("CompressedFormat", "CF_RGBA", CF_RGBA);
    engine->RegisterEnumValue("CompressedFormat", "CF_DXT1", CF_DXT1);
    engine->RegisterEnumValue("CompressedFormat", "CF_DXT3", CF_DXT3);
    engine->RegisterEnumValue("CompressedFormat", "CF_DXT5", CF_DXT5);
    engine->RegisterEnumValue("CompressedFormat", "CF_ETC1", CF_ETC1);
    engine->RegisterEnumValue("CompressedFormat", "CF_ETC2_RGB", CF_ETC2_RGB);
    engine->RegisterEnumValue("CompressedFormat", "CF_ETC2_RGBA", CF_ETC2_RGBA);
    engine->RegisterEnumValue("CompressedFormat", "CF_PVRTC_RGB_2BPP", CF_PVRTC_RGB_2BPP);
    engine->RegisterEnumValue("CompressedFormat", "CF_PVRTC_RGBA_2BPP", CF_PVRTC_RGBA_2BPP);
    engine->RegisterEnumValue("CompressedFormat", "CF_PVRTC_RGB_4BPP", CF_PVRTC_RGB_4BPP);
    engine->RegisterEnumValue("CompressedFormat", "CF_PVRTC_RGBA_4BPP", CF_PVRTC_RGBA_4BPP);

    // enum JSONValueType | File: ../Resource/JSONValue.h | Line: 34
    engine->RegisterEnum("JSONValueType");
    engine->RegisterEnumValue("JSONValueType", "JSON_NULL", JSON_NULL);
    engine->RegisterEnumValue("JSONValueType", "JSON_BOOL", JSON_BOOL);
    engine->RegisterEnumValue("JSONValueType", "JSON_NUMBER", JSON_NUMBER);
    engine->RegisterEnumValue("JSONValueType", "JSON_STRING", JSON_STRING);
    engine->RegisterEnumValue("JSONValueType", "JSON_ARRAY", JSON_ARRAY);
    engine->RegisterEnumValue("JSONValueType", "JSON_OBJECT", JSON_OBJECT);

    // enum JSONNumberType | File: ../Resource/JSONValue.h | Line: 51
    engine->RegisterEnum("JSONNumberType");
    engine->RegisterEnumValue("JSONNumberType", "JSONNT_NAN", JSONNT_NAN);
    engine->RegisterEnumValue("JSONNumberType", "JSONNT_INT", JSONNT_INT);
    engine->RegisterEnumValue("JSONNumberType", "JSONNT_UINT", JSONNT_UINT);
    engine->RegisterEnumValue("JSONNumberType", "JSONNT_FLOAT_DOUBLE", JSONNT_FLOAT_DOUBLE);

    // enum WrapMode | File: ../Scene/AnimationDefs.h | Line: 32
    engine->RegisterEnum("WrapMode");
    engine->RegisterEnumValue("WrapMode", "WM_LOOP", WM_LOOP);
    engine->RegisterEnumValue("WrapMode", "WM_ONCE", WM_ONCE);
    engine->RegisterEnumValue("WrapMode", "WM_CLAMP", WM_CLAMP);

    // enum AutoRemoveMode | File: ../Scene/Component.h | Line: 40
    engine->RegisterEnum("AutoRemoveMode");
    engine->RegisterEnumValue("AutoRemoveMode", "REMOVE_DISABLED", REMOVE_DISABLED);
    engine->RegisterEnumValue("AutoRemoveMode", "REMOVE_COMPONENT", REMOVE_COMPONENT);
    engine->RegisterEnumValue("AutoRemoveMode", "REMOVE_NODE", REMOVE_NODE);

    // enum CreateMode | File: ../Scene/Node.h | Line: 44
    engine->RegisterEnum("CreateMode");
    engine->RegisterEnumValue("CreateMode", "REPLICATED", REPLICATED);
    engine->RegisterEnumValue("CreateMode", "LOCAL", LOCAL);

    // enum TransformSpace | File: ../Scene/Node.h | Line: 51
    engine->RegisterEnum("TransformSpace");
    engine->RegisterEnumValue("TransformSpace", "TS_LOCAL", TS_LOCAL);
    engine->RegisterEnumValue("TransformSpace", "TS_PARENT", TS_PARENT);
    engine->RegisterEnumValue("TransformSpace", "TS_WORLD", TS_WORLD);

    // enum LoadMode | File: ../Scene/Scene.h | Line: 47
    engine->RegisterEnum("LoadMode");
    engine->RegisterEnumValue("LoadMode", "LOAD_RESOURCES_ONLY", LOAD_RESOURCES_ONLY);
    engine->RegisterEnumValue("LoadMode", "LOAD_SCENE", LOAD_SCENE);
    engine->RegisterEnumValue("LoadMode", "LOAD_SCENE_AND_RESOURCES", LOAD_SCENE_AND_RESOURCES);

    // enum SmoothingType | File: ../Scene/SmoothedTransform.h | Line: 33
    engine->RegisterEnum("SmoothingType");
    engine->RegisterEnumValue("SmoothingType", "SMOOTH_NONE", SMOOTH_NONE);
    engine->RegisterEnumValue("SmoothingType", "SMOOTH_POSITION", SMOOTH_POSITION);
    engine->RegisterEnumValue("SmoothingType", "SMOOTH_ROTATION", SMOOTH_ROTATION);

    // enum InterpMethod | File: ../Scene/ValueAnimation.h | Line: 38
    engine->RegisterEnum("InterpMethod");
    engine->RegisterEnumValue("InterpMethod", "IM_NONE", IM_NONE);
    engine->RegisterEnumValue("InterpMethod", "IM_LINEAR", IM_LINEAR);
    engine->RegisterEnumValue("InterpMethod", "IM_SPLINE", IM_SPLINE);

    // enum CursorShape | File: ../UI/Cursor.h | Line: 38
    engine->RegisterEnum("CursorShape");
    engine->RegisterEnumValue("CursorShape", "CS_NORMAL", CS_NORMAL);
    engine->RegisterEnumValue("CursorShape", "CS_IBEAM", CS_IBEAM);
    engine->RegisterEnumValue("CursorShape", "CS_CROSS", CS_CROSS);
    engine->RegisterEnumValue("CursorShape", "CS_RESIZEVERTICAL", CS_RESIZEVERTICAL);
    engine->RegisterEnumValue("CursorShape", "CS_RESIZEDIAGONAL_TOPRIGHT", CS_RESIZEDIAGONAL_TOPRIGHT);
    engine->RegisterEnumValue("CursorShape", "CS_RESIZEHORIZONTAL", CS_RESIZEHORIZONTAL);
    engine->RegisterEnumValue("CursorShape", "CS_RESIZEDIAGONAL_TOPLEFT", CS_RESIZEDIAGONAL_TOPLEFT);
    engine->RegisterEnumValue("CursorShape", "CS_RESIZE_ALL", CS_RESIZE_ALL);
    engine->RegisterEnumValue("CursorShape", "CS_ACCEPTDROP", CS_ACCEPTDROP);
    engine->RegisterEnumValue("CursorShape", "CS_REJECTDROP", CS_REJECTDROP);
    engine->RegisterEnumValue("CursorShape", "CS_BUSY", CS_BUSY);
    engine->RegisterEnumValue("CursorShape", "CS_BUSY_ARROW", CS_BUSY_ARROW);
    engine->RegisterEnumValue("CursorShape", "CS_MAX_SHAPES", CS_MAX_SHAPES);

    // enum FontType | File: ../UI/Font.h | Line: 40
    engine->RegisterEnum("FontType");
    engine->RegisterEnumValue("FontType", "FONT_NONE", FONT_NONE);
    engine->RegisterEnumValue("FontType", "FONT_FREETYPE", FONT_FREETYPE);
    engine->RegisterEnumValue("FontType", "FONT_BITMAP", FONT_BITMAP);
    engine->RegisterEnumValue("FontType", "MAX_FONT_TYPES", MAX_FONT_TYPES);

    // enum HighlightMode | File: ../UI/ListView.h | Line: 35
    engine->RegisterEnum("HighlightMode");
    engine->RegisterEnumValue("HighlightMode", "HM_NEVER", HM_NEVER);
    engine->RegisterEnumValue("HighlightMode", "HM_FOCUS", HM_FOCUS);
    engine->RegisterEnumValue("HighlightMode", "HM_ALWAYS", HM_ALWAYS);

    // enum TextEffect | File: ../UI/Text.h | Line: 40
    engine->RegisterEnum("TextEffect");
    engine->RegisterEnumValue("TextEffect", "TE_NONE", TE_NONE);
    engine->RegisterEnumValue("TextEffect", "TE_SHADOW", TE_SHADOW);
    engine->RegisterEnumValue("TextEffect", "TE_STROKE", TE_STROKE);

    // enum FontHintLevel | File: ../UI/UI.h | Line: 37
    engine->RegisterEnum("FontHintLevel");
    engine->RegisterEnumValue("FontHintLevel", "FONT_HINT_LEVEL_NONE", FONT_HINT_LEVEL_NONE);
    engine->RegisterEnumValue("FontHintLevel", "FONT_HINT_LEVEL_LIGHT", FONT_HINT_LEVEL_LIGHT);
    engine->RegisterEnumValue("FontHintLevel", "FONT_HINT_LEVEL_NORMAL", FONT_HINT_LEVEL_NORMAL);

    // enum HorizontalAlignment | File: ../UI/UIElement.h | Line: 38
    engine->RegisterEnum("HorizontalAlignment");
    engine->RegisterEnumValue("HorizontalAlignment", "HA_LEFT", HA_LEFT);
    engine->RegisterEnumValue("HorizontalAlignment", "HA_CENTER", HA_CENTER);
    engine->RegisterEnumValue("HorizontalAlignment", "HA_RIGHT", HA_RIGHT);
    engine->RegisterEnumValue("HorizontalAlignment", "HA_CUSTOM", HA_CUSTOM);

    // enum VerticalAlignment | File: ../UI/UIElement.h | Line: 47
    engine->RegisterEnum("VerticalAlignment");
    engine->RegisterEnumValue("VerticalAlignment", "VA_TOP", VA_TOP);
    engine->RegisterEnumValue("VerticalAlignment", "VA_CENTER", VA_CENTER);
    engine->RegisterEnumValue("VerticalAlignment", "VA_BOTTOM", VA_BOTTOM);
    engine->RegisterEnumValue("VerticalAlignment", "VA_CUSTOM", VA_CUSTOM);

    // enum Corner | File: ../UI/UIElement.h | Line: 56
    engine->RegisterEnum("Corner");
    engine->RegisterEnumValue("Corner", "C_TOPLEFT", C_TOPLEFT);
    engine->RegisterEnumValue("Corner", "C_TOPRIGHT", C_TOPRIGHT);
    engine->RegisterEnumValue("Corner", "C_BOTTOMLEFT", C_BOTTOMLEFT);
    engine->RegisterEnumValue("Corner", "C_BOTTOMRIGHT", C_BOTTOMRIGHT);
    engine->RegisterEnumValue("Corner", "MAX_UIELEMENT_CORNERS", MAX_UIELEMENT_CORNERS);

    // enum Orientation | File: ../UI/UIElement.h | Line: 66
    engine->RegisterEnum("Orientation");
    engine->RegisterEnumValue("Orientation", "O_HORIZONTAL", O_HORIZONTAL);
    engine->RegisterEnumValue("Orientation", "O_VERTICAL", O_VERTICAL);

    // enum FocusMode | File: ../UI/UIElement.h | Line: 73
    engine->RegisterEnum("FocusMode");
    engine->RegisterEnumValue("FocusMode", "FM_NOTFOCUSABLE", FM_NOTFOCUSABLE);
    engine->RegisterEnumValue("FocusMode", "FM_RESETFOCUS", FM_RESETFOCUS);
    engine->RegisterEnumValue("FocusMode", "FM_FOCUSABLE", FM_FOCUSABLE);
    engine->RegisterEnumValue("FocusMode", "FM_FOCUSABLE_DEFOCUSABLE", FM_FOCUSABLE_DEFOCUSABLE);

    // enum LayoutMode | File: ../UI/UIElement.h | Line: 86
    engine->RegisterEnum("LayoutMode");
    engine->RegisterEnumValue("LayoutMode", "LM_FREE", LM_FREE);
    engine->RegisterEnumValue("LayoutMode", "LM_HORIZONTAL", LM_HORIZONTAL);
    engine->RegisterEnumValue("LayoutMode", "LM_VERTICAL", LM_VERTICAL);

    // enum TraversalMode | File: ../UI/UIElement.h | Line: 97
    engine->RegisterEnum("TraversalMode");
    engine->RegisterEnumValue("TraversalMode", "TM_BREADTH_FIRST", TM_BREADTH_FIRST);
    engine->RegisterEnumValue("TraversalMode", "TM_DEPTH_FIRST", TM_DEPTH_FIRST);

    // enum DragAndDropMode | File: ../UI/UIElement.h | Line: 105
    engine->RegisterEnum("DragAndDropMode");
    engine->RegisterEnumValue("DragAndDropMode", "DD_DISABLED", DD_DISABLED);
    engine->RegisterEnumValue("DragAndDropMode", "DD_SOURCE", DD_SOURCE);
    engine->RegisterEnumValue("DragAndDropMode", "DD_TARGET", DD_TARGET);
    engine->RegisterEnumValue("DragAndDropMode", "DD_SOURCE_AND_TARGET", DD_SOURCE_AND_TARGET);

    // enum WindowDragMode | File: ../UI/Window.h | Line: 34
    engine->RegisterEnum("WindowDragMode");
    engine->RegisterEnumValue("WindowDragMode", "DRAG_NONE", DRAG_NONE);
    engine->RegisterEnumValue("WindowDragMode", "DRAG_MOVE", DRAG_MOVE);
    engine->RegisterEnumValue("WindowDragMode", "DRAG_RESIZE_TOPLEFT", DRAG_RESIZE_TOPLEFT);
    engine->RegisterEnumValue("WindowDragMode", "DRAG_RESIZE_TOP", DRAG_RESIZE_TOP);
    engine->RegisterEnumValue("WindowDragMode", "DRAG_RESIZE_TOPRIGHT", DRAG_RESIZE_TOPRIGHT);
    engine->RegisterEnumValue("WindowDragMode", "DRAG_RESIZE_RIGHT", DRAG_RESIZE_RIGHT);
    engine->RegisterEnumValue("WindowDragMode", "DRAG_RESIZE_BOTTOMRIGHT", DRAG_RESIZE_BOTTOMRIGHT);
    engine->RegisterEnumValue("WindowDragMode", "DRAG_RESIZE_BOTTOM", DRAG_RESIZE_BOTTOM);
    engine->RegisterEnumValue("WindowDragMode", "DRAG_RESIZE_BOTTOMLEFT", DRAG_RESIZE_BOTTOMLEFT);
    engine->RegisterEnumValue("WindowDragMode", "DRAG_RESIZE_LEFT", DRAG_RESIZE_LEFT);

#ifdef URHO3D_URHO2D
    // enum LoopMode2D | File: ../Urho2D/AnimatedSprite2D.h | Line: 40
    engine->RegisterEnum("LoopMode2D");
    engine->RegisterEnumValue("LoopMode2D", "LM_DEFAULT", LM_DEFAULT);
    engine->RegisterEnumValue("LoopMode2D", "LM_FORCE_LOOPED", LM_FORCE_LOOPED);
    engine->RegisterEnumValue("LoopMode2D", "LM_FORCE_CLAMPED", LM_FORCE_CLAMPED);
#endif

#ifdef URHO3D_URHO2D
    // enum EmitterType2D | File: ../Urho2D/ParticleEffect2D.h | Line: 38
    engine->RegisterEnum("EmitterType2D");
    engine->RegisterEnumValue("EmitterType2D", "EMITTER_TYPE_GRAVITY", EMITTER_TYPE_GRAVITY);
    engine->RegisterEnumValue("EmitterType2D", "EMITTER_TYPE_RADIAL", EMITTER_TYPE_RADIAL);
#endif

#ifdef URHO3D_URHO2D
    // enum BodyType2D | File: ../Urho2D/RigidBody2D.h | Line: 40
    engine->RegisterEnum("BodyType2D");
    engine->RegisterEnumValue("BodyType2D", "BT_STATIC", BT_STATIC);
    engine->RegisterEnumValue("BodyType2D", "BT_KINEMATIC", BT_KINEMATIC);
    engine->RegisterEnumValue("BodyType2D", "BT_DYNAMIC", BT_DYNAMIC);
#endif

#ifdef URHO3D_URHO2D
    // enum Orientation2D | File: ../Urho2D/TileMapDefs2D.h | Line: 37
    engine->RegisterEnum("Orientation2D");
    engine->RegisterEnumValue("Orientation2D", "O_ORTHOGONAL", O_ORTHOGONAL);
    engine->RegisterEnumValue("Orientation2D", "O_ISOMETRIC", O_ISOMETRIC);
    engine->RegisterEnumValue("Orientation2D", "O_STAGGERED", O_STAGGERED);
    engine->RegisterEnumValue("Orientation2D", "O_HEXAGONAL", O_HEXAGONAL);
#endif

#ifdef URHO3D_URHO2D
    // enum TileMapLayerType2D | File: ../Urho2D/TileMapDefs2D.h | Line: 76
    engine->RegisterEnum("TileMapLayerType2D");
    engine->RegisterEnumValue("TileMapLayerType2D", "LT_TILE_LAYER", LT_TILE_LAYER);
    engine->RegisterEnumValue("TileMapLayerType2D", "LT_OBJECT_GROUP", LT_OBJECT_GROUP);
    engine->RegisterEnumValue("TileMapLayerType2D", "LT_IMAGE_LAYER", LT_IMAGE_LAYER);
    engine->RegisterEnumValue("TileMapLayerType2D", "LT_INVALID", LT_INVALID);
#endif

#ifdef URHO3D_URHO2D
    // enum TileMapObjectType2D | File: ../Urho2D/TileMapDefs2D.h | Line: 89
    engine->RegisterEnum("TileMapObjectType2D");
    engine->RegisterEnumValue("TileMapObjectType2D", "OT_RECTANGLE", OT_RECTANGLE);
    engine->RegisterEnumValue("TileMapObjectType2D", "OT_ELLIPSE", OT_ELLIPSE);
    engine->RegisterEnumValue("TileMapObjectType2D", "OT_POLYGON", OT_POLYGON);
    engine->RegisterEnumValue("TileMapObjectType2D", "OT_POLYLINE", OT_POLYLINE);
    engine->RegisterEnumValue("TileMapObjectType2D", "OT_TILE", OT_TILE);
    engine->RegisterEnumValue("TileMapObjectType2D", "OT_INVALID", OT_INVALID);
#endif

}

}
