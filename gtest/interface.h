/**
This header was generated by `rhi_gen` (https://github.com/Tomicyo/rhi_gen)
Copyright (c) 2017 Tsin Studio

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
**/
#include <stdint.h>

typedef float float32;

// Result of every call
typedef enum nxtResult
{
  NXT_RESULT_OK,
  NXT_RESULT_FAILED,
  NXT_RESULT_DEVICE_NOT_FOUND,
} nxtResult;

typedef enum nxtPipelineType
{
  NXT_PIPELINE_TYPE_GRAPHICS,
  NXT_PIPELINE_TYPE_COMPUTE,
} nxtPipelineType;

// Pixel format in storage
typedef enum nxtPixelFormat
{
  NXT_PIXEL_FORMAT_RGBA16UINT,
  NXT_PIXEL_FORMAT_RGBA32FLOAT,
  NXT_PIXEL_FORMAT_RGBA8UNORM,
  NXT_PIXEL_FORMAT_RGBA8UNORM_SRGB,
  NXT_PIXEL_FORMAT_R11G11B10FLOAT,
  NXT_PIXEL_FORMAT_D32FLOAT,
  NXT_PIXEL_FORMAT_RGB32FLOAT,
} nxtPixelFormat;

typedef enum nxtVertexFormat
{
  NXT_VERTEX_FORMAT_32F,
  NXT_VERTEX_FORMAT_32F2,
  NXT_VERTEX_FORMAT_32F3,
  NXT_VERTEX_FORMAT_32F4,
} nxtVertexFormat;

typedef enum nxtPrimitiveType
{
  NXT_PRIMITIVE_TYPE_POINTS,
  NXT_PRIMITIVE_TYPE_LINES,
  NXT_PRIMITIVE_TYPE_TRIANGLES,
  NXT_PRIMITIVE_TYPE_TRIANGLESTRIPS,
} nxtPrimitiveType;

typedef enum nxtBlendOperation
{
  NXT_BLEND_OPERATION_ADD,
  NXT_BLEND_OPERATION_SUB,
} nxtBlendOperation;

// Color blending
typedef enum nxtBlendType
{
  NXT_BLEND_TYPE_ZERO,
  NXT_BLEND_TYPE_ONE,
  NXT_BLEND_TYPE_SRC_COLOR,
  NXT_BLEND_TYPE_DEST_COLOR,
  NXT_BLEND_TYPE_SRC_ALPHA,
  NXT_BLEND_TYPE_DESC_ALPHA,
} nxtBlendType;

typedef enum nxtStencilOperation
{
  NXT_STENCIL_OPERATION_KEEP,
  NXT_STENCIL_OPERATION_ZERO,
  NXT_STENCIL_OPERATION_REPLACE,
  NXT_STENCIL_OPERATION_INVERT,
  NXT_STENCIL_OPERATION_INCREMENT,
  NXT_STENCIL_OPERATION_DECREMENT,
} nxtStencilOperation;

typedef enum nxtComparisonFunction
{
  NXT_COMPARISON_FUNCTION_NEVER,
  NXT_COMPARISON_FUNCTION_LESS,
  NXT_COMPARISON_FUNCTION_EQUAL,
  NXT_COMPARISON_FUNCTION_LESS_EQUAL,
  NXT_COMPARISON_FUNCTION_GREATER,
  NXT_COMPARISON_FUNCTION_NOT_EQUAL,
  NXT_COMPARISON_FUNCTION_GREATER_EQUAL,
  NXT_COMPARISON_FUNCTION_ALWAYS,
} nxtComparisonFunction;

typedef enum nxtDepthWriteMask
{
  NXT_DEPTH_WRITE_MASK_ZERO,
  NXT_DEPTH_WRITE_MASK_ALL,
} nxtDepthWriteMask;

typedef enum nxtResourceState
{
  NXT_RESOURCE_STATE_COMMON = 1,
  NXT_RESOURCE_STATE_VERTEX_BUFFER = 2,
  NXT_RESOURCE_STATE_CONSTANT_BUFFER = 4,
  NXT_RESOURCE_STATE_RENDER_TARGET = 8,
  NXT_RESOURCE_STATE_PIXEL_SHADER_RESOURCE = 16,
  NXT_RESOURCE_STATE_TRANSFER_SOURCE = 32,
  NXT_RESOURCE_STATE_TRANSFER_DEST = 64,
  NXT_RESOURCE_STATE_PRESENT = 128,
  NXT_RESOURCE_STATE_GENERIC_READ = 256,
} nxtResourceState;

