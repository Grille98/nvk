/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.6
 */
#include "utils.h"
#include "index.h"
#include "VkGraphicsPipelineCreateInfo.h"

Nan::Persistent<v8::FunctionTemplate> _VkGraphicsPipelineCreateInfo::constructor;

_VkGraphicsPipelineCreateInfo::_VkGraphicsPipelineCreateInfo() {
  instance.sType = VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO;
}

_VkGraphicsPipelineCreateInfo::~_VkGraphicsPipelineCreateInfo() {
  //printf("VkGraphicsPipelineCreateInfo deconstructed!!\n");
}

void _VkGraphicsPipelineCreateInfo::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkGraphicsPipelineCreateInfo::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkGraphicsPipelineCreateInfo").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("pNext").ToLocalChecked(), GetpNext, SetpNext, ctor);
  SetPrototypeAccessor(proto, Nan::New("flags").ToLocalChecked(), Getflags, Setflags, ctor);
  SetPrototypeAccessor(proto, Nan::New("stageCount").ToLocalChecked(), GetstageCount, SetstageCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pStages").ToLocalChecked(), GetpStages, SetpStages, ctor);
  SetPrototypeAccessor(proto, Nan::New("pVertexInputState").ToLocalChecked(), GetpVertexInputState, SetpVertexInputState, ctor);
  SetPrototypeAccessor(proto, Nan::New("pInputAssemblyState").ToLocalChecked(), GetpInputAssemblyState, SetpInputAssemblyState, ctor);
  SetPrototypeAccessor(proto, Nan::New("pTessellationState").ToLocalChecked(), GetpTessellationState, SetpTessellationState, ctor);
  SetPrototypeAccessor(proto, Nan::New("pViewportState").ToLocalChecked(), GetpViewportState, SetpViewportState, ctor);
  SetPrototypeAccessor(proto, Nan::New("pRasterizationState").ToLocalChecked(), GetpRasterizationState, SetpRasterizationState, ctor);
  SetPrototypeAccessor(proto, Nan::New("pMultisampleState").ToLocalChecked(), GetpMultisampleState, SetpMultisampleState, ctor);
  SetPrototypeAccessor(proto, Nan::New("pDepthStencilState").ToLocalChecked(), GetpDepthStencilState, SetpDepthStencilState, ctor);
  SetPrototypeAccessor(proto, Nan::New("pColorBlendState").ToLocalChecked(), GetpColorBlendState, SetpColorBlendState, ctor);
  SetPrototypeAccessor(proto, Nan::New("pDynamicState").ToLocalChecked(), GetpDynamicState, SetpDynamicState, ctor);
  SetPrototypeAccessor(proto, Nan::New("layout").ToLocalChecked(), Getlayout, Setlayout, ctor);
  SetPrototypeAccessor(proto, Nan::New("renderPass").ToLocalChecked(), GetrenderPass, SetrenderPass, ctor);
  SetPrototypeAccessor(proto, Nan::New("subpass").ToLocalChecked(), Getsubpass, Setsubpass, ctor);
  SetPrototypeAccessor(proto, Nan::New("basePipelineHandle").ToLocalChecked(), GetbasePipelineHandle, SetbasePipelineHandle, ctor);
  SetPrototypeAccessor(proto, Nan::New("basePipelineIndex").ToLocalChecked(), GetbasePipelineIndex, SetbasePipelineIndex, ctor);
  Nan::Set(target, Nan::New("VkGraphicsPipelineCreateInfo").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkGraphicsPipelineCreateInfo::New) {
  if (info.IsConstructCall()) {
    _VkGraphicsPipelineCreateInfo* self = new _VkGraphicsPipelineCreateInfo();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("pNext").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("flags").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("stageCount").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("pStages").ToLocalChecked();
      v8::Local<v8::String> sAccess5 = Nan::New("pVertexInputState").ToLocalChecked();
      v8::Local<v8::String> sAccess6 = Nan::New("pInputAssemblyState").ToLocalChecked();
      v8::Local<v8::String> sAccess7 = Nan::New("pTessellationState").ToLocalChecked();
      v8::Local<v8::String> sAccess8 = Nan::New("pViewportState").ToLocalChecked();
      v8::Local<v8::String> sAccess9 = Nan::New("pRasterizationState").ToLocalChecked();
      v8::Local<v8::String> sAccess10 = Nan::New("pMultisampleState").ToLocalChecked();
      v8::Local<v8::String> sAccess11 = Nan::New("pDepthStencilState").ToLocalChecked();
      v8::Local<v8::String> sAccess12 = Nan::New("pColorBlendState").ToLocalChecked();
      v8::Local<v8::String> sAccess13 = Nan::New("pDynamicState").ToLocalChecked();
      v8::Local<v8::String> sAccess14 = Nan::New("layout").ToLocalChecked();
      v8::Local<v8::String> sAccess15 = Nan::New("renderPass").ToLocalChecked();
      v8::Local<v8::String> sAccess16 = Nan::New("subpass").ToLocalChecked();
      v8::Local<v8::String> sAccess17 = Nan::New("basePipelineHandle").ToLocalChecked();
      v8::Local<v8::String> sAccess18 = Nan::New("basePipelineIndex").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      if (obj->Has(sAccess5)) info.This()->Set(sAccess5, obj->Get(sAccess5));
      if (obj->Has(sAccess6)) info.This()->Set(sAccess6, obj->Get(sAccess6));
      if (obj->Has(sAccess7)) info.This()->Set(sAccess7, obj->Get(sAccess7));
      if (obj->Has(sAccess8)) info.This()->Set(sAccess8, obj->Get(sAccess8));
      if (obj->Has(sAccess9)) info.This()->Set(sAccess9, obj->Get(sAccess9));
      if (obj->Has(sAccess10)) info.This()->Set(sAccess10, obj->Get(sAccess10));
      if (obj->Has(sAccess11)) info.This()->Set(sAccess11, obj->Get(sAccess11));
      if (obj->Has(sAccess12)) info.This()->Set(sAccess12, obj->Get(sAccess12));
      if (obj->Has(sAccess13)) info.This()->Set(sAccess13, obj->Get(sAccess13));
      if (obj->Has(sAccess14)) info.This()->Set(sAccess14, obj->Get(sAccess14));
      if (obj->Has(sAccess15)) info.This()->Set(sAccess15, obj->Get(sAccess15));
      if (obj->Has(sAccess16)) info.This()->Set(sAccess16, obj->Get(sAccess16));
      if (obj->Has(sAccess17)) info.This()->Set(sAccess17, obj->Get(sAccess17));
      if (obj->Has(sAccess18)) info.This()->Set(sAccess18, obj->Get(sAccess18));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkGraphicsPipelineCreateInfo constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkGraphicsPipelineCreateInfo::GetsType) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkGraphicsPipelineCreateInfo::SetsType) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowError("Value of member 'sType' has invalid type");
  }
}// pNext
NAN_GETTER(_VkGraphicsPipelineCreateInfo::GetpNext) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
}NAN_SETTER(_VkGraphicsPipelineCreateInfo::SetpNext) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
}// flags
NAN_GETTER(_VkGraphicsPipelineCreateInfo::Getflags) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.flags));
}NAN_SETTER(_VkGraphicsPipelineCreateInfo::Setflags) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.flags = static_cast<VkPipelineCreateFlags>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowError("Value of member 'flags' has invalid type");
  }
}// stageCount
NAN_GETTER(_VkGraphicsPipelineCreateInfo::GetstageCount) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.stageCount));
}NAN_SETTER(_VkGraphicsPipelineCreateInfo::SetstageCount) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.stageCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowError("Value of member 'stageCount' has invalid type");
  }
}// pStages
NAN_GETTER(_VkGraphicsPipelineCreateInfo::GetpStages) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  if (self->pStages.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pStages);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkGraphicsPipelineCreateInfo::SetpStages) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  
    // js
    if (value->IsArray()) {
      self->pStages.Reset<v8::Array>(value.As<v8::Array>());
    } else if (value->IsNull()) {
      self->pStages.Reset();
    } else {
      return Nan::ThrowError("Value of member 'pStages' has invalid type");
    }
  
  // vulkan
  if (value->IsArray()) {
    self->instance.pStages = copyArrayOfV8Objects<VkPipelineShaderStageCreateInfo, _VkPipelineShaderStageCreateInfo>(value);
  } else if (value->IsNull()) {
    self->instance.pStages = nullptr;
  } else {
    return Nan::ThrowError("Value of member 'pStages' has invalid type");
  }
}// pVertexInputState
NAN_GETTER(_VkGraphicsPipelineCreateInfo::GetpVertexInputState) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  if (self->pVertexInputState.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pVertexInputState);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkGraphicsPipelineCreateInfo::SetpVertexInputState) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkPipelineVertexInputStateCreateInfo::constructor)->HasInstance(obj)) {
      self->pVertexInputState.Reset<v8::Object>(value.As<v8::Object>());
      _VkPipelineVertexInputStateCreateInfo* inst = Nan::ObjectWrap::Unwrap<_VkPipelineVertexInputStateCreateInfo>(obj);
      self->instance.pVertexInputState = &inst->instance;
    } else {
      return Nan::ThrowError("Value of member 'pVertexInputState' has invalid type");
    }
  } else if (value->IsNull()) {
    self->pVertexInputState.Reset();
    self->instance.pVertexInputState = nullptr;
  } else {
    return Nan::ThrowError("Value of member 'pVertexInputState' has invalid type");
  }
}// pInputAssemblyState
NAN_GETTER(_VkGraphicsPipelineCreateInfo::GetpInputAssemblyState) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  if (self->pInputAssemblyState.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pInputAssemblyState);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkGraphicsPipelineCreateInfo::SetpInputAssemblyState) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkPipelineInputAssemblyStateCreateInfo::constructor)->HasInstance(obj)) {
      self->pInputAssemblyState.Reset<v8::Object>(value.As<v8::Object>());
      _VkPipelineInputAssemblyStateCreateInfo* inst = Nan::ObjectWrap::Unwrap<_VkPipelineInputAssemblyStateCreateInfo>(obj);
      self->instance.pInputAssemblyState = &inst->instance;
    } else {
      return Nan::ThrowError("Value of member 'pInputAssemblyState' has invalid type");
    }
  } else if (value->IsNull()) {
    self->pInputAssemblyState.Reset();
    self->instance.pInputAssemblyState = nullptr;
  } else {
    return Nan::ThrowError("Value of member 'pInputAssemblyState' has invalid type");
  }
}// pTessellationState
NAN_GETTER(_VkGraphicsPipelineCreateInfo::GetpTessellationState) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  if (self->pTessellationState.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pTessellationState);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkGraphicsPipelineCreateInfo::SetpTessellationState) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkPipelineTessellationStateCreateInfo::constructor)->HasInstance(obj)) {
      self->pTessellationState.Reset<v8::Object>(value.As<v8::Object>());
      _VkPipelineTessellationStateCreateInfo* inst = Nan::ObjectWrap::Unwrap<_VkPipelineTessellationStateCreateInfo>(obj);
      self->instance.pTessellationState = &inst->instance;
    } else {
      return Nan::ThrowError("Value of member 'pTessellationState' has invalid type");
    }
  } else if (value->IsNull()) {
    self->pTessellationState.Reset();
    self->instance.pTessellationState = nullptr;
  } else {
    return Nan::ThrowError("Value of member 'pTessellationState' has invalid type");
  }
}// pViewportState
NAN_GETTER(_VkGraphicsPipelineCreateInfo::GetpViewportState) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  if (self->pViewportState.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pViewportState);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkGraphicsPipelineCreateInfo::SetpViewportState) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkPipelineViewportStateCreateInfo::constructor)->HasInstance(obj)) {
      self->pViewportState.Reset<v8::Object>(value.As<v8::Object>());
      _VkPipelineViewportStateCreateInfo* inst = Nan::ObjectWrap::Unwrap<_VkPipelineViewportStateCreateInfo>(obj);
      self->instance.pViewportState = &inst->instance;
    } else {
      return Nan::ThrowError("Value of member 'pViewportState' has invalid type");
    }
  } else if (value->IsNull()) {
    self->pViewportState.Reset();
    self->instance.pViewportState = nullptr;
  } else {
    return Nan::ThrowError("Value of member 'pViewportState' has invalid type");
  }
}// pRasterizationState
NAN_GETTER(_VkGraphicsPipelineCreateInfo::GetpRasterizationState) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  if (self->pRasterizationState.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pRasterizationState);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkGraphicsPipelineCreateInfo::SetpRasterizationState) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkPipelineRasterizationStateCreateInfo::constructor)->HasInstance(obj)) {
      self->pRasterizationState.Reset<v8::Object>(value.As<v8::Object>());
      _VkPipelineRasterizationStateCreateInfo* inst = Nan::ObjectWrap::Unwrap<_VkPipelineRasterizationStateCreateInfo>(obj);
      self->instance.pRasterizationState = &inst->instance;
    } else {
      return Nan::ThrowError("Value of member 'pRasterizationState' has invalid type");
    }
  } else if (value->IsNull()) {
    self->pRasterizationState.Reset();
    self->instance.pRasterizationState = nullptr;
  } else {
    return Nan::ThrowError("Value of member 'pRasterizationState' has invalid type");
  }
}// pMultisampleState
NAN_GETTER(_VkGraphicsPipelineCreateInfo::GetpMultisampleState) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  if (self->pMultisampleState.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pMultisampleState);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkGraphicsPipelineCreateInfo::SetpMultisampleState) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkPipelineMultisampleStateCreateInfo::constructor)->HasInstance(obj)) {
      self->pMultisampleState.Reset<v8::Object>(value.As<v8::Object>());
      _VkPipelineMultisampleStateCreateInfo* inst = Nan::ObjectWrap::Unwrap<_VkPipelineMultisampleStateCreateInfo>(obj);
      self->instance.pMultisampleState = &inst->instance;
    } else {
      return Nan::ThrowError("Value of member 'pMultisampleState' has invalid type");
    }
  } else if (value->IsNull()) {
    self->pMultisampleState.Reset();
    self->instance.pMultisampleState = nullptr;
  } else {
    return Nan::ThrowError("Value of member 'pMultisampleState' has invalid type");
  }
}// pDepthStencilState
NAN_GETTER(_VkGraphicsPipelineCreateInfo::GetpDepthStencilState) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  if (self->pDepthStencilState.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pDepthStencilState);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkGraphicsPipelineCreateInfo::SetpDepthStencilState) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkPipelineDepthStencilStateCreateInfo::constructor)->HasInstance(obj)) {
      self->pDepthStencilState.Reset<v8::Object>(value.As<v8::Object>());
      _VkPipelineDepthStencilStateCreateInfo* inst = Nan::ObjectWrap::Unwrap<_VkPipelineDepthStencilStateCreateInfo>(obj);
      self->instance.pDepthStencilState = &inst->instance;
    } else {
      return Nan::ThrowError("Value of member 'pDepthStencilState' has invalid type");
    }
  } else if (value->IsNull()) {
    self->pDepthStencilState.Reset();
    self->instance.pDepthStencilState = nullptr;
  } else {
    return Nan::ThrowError("Value of member 'pDepthStencilState' has invalid type");
  }
}// pColorBlendState
NAN_GETTER(_VkGraphicsPipelineCreateInfo::GetpColorBlendState) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  if (self->pColorBlendState.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pColorBlendState);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkGraphicsPipelineCreateInfo::SetpColorBlendState) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkPipelineColorBlendStateCreateInfo::constructor)->HasInstance(obj)) {
      self->pColorBlendState.Reset<v8::Object>(value.As<v8::Object>());
      _VkPipelineColorBlendStateCreateInfo* inst = Nan::ObjectWrap::Unwrap<_VkPipelineColorBlendStateCreateInfo>(obj);
      self->instance.pColorBlendState = &inst->instance;
    } else {
      return Nan::ThrowError("Value of member 'pColorBlendState' has invalid type");
    }
  } else if (value->IsNull()) {
    self->pColorBlendState.Reset();
    self->instance.pColorBlendState = nullptr;
  } else {
    return Nan::ThrowError("Value of member 'pColorBlendState' has invalid type");
  }
}// pDynamicState
NAN_GETTER(_VkGraphicsPipelineCreateInfo::GetpDynamicState) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  if (self->pDynamicState.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pDynamicState);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkGraphicsPipelineCreateInfo::SetpDynamicState) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkPipelineDynamicStateCreateInfo::constructor)->HasInstance(obj)) {
      self->pDynamicState.Reset<v8::Object>(value.As<v8::Object>());
      _VkPipelineDynamicStateCreateInfo* inst = Nan::ObjectWrap::Unwrap<_VkPipelineDynamicStateCreateInfo>(obj);
      self->instance.pDynamicState = &inst->instance;
    } else {
      return Nan::ThrowError("Value of member 'pDynamicState' has invalid type");
    }
  } else if (value->IsNull()) {
    self->pDynamicState.Reset();
    self->instance.pDynamicState = nullptr;
  } else {
    return Nan::ThrowError("Value of member 'pDynamicState' has invalid type");
  }
}// layout
NAN_GETTER(_VkGraphicsPipelineCreateInfo::Getlayout) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  if (self->layout.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->layout);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkGraphicsPipelineCreateInfo::Setlayout) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkPipelineLayout::constructor)->HasInstance(obj)) {
      self->layout.Reset<v8::Object>(value.As<v8::Object>());
      _VkPipelineLayout* inst = Nan::ObjectWrap::Unwrap<_VkPipelineLayout>(obj);
      self->instance.layout = inst->instance;
    } else {
      return Nan::ThrowError("Value of member 'layout' has invalid type");
    }
  } else if (value->IsNull()) {
    self->layout.Reset();
    self->instance.layout = VK_NULL_HANDLE;
  } else {
    return Nan::ThrowError("Value of member 'layout' has invalid type");
  }
}// renderPass
NAN_GETTER(_VkGraphicsPipelineCreateInfo::GetrenderPass) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  if (self->renderPass.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->renderPass);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkGraphicsPipelineCreateInfo::SetrenderPass) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkRenderPass::constructor)->HasInstance(obj)) {
      self->renderPass.Reset<v8::Object>(value.As<v8::Object>());
      _VkRenderPass* inst = Nan::ObjectWrap::Unwrap<_VkRenderPass>(obj);
      self->instance.renderPass = inst->instance;
    } else {
      return Nan::ThrowError("Value of member 'renderPass' has invalid type");
    }
  } else if (value->IsNull()) {
    self->renderPass.Reset();
    self->instance.renderPass = VK_NULL_HANDLE;
  } else {
    return Nan::ThrowError("Value of member 'renderPass' has invalid type");
  }
}// subpass
NAN_GETTER(_VkGraphicsPipelineCreateInfo::Getsubpass) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.subpass));
}NAN_SETTER(_VkGraphicsPipelineCreateInfo::Setsubpass) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.subpass = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowError("Value of member 'subpass' has invalid type");
  }
}// basePipelineHandle
NAN_GETTER(_VkGraphicsPipelineCreateInfo::GetbasePipelineHandle) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  if (self->basePipelineHandle.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->basePipelineHandle);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkGraphicsPipelineCreateInfo::SetbasePipelineHandle) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkPipeline::constructor)->HasInstance(obj)) {
      self->basePipelineHandle.Reset<v8::Object>(value.As<v8::Object>());
      _VkPipeline* inst = Nan::ObjectWrap::Unwrap<_VkPipeline>(obj);
      self->instance.basePipelineHandle = inst->instance;
    } else {
      return Nan::ThrowError("Value of member 'basePipelineHandle' has invalid type");
    }
  } else if (value->IsNull()) {
    self->basePipelineHandle.Reset();
    self->instance.basePipelineHandle = VK_NULL_HANDLE;
  } else {
    return Nan::ThrowError("Value of member 'basePipelineHandle' has invalid type");
  }
}// basePipelineIndex
NAN_GETTER(_VkGraphicsPipelineCreateInfo::GetbasePipelineIndex) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.basePipelineIndex));
}NAN_SETTER(_VkGraphicsPipelineCreateInfo::SetbasePipelineIndex) {
  _VkGraphicsPipelineCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkGraphicsPipelineCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.basePipelineIndex = static_cast<int32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowError("Value of member 'basePipelineIndex' has invalid type");
  }
}