typedef enum nxtResourceViewType
{
  NXT_RESOURCE_VIEW_TYPE_LINEAR_BUFFER,
  NXT_RESOURCE_VIEW_TYPE_SAMPLED_TEXTURE,
  NXT_RESOURCE_VIEW_TYPE_UNORDER_ACCESS_TEXTURE,
  NXT_RESOURCE_VIEW_TYPE_UNORDER_ACCESS_BUFFER,
} nxtResourceViewType;

typedef enum nxtTextureDimension
{
  NXT_TEXTURE_DIMENSION_1D,
  NXT_TEXTURE_DIMENSION_2D,
  NXT_TEXTURE_DIMENSION_2D_MS,
  NXT_TEXTURE_DIMENSION_2D_ARRAY,
  NXT_TEXTURE_DIMENSION_3D,
  NXT_TEXTURE_DIMENSION_3D_ARRAY,
  NXT_TEXTURE_DIMENSION_CUBE,
} nxtTextureDimension;

typedef enum nxtFillMode
{
  NXT_FILL_MODE_WIRE,
  NXT_FILL_MODE_SOLID,
} nxtFillMode;

typedef enum nxtCullMode
{
  NXT_CULL_MODE_NONE,
  NXT_CULL_MODE_FRONT,
  NXT_CULL_MODE_BACK,
} nxtCullMode;

typedef enum nxtFilterMode
{
  NXT_FILTER_MODE_POINT,
  NXT_FILTER_MODE_LINEAR,
} nxtFilterMode;

typedef enum nxtAddressMode
{
  NXT_ADDRESS_MODE_WRAP,
  NXT_ADDRESS_MODE_MIRROR,
  NXT_ADDRESS_MODE_CLAMP,
  NXT_ADDRESS_MODE_BORDER,
  NXT_ADDRESS_MODE_MIRROR_ONCE,
} nxtAddressMode;

typedef enum nxtVertexInputRate
{
  NXT_VERTEX_INPUT_RATE_PERVERTEX,
  NXT_VERTEX_INPUT_RATE_PERINSTANCE,
} nxtVertexInputRate;

typedef enum nxtCommandQueueType
{
  NXT_COMMAND_QUEUE_TYPE_GRAPHICS,
  NXT_COMMAND_QUEUE_TYPE_COMPUTE,
} nxtCommandQueueType;

// Type of shader
typedef enum nxtShaderType
{
  NXT_SHADER_TYPE_VERTEX,
  NXT_SHADER_TYPE_FRAGMENT,
  NXT_SHADER_TYPE_COMPUTE,
  NXT_SHADER_TYPE_GEOMETRY,
  NXT_SHADER_TYPE_TESSAILATIONEVAL,
  NXT_SHADER_TYPE_TESSAILATIONCONTROL,
} nxtShaderType;

struct nxtDepthStencilOp
{
  nxtStencilOperation stencilFailOp;
  nxtStencilOperation depthStencilFailOp;
  nxtStencilOperation stencilPassOp;
  nxtComparisonFunction stencilFunc;
#if __cplusplus
  nxtDepthStencilOp(nxtStencilOperation _stencilFailOp, nxtStencilOperation _depthStencilFailOp, nxtStencilOperation _stencilPassOp, nxtComparisonFunction _stencilFunc)
  : stencilFailOp(_stencilFailOp)
  , depthStencilFailOp(_depthStencilFailOp)
  , stencilPassOp(_stencilPassOp)
  , stencilFunc(_stencilFunc)
  {}

  nxtDepthStencilOp& setStencilFailOp(nxtStencilOperation _stencilFailOp)
  {
    stencilFailOp = _stencilFailOp;
    return *this;
  }

  nxtDepthStencilOp& setDepthStencilFailOp(nxtStencilOperation _depthStencilFailOp)
  {
    depthStencilFailOp = _depthStencilFailOp;
    return *this;
  }

  nxtDepthStencilOp& setStencilPassOp(nxtStencilOperation _stencilPassOp)
  {
    stencilPassOp = _stencilPassOp;
    return *this;
  }

  nxtDepthStencilOp& setStencilFunc(nxtComparisonFunction _stencilFunc)
  {
    stencilFunc = _stencilFunc;
    return *this;
  }
#endif
};

struct nxtRasterizerState
{
  nxtFillMode fillMode;
  nxtCullMode cullMode;
  bool frontCCW;
  int32_t depthBias;
  bool multiSampleEnable;
#if __cplusplus
  nxtRasterizerState(nxtFillMode _fillMode, nxtCullMode _cullMode, bool _frontCCW, int32_t _depthBias, bool _multiSampleEnable)
  : fillMode(_fillMode)
  , cullMode(_cullMode)
  , frontCCW(_frontCCW)
  , depthBias(_depthBias)
  , multiSampleEnable(_multiSampleEnable)
  {}

  nxtRasterizerState& setFillMode(nxtFillMode _fillMode)
  {
    fillMode = _fillMode;
    return *this;
  }

  nxtRasterizerState& setCullMode(nxtCullMode _cullMode)
  {
    cullMode = _cullMode;
    return *this;
  }

  nxtRasterizerState& setFrontCCW(bool _frontCCW)
  {
    frontCCW = _frontCCW;
    return *this;
  }

  nxtRasterizerState& setDepthBias(int32_t _depthBias)
  {
    depthBias = _depthBias;
    return *this;
  }

  nxtRasterizerState& setMultiSampleEnable(bool _multiSampleEnable)
  {
    multiSampleEnable = _multiSampleEnable;
    return *this;
  }
#endif
};

struct nxtBlendState
{
  bool enable;
  nxtBlendType srcColorBlend;
  nxtBlendType destColorBlend;
  nxtBlendOperation colorBlendOp;
  nxtBlendType srcAlphaBlend;
  nxtBlendType destAlphaBlend;
  nxtBlendOperation alphaBlendOp;
  uint32_t colorWriteMask;
#if __cplusplus
  nxtBlendState(bool _enable, nxtBlendType _srcColorBlend, nxtBlendType _destColorBlend, nxtBlendOperation _colorBlendOp, nxtBlendType _srcAlphaBlend, nxtBlendType _destAlphaBlend, nxtBlendOperation _alphaBlendOp, uint32_t _colorWriteMask)
  : enable(_enable)
  , srcColorBlend(_srcColorBlend)
  , destColorBlend(_destColorBlend)
  , colorBlendOp(_colorBlendOp)
  , srcAlphaBlend(_srcAlphaBlend)
  , destAlphaBlend(_destAlphaBlend)
  , alphaBlendOp(_alphaBlendOp)
  , colorWriteMask(_colorWriteMask)
  {}

  nxtBlendState& setEnable(bool _enable)
  {
    enable = _enable;
    return *this;
  }

  nxtBlendState& setSrcColorBlend(nxtBlendType _srcColorBlend)
  {
    srcColorBlend = _srcColorBlend;
    return *this;
  }

  nxtBlendState& setDestColorBlend(nxtBlendType _destColorBlend)
  {
    destColorBlend = _destColorBlend;
    return *this;
  }

  nxtBlendState& setColorBlendOp(nxtBlendOperation _colorBlendOp)
  {
    colorBlendOp = _colorBlendOp;
    return *this;
  }

  nxtBlendState& setSrcAlphaBlend(nxtBlendType _srcAlphaBlend)
  {
    srcAlphaBlend = _srcAlphaBlend;
    return *this;
  }

  nxtBlendState& setDestAlphaBlend(nxtBlendType _destAlphaBlend)
  {
    destAlphaBlend = _destAlphaBlend;
    return *this;
  }

  nxtBlendState& setAlphaBlendOp(nxtBlendOperation _alphaBlendOp)
  {
    alphaBlendOp = _alphaBlendOp;
    return *this;
  }

  nxtBlendState& setColorWriteMask(uint32_t _colorWriteMask)
  {
    colorWriteMask = _colorWriteMask;
    return *this;
  }
#endif
};

struct nxtDepthStencilState
{
  bool depthEnable;
  nxtDepthWriteMask depthWriteMask;
  nxtComparisonFunction depthFunc;
  bool stencilEnable;
  nxtDepthStencilOp frontFace;
  nxtDepthStencilOp backFace;
#if __cplusplus
  nxtDepthStencilState(bool _depthEnable, nxtDepthWriteMask _depthWriteMask, nxtComparisonFunction _depthFunc, bool _stencilEnable, nxtDepthStencilOp _frontFace, nxtDepthStencilOp _backFace)
  : depthEnable(_depthEnable)
  , depthWriteMask(_depthWriteMask)
  , depthFunc(_depthFunc)
  , stencilEnable(_stencilEnable)
  , frontFace(_frontFace)
  , backFace(_backFace)
  {}

  nxtDepthStencilState& setDepthEnable(bool _depthEnable)
  {
    depthEnable = _depthEnable;
    return *this;
  }

  nxtDepthStencilState& setDepthWriteMask(nxtDepthWriteMask _depthWriteMask)
  {
    depthWriteMask = _depthWriteMask;
    return *this;
  }

  nxtDepthStencilState& setDepthFunc(nxtComparisonFunction _depthFunc)
  {
    depthFunc = _depthFunc;
    return *this;
  }

  nxtDepthStencilState& setStencilEnable(bool _stencilEnable)
  {
    stencilEnable = _stencilEnable;
    return *this;
  }

  nxtDepthStencilState& setFrontFace(nxtDepthStencilOp _frontFace)
  {
    frontFace = _frontFace;
    return *this;
  }

  nxtDepthStencilState& setBackFace(nxtDepthStencilOp _backFace)
  {
    backFace = _backFace;
    return *this;
  }
#endif
};

struct nxtDeviceDesc
{
  uint64_t maxAllocation;
  char * vendorName;
#if __cplusplus
  nxtDeviceDesc(uint64_t _maxAllocation, char * _vendorName)
  : maxAllocation(_maxAllocation)
  , vendorName(_vendorName)
  {}

  nxtDeviceDesc& setMaxAllocation(uint64_t _maxAllocation)
  {
    maxAllocation = _maxAllocation;
    return *this;
  }

  nxtDeviceDesc& setVendorName(char * _vendorName)
  {
    vendorName = _vendorName;
    return *this;
  }
#endif
};

struct nxtFilter
{
  nxtFilterMode minFilter;
  nxtFilterMode magFilter;
  nxtFilterMode mipMapFilter;
#if __cplusplus
  nxtFilter(nxtFilterMode _minFilter, nxtFilterMode _magFilter, nxtFilterMode _mipMapFilter)
  : minFilter(_minFilter)
  , magFilter(_magFilter)
  , mipMapFilter(_mipMapFilter)
  {}

  nxtFilter& setMinFilter(nxtFilterMode _minFilter)
  {
    minFilter = _minFilter;
    return *this;
  }

  nxtFilter& setMagFilter(nxtFilterMode _magFilter)
  {
    magFilter = _magFilter;
    return *this;
  }

  nxtFilter& setMipMapFilter(nxtFilterMode _mipMapFilter)
  {
    mipMapFilter = _mipMapFilter;
    return *this;
  }
#endif
};

// Description of sampler
struct nxtSamplerDesc
{
  nxtFilter filter;
  nxtAddressMode U,V,W;
  float32 mipLodBias;
  uint32_t maxAnistropy;
  nxtComparisonFunction comparisonFunc;
  float32 minLod;
  float32 maxLod;
#if __cplusplus
  nxtSamplerDesc(nxtFilter _filter, nxtAddressMode _U, nxtAddressMode _V, nxtAddressMode _W, float32 _mipLodBias, uint32_t _maxAnistropy, nxtComparisonFunction _comparisonFunc, float32 _minLod, float32 _maxLod)
  : filter(_filter)
  , U(_U)
  , V(_V)
  , W(_W)
  , mipLodBias(_mipLodBias)
  , maxAnistropy(_maxAnistropy)
  , comparisonFunc(_comparisonFunc)
  , minLod(_minLod)
  , maxLod(_maxLod)
  {}

  nxtSamplerDesc& setFilter(nxtFilter _filter)
  {
    filter = _filter;
    return *this;
  }

  nxtSamplerDesc& setUVW(nxtAddressMode _U, nxtAddressMode _V, nxtAddressMode _W)
  {
    U = _U;
    V = _V;
    W = _W;
    return *this;
  }

  nxtSamplerDesc& setMipLodBias(float32 _mipLodBias)
  {
    mipLodBias = _mipLodBias;
    return *this;
  }

  nxtSamplerDesc& setMaxAnistropy(uint32_t _maxAnistropy)
  {
    maxAnistropy = _maxAnistropy;
    return *this;
  }

  nxtSamplerDesc& setComparisonFunc(nxtComparisonFunction _comparisonFunc)
  {
    comparisonFunc = _comparisonFunc;
    return *this;
  }

  nxtSamplerDesc& setMinLod(float32 _minLod)
  {
    minLod = _minLod;
    return *this;
  }

  nxtSamplerDesc& setMaxLod(float32 _maxLod)
  {
    maxLod = _maxLod;
    return *this;
  }
#endif
};

// Description of a buffer
struct nxtBufferDesc
{
  uint64_t size;
#if __cplusplus
  nxtBufferDesc(uint64_t _size)
  : size(_size)
  {}

  nxtBufferDesc& setSize(uint64_t _size)
  {
    size = _size;
    return *this;
  }
#endif
};

// Description of the buffer usage
struct nxtBufferViewDesc
{
  nxtResourceViewType view;
  nxtResourceState state;
  uint64_t size;
  uint64_t offset;
  uint64_t stride;
#if __cplusplus
  nxtBufferViewDesc(nxtResourceViewType _view, nxtResourceState _state, uint64_t _size, uint64_t _offset, uint64_t _stride)
  : view(_view)
  , state(_state)
  , size(_size)
  , offset(_offset)
  , stride(_stride)
  {}

  nxtBufferViewDesc& setView(nxtResourceViewType _view)
  {
    view = _view;
    return *this;
  }

  nxtBufferViewDesc& setState(nxtResourceState _state)
  {
    state = _state;
    return *this;
  }

  nxtBufferViewDesc& setSize(uint64_t _size)
  {
    size = _size;
    return *this;
  }

  nxtBufferViewDesc& setOffset(uint64_t _offset)
  {
    offset = _offset;
    return *this;
  }

  nxtBufferViewDesc& setStride(uint64_t _stride)
  {
    stride = _stride;
    return *this;
  }
#endif
};

// Description of a texture
struct nxtTextureDesc
{
  nxtPixelFormat format;
  uint32_t width;
  uint32_t height;
  uint32_t depth;
  uint32_t layers;
  uint32_t mipLevels;
#if __cplusplus
  nxtTextureDesc(nxtPixelFormat _format, uint32_t _width, uint32_t _height, uint32_t _depth, uint32_t _layers, uint32_t _mipLevels)
  : format(_format)
  , width(_width)
  , height(_height)
  , depth(_depth)
  , layers(_layers)
  , mipLevels(_mipLevels)
  {}

  nxtTextureDesc& setFormat(nxtPixelFormat _format)
  {
    format = _format;
    return *this;
  }

  nxtTextureDesc& setWidth(uint32_t _width)
  {
    width = _width;
    return *this;
  }

  nxtTextureDesc& setHeight(uint32_t _height)
  {
    height = _height;
    return *this;
  }

  nxtTextureDesc& setDepth(uint32_t _depth)
  {
    depth = _depth;
    return *this;
  }

  nxtTextureDesc& setLayers(uint32_t _layers)
  {
    layers = _layers;
    return *this;
  }

  nxtTextureDesc& setMipLevels(uint32_t _mipLevels)
  {
    mipLevels = _mipLevels;
    return *this;
  }
#endif
};

// Description about how the texture be used
struct nxtTextureViewDesc
{
  nxtResourceViewType view;
  nxtResourceState state;
  nxtTextureDimension dimension;
  uint32_t mipLevel;
#if __cplusplus
  nxtTextureViewDesc(nxtResourceViewType _view, nxtResourceState _state, nxtTextureDimension _dimension, uint32_t _mipLevel)
  : view(_view)
  , state(_state)
  , dimension(_dimension)
  , mipLevel(_mipLevel)
  {}

  nxtTextureViewDesc& setView(nxtResourceViewType _view)
  {
    view = _view;
    return *this;
  }

  nxtTextureViewDesc& setState(nxtResourceState _state)
  {
    state = _state;
    return *this;
  }

  nxtTextureViewDesc& setDimension(nxtTextureDimension _dimension)
  {
    dimension = _dimension;
    return *this;
  }

  nxtTextureViewDesc& setMipLevel(uint32_t _mipLevel)
  {
    mipLevel = _mipLevel;
    return *this;
  }
#endif
};

struct nxtVertexLayout
{
  nxtVertexInputRate rate;
  uint32_t stride;
#if __cplusplus
  nxtVertexLayout(nxtVertexInputRate _rate, uint32_t _stride)
  : rate(_rate)
  , stride(_stride)
  {}

  nxtVertexLayout& setRate(nxtVertexInputRate _rate)
  {
    rate = _rate;
    return *this;
  }

  nxtVertexLayout& setStride(uint32_t _stride)
  {
    stride = _stride;
    return *this;
  }
#endif
};

struct nxtVertexAttribute
{
  nxtVertexFormat format;
  uint32_t offset;
  uint32_t slot;
#if __cplusplus
  nxtVertexAttribute(nxtVertexFormat _format, uint32_t _offset, uint32_t _slot)
  : format(_format)
  , offset(_offset)
  , slot(_slot)
  {}

  nxtVertexAttribute& setFormat(nxtVertexFormat _format)
  {
    format = _format;
    return *this;
  }

  nxtVertexAttribute& setOffset(uint32_t _offset)
  {
    offset = _offset;
    return *this;
  }

  nxtVertexAttribute& setSlot(uint32_t _slot)
  {
    slot = _slot;
    return *this;
  }
#endif
};

// Vertex input description
struct nxtVertexInputState
{
  const nxtVertexAttribute * pAttributes;
  uint32_t attributeCount;
  const nxtVertexLayout * pLayouts;
  uint32_t layoutCount;
#if __cplusplus
  nxtVertexInputState(const nxtVertexAttribute * _pAttributes, uint32_t _attributeCount, const nxtVertexLayout * _pLayouts, uint32_t _layoutCount)
  : pAttributes(_pAttributes)
  , attributeCount(_attributeCount)
  , pLayouts(_pLayouts)
  , layoutCount(_layoutCount)
  {}

  nxtVertexInputState& setPAttributes(const nxtVertexAttribute * _pAttributes)
  {
    pAttributes = _pAttributes;
    return *this;
  }

  nxtVertexInputState& setAttributeCount(uint32_t _attributeCount)
  {
    attributeCount = _attributeCount;
    return *this;
  }

  nxtVertexInputState& setPLayouts(const nxtVertexLayout * _pLayouts)
  {
    pLayouts = _pLayouts;
    return *this;
  }

  nxtVertexInputState& setLayoutCount(uint32_t _layoutCount)
  {
    layoutCount = _layoutCount;
    return *this;
  }
#endif
};

// Description of pipeline state
struct nxtPipelineStateDesc
{
  nxtRasterizerState rasterState;
  nxtBlendState blendState;
  nxtDepthStencilState depthStencil;
  nxtVertexInputState inputState;
  nxtPrimitiveType primitiveTopology;
#if __cplusplus
  nxtPipelineStateDesc(nxtRasterizerState _rasterState, nxtBlendState _blendState, nxtDepthStencilState _depthStencil, nxtVertexInputState _inputState, nxtPrimitiveType _primitiveTopology)
  : rasterState(_rasterState)
  , blendState(_blendState)
  , depthStencil(_depthStencil)
  , inputState(_inputState)
  , primitiveTopology(_primitiveTopology)
  {}

  nxtPipelineStateDesc& setRasterState(nxtRasterizerState _rasterState)
  {
    rasterState = _rasterState;
    return *this;
  }

  nxtPipelineStateDesc& setBlendState(nxtBlendState _blendState)
  {
    blendState = _blendState;
    return *this;
  }

  nxtPipelineStateDesc& setDepthStencil(nxtDepthStencilState _depthStencil)
  {
    depthStencil = _depthStencil;
    return *this;
  }

  nxtPipelineStateDesc& setInputState(nxtVertexInputState _inputState)
  {
    inputState = _inputState;
    return *this;
  }

  nxtPipelineStateDesc& setPrimitiveTopology(nxtPrimitiveType _primitiveTopology)
  {
    primitiveTopology = _primitiveTopology;
    return *this;
  }
#endif
};

struct nxtDrawIndexedInstancedDesc
{
  uint32_t indexCountPerInstance;
  uint32_t instanceCount;
  uint32_t startId;
  uint32_t baseVertexId;
  uint32_t startInstanceId;
#if __cplusplus
  nxtDrawIndexedInstancedDesc(uint32_t _indexCountPerInstance, uint32_t _instanceCount, uint32_t _startId, uint32_t _baseVertexId, uint32_t _startInstanceId)
  : indexCountPerInstance(_indexCountPerInstance)
  , instanceCount(_instanceCount)
  , startId(_startId)
  , baseVertexId(_baseVertexId)
  , startInstanceId(_startInstanceId)
  {}

  nxtDrawIndexedInstancedDesc& setIndexCountPerInstance(uint32_t _indexCountPerInstance)
  {
    indexCountPerInstance = _indexCountPerInstance;
    return *this;
  }

  nxtDrawIndexedInstancedDesc& setInstanceCount(uint32_t _instanceCount)
  {
    instanceCount = _instanceCount;
    return *this;
  }

  nxtDrawIndexedInstancedDesc& setStartId(uint32_t _startId)
  {
    startId = _startId;
    return *this;
  }

  nxtDrawIndexedInstancedDesc& setBaseVertexId(uint32_t _baseVertexId)
  {
    baseVertexId = _baseVertexId;
    return *this;
  }

  nxtDrawIndexedInstancedDesc& setStartInstanceId(uint32_t _startInstanceId)
  {
    startInstanceId = _startInstanceId;
    return *this;
  }
#endif
};

struct nxtDrawInstancedDesc
{
  uint32_t vertexCountPerInstance;
  uint32_t instanceCount;
  uint32_t startVertexId;
  uint32_t startInstanceId;
#if __cplusplus
  nxtDrawInstancedDesc(uint32_t _vertexCountPerInstance, uint32_t _instanceCount, uint32_t _startVertexId, uint32_t _startInstanceId)
  : vertexCountPerInstance(_vertexCountPerInstance)
  , instanceCount(_instanceCount)
  , startVertexId(_startVertexId)
  , startInstanceId(_startInstanceId)
  {}

  nxtDrawInstancedDesc& setVertexCountPerInstance(uint32_t _vertexCountPerInstance)
  {
    vertexCountPerInstance = _vertexCountPerInstance;
    return *this;
  }

  nxtDrawInstancedDesc& setInstanceCount(uint32_t _instanceCount)
  {
    instanceCount = _instanceCount;
    return *this;
  }

  nxtDrawInstancedDesc& setStartVertexId(uint32_t _startVertexId)
  {
    startVertexId = _startVertexId;
    return *this;
  }

  nxtDrawInstancedDesc& setStartInstanceId(uint32_t _startInstanceId)
  {
    startInstanceId = _startInstanceId;
    return *this;
  }
#endif
};

struct nxtViewport
{
  float32 left, top;
  float32 width, height;
  float32 minDepth;
  float32 maxDepth;
#if __cplusplus
  nxtViewport(float32 _left, float32 _top, float32 _width, float32 _height, float32 _minDepth, float32 _maxDepth)
  : left(_left)
  , top(_top)
  , width(_width)
  , height(_height)
  , minDepth(_minDepth)
  , maxDepth(_maxDepth)
  {}

  nxtViewport& setLeftTop(float32 _left, float32 _top)
  {
    left = _left;
    top = _top;
    return *this;
  }

  nxtViewport& setWidthHeight(float32 _width, float32 _height)
  {
    width = _width;
    height = _height;
    return *this;
  }

  nxtViewport& setMinDepth(float32 _minDepth)
  {
    minDepth = _minDepth;
    return *this;
  }

  nxtViewport& setMaxDepth(float32 _maxDepth)
  {
    maxDepth = _maxDepth;
    return *this;
  }
#endif
};

struct nxtSwapChainDesc
{
  nxtPixelFormat pixelFormat;
  uint32_t width;
  uint32_t height;
#if __cplusplus
  nxtSwapChainDesc(nxtPixelFormat _pixelFormat, uint32_t _width, uint32_t _height)
  : pixelFormat(_pixelFormat)
  , width(_width)
  , height(_height)
  {}

  nxtSwapChainDesc& setPixelFormat(nxtPixelFormat _pixelFormat)
  {
    pixelFormat = _pixelFormat;
    return *this;
  }

  nxtSwapChainDesc& setWidth(uint32_t _width)
  {
    width = _width;
    return *this;
  }

  nxtSwapChainDesc& setHeight(uint32_t _height)
  {
    height = _height;
    return *this;
  }
#endif
};

#if __cplusplus

struct INXTRefObj;
struct INXTSwapChain;
struct INXTFactory;
struct INXTRenderPass;
struct INXTPipelineState;
struct INXTPipelineLayout;
struct INXTBindingGroup;
struct INXTSampler;
struct INXTResource;
struct INXTBuffer;
struct INXTBufferView;
struct INXTTexture;
struct INXTTextureView;
struct INXTDevice;
struct INXTCommandQueue;
struct INXTCommandBuffer;

struct INXTRefObj
{
  virtual uint32_t AddRef() = 0;
  virtual uint32_t Release() = 0;
};

// Present drawables
struct INXTSwapChain : public INXTRefObj
{
  virtual void Present() = 0;
};

// Create devices and swapchains
struct INXTFactory : public INXTRefObj
{
  virtual nxtResult EnumDevice(uint32_t * count, INXTDevice ** ppDevice) = 0;
  virtual nxtResult CreateSwapchain(nxtSwapChainDesc * desc, void * pWindow, INXTSwapChain ** pSwapchain) = 0;
};

struct INXTRenderPass : public INXTRefObj
{
};

struct INXTPipelineState : public INXTRefObj
{
  virtual nxtPipelineType Type() = 0;
  virtual nxtResult GetDesc(nxtPipelineStateDesc * desc) = 0;
};

struct INXTPipelineLayout : public INXTRefObj
{
};

// Shader binding table
struct INXTBindingGroup : public INXTRefObj
{
  virtual void SetSampler(uint32_t index, nxtShaderType shaderVis, INXTSampler * pSampler) = 0;
  virtual void SetBuffer(uint32_t index, nxtShaderType shaderVis, INXTBufferView * bufferView) = 0;
  virtual void SetTexture(uint32_t index, nxtShaderType shaderVis, INXTTextureView * textureView) = 0;
};

struct INXTSampler : public INXTRefObj
{
  virtual nxtResult GetDesc(nxtSamplerDesc * desc) = 0;
};

struct INXTResource : public INXTRefObj
{
  virtual void * Map(uint64_t offset, uint64_t size) = 0;
  virtual void UnMap() = 0;
};

struct INXTBuffer : public INXTResource
{
  virtual nxtResult GetDesc(nxtBufferDesc * pDesc) = 0;
};

struct INXTBufferView : public INXTRefObj
{
};

struct INXTTexture : public INXTResource
{
  virtual nxtResult GetDesc(nxtTextureDesc * pDesc) = 0;
};

struct INXTTextureView : public INXTRefObj
{
};

// Gpu device
struct INXTDevice : public INXTRefObj
{
  virtual void GetDesc(nxtDeviceDesc * pDesc) = 0;
  virtual nxtResult CreateCommandQueue(nxtCommandQueueType queueType, INXTCommandQueue ** pQueue) = 0;
  virtual nxtResult CreatePipelineLayout(INXTPipelineLayout ** ppPipelineLayout) = 0;
  virtual nxtResult CreatePipelineState(const nxtPipelineStateDesc * pPipelineDesc, INXTPipelineState ** pPipelineState) = 0;
  virtual nxtResult CreateRenderPass() = 0;
  virtual nxtResult CreateRenderTarget() = 0;
  virtual nxtResult CreateSampler(const nxtSamplerDesc* desc, INXTSampler ** pSampler) = 0;
  virtual nxtResult CreateBuffer(const nxtBufferDesc* desc, INXTBuffer ** pBuffer) = 0;
  virtual nxtResult CreateBufferView(const nxtBufferViewDesc * desc, INXTBuffer * pBuffer, INXTBufferView ** pBufView) = 0;
  virtual nxtResult CreateTexture(const nxtTextureDesc * desc, INXTTexture ** pTexture) = 0;
  virtual nxtResult CreateTextureView(const nxtTextureViewDesc * desc, INXTTexture * pTexture, INXTTextureView ** pTexView) = 0;
  virtual void WaitIdle() = 0;
};

struct INXTCommandQueue : public INXTRefObj
{
  virtual INXTCommandBuffer * CommandBuffer() = 0;
};

// Gpu Command Buffer
struct INXTCommandBuffer : public INXTRefObj
{
  virtual void Commit() = 0;
  virtual void Present(INXTSwapChain * pSwapChain) = 0;
  virtual void CopyTexture() = 0;
  virtual void CopyBuffer() = 0;
  virtual void ClearColorDepth() = 0;
  virtual void Begin() = 0;
  virtual void BeginRenderPass(const INXTRenderPass* pRenderPass) = 0;
  virtual void SetScissorRects() = 0;
  virtual void SetViewport(const nxtViewport * pViewport) = 0;
  virtual void SetPipelineState(INXTPipelineState* pPipelineState) = 0;
  virtual void SetPipelineLayout(INXTPipelineLayout * pPipelineLayout) = 0;
  virtual void SetBindingGroup(INXTBindingGroup * pBindingGroup) = 0;
  virtual void SetIndexBuffer() = 0;
  virtual void SetVertexBuffer(uint32_t slot, uint64_t offset, INXTBuffer * pVertexBuffer) = 0;
  virtual void SetPrimitiveType(nxtPrimitiveType primitive) = 0;
  virtual void DrawInstanced(const nxtDrawInstancedDesc * drawParam) = 0;
  virtual void DrawIndexedInstanced(const nxtDrawIndexedInstancedDesc * drawParam) = 0;
  virtual void EndRenderPass() = 0;
  virtual void End() = 0;
  virtual void Dispatch(uint32_t x, uint32_t y, uint32_t z) = 0;
  virtual void ExecuteBundle() = 0;
};

#endif // __cplusplus