/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.6
 */
#include "utils.h"
#include "index.h"
#include "VkPipelineDepthStencilStateCreateInfo.h"

Nan::Persistent<v8::FunctionTemplate> _VkPipelineDepthStencilStateCreateInfo::constructor;

_VkPipelineDepthStencilStateCreateInfo::_VkPipelineDepthStencilStateCreateInfo() {
  instance.sType = VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO;
}

_VkPipelineDepthStencilStateCreateInfo::~_VkPipelineDepthStencilStateCreateInfo() {
  //printf("VkPipelineDepthStencilStateCreateInfo deconstructed!!\n");
}

void _VkPipelineDepthStencilStateCreateInfo::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPipelineDepthStencilStateCreateInfo::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPipelineDepthStencilStateCreateInfo").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("pNext").ToLocalChecked(), GetpNext, SetpNext, ctor);
  SetPrototypeAccessor(proto, Nan::New("flags").ToLocalChecked(), Getflags, Setflags, ctor);
  SetPrototypeAccessor(proto, Nan::New("depthTestEnable").ToLocalChecked(), GetdepthTestEnable, SetdepthTestEnable, ctor);
  SetPrototypeAccessor(proto, Nan::New("depthWriteEnable").ToLocalChecked(), GetdepthWriteEnable, SetdepthWriteEnable, ctor);
  SetPrototypeAccessor(proto, Nan::New("depthCompareOp").ToLocalChecked(), GetdepthCompareOp, SetdepthCompareOp, ctor);
  SetPrototypeAccessor(proto, Nan::New("depthBoundsTestEnable").ToLocalChecked(), GetdepthBoundsTestEnable, SetdepthBoundsTestEnable, ctor);
  SetPrototypeAccessor(proto, Nan::New("stencilTestEnable").ToLocalChecked(), GetstencilTestEnable, SetstencilTestEnable, ctor);
  SetPrototypeAccessor(proto, Nan::New("front").ToLocalChecked(), Getfront, Setfront, ctor);
  SetPrototypeAccessor(proto, Nan::New("back").ToLocalChecked(), Getback, Setback, ctor);
  SetPrototypeAccessor(proto, Nan::New("minDepthBounds").ToLocalChecked(), GetminDepthBounds, SetminDepthBounds, ctor);
  SetPrototypeAccessor(proto, Nan::New("maxDepthBounds").ToLocalChecked(), GetmaxDepthBounds, SetmaxDepthBounds, ctor);
  Nan::Set(target, Nan::New("VkPipelineDepthStencilStateCreateInfo").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkPipelineDepthStencilStateCreateInfo::New) {
  if (info.IsConstructCall()) {
    _VkPipelineDepthStencilStateCreateInfo* self = new _VkPipelineDepthStencilStateCreateInfo();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("pNext").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("flags").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("depthTestEnable").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("depthWriteEnable").ToLocalChecked();
      v8::Local<v8::String> sAccess5 = Nan::New("depthCompareOp").ToLocalChecked();
      v8::Local<v8::String> sAccess6 = Nan::New("depthBoundsTestEnable").ToLocalChecked();
      v8::Local<v8::String> sAccess7 = Nan::New("stencilTestEnable").ToLocalChecked();
      v8::Local<v8::String> sAccess8 = Nan::New("front").ToLocalChecked();
      v8::Local<v8::String> sAccess9 = Nan::New("back").ToLocalChecked();
      v8::Local<v8::String> sAccess10 = Nan::New("minDepthBounds").ToLocalChecked();
      v8::Local<v8::String> sAccess11 = Nan::New("maxDepthBounds").ToLocalChecked();
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
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPipelineDepthStencilStateCreateInfo constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkPipelineDepthStencilStateCreateInfo::GetsType) {
  _VkPipelineDepthStencilStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineDepthStencilStateCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkPipelineDepthStencilStateCreateInfo::SetsType) {
  _VkPipelineDepthStencilStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineDepthStencilStateCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowError("Value of member 'sType' has invalid type");
  }
}// pNext
NAN_GETTER(_VkPipelineDepthStencilStateCreateInfo::GetpNext) {
  _VkPipelineDepthStencilStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineDepthStencilStateCreateInfo>(info.This());
}NAN_SETTER(_VkPipelineDepthStencilStateCreateInfo::SetpNext) {
  _VkPipelineDepthStencilStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineDepthStencilStateCreateInfo>(info.This());
}// flags
NAN_GETTER(_VkPipelineDepthStencilStateCreateInfo::Getflags) {
  _VkPipelineDepthStencilStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineDepthStencilStateCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.flags));
}NAN_SETTER(_VkPipelineDepthStencilStateCreateInfo::Setflags) {
  _VkPipelineDepthStencilStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineDepthStencilStateCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.flags = static_cast<VkPipelineDepthStencilStateCreateFlags>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowError("Value of member 'flags' has invalid type");
  }
}// depthTestEnable
NAN_GETTER(_VkPipelineDepthStencilStateCreateInfo::GetdepthTestEnable) {
  _VkPipelineDepthStencilStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineDepthStencilStateCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.depthTestEnable));
}NAN_SETTER(_VkPipelineDepthStencilStateCreateInfo::SetdepthTestEnable) {
  _VkPipelineDepthStencilStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineDepthStencilStateCreateInfo>(info.This());
  if (value->IsBoolean() || value->IsNumber()) {
    self->instance.depthTestEnable = static_cast<uint32_t>(Nan::To<bool>(value).FromMaybe(false)) ? VK_TRUE : VK_FALSE;
  } else {
    return Nan::ThrowError("Value of member 'depthTestEnable' has invalid type");
  }
}// depthWriteEnable
NAN_GETTER(_VkPipelineDepthStencilStateCreateInfo::GetdepthWriteEnable) {
  _VkPipelineDepthStencilStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineDepthStencilStateCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.depthWriteEnable));
}NAN_SETTER(_VkPipelineDepthStencilStateCreateInfo::SetdepthWriteEnable) {
  _VkPipelineDepthStencilStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineDepthStencilStateCreateInfo>(info.This());
  if (value->IsBoolean() || value->IsNumber()) {
    self->instance.depthWriteEnable = static_cast<uint32_t>(Nan::To<bool>(value).FromMaybe(false)) ? VK_TRUE : VK_FALSE;
  } else {
    return Nan::ThrowError("Value of member 'depthWriteEnable' has invalid type");
  }
}// depthCompareOp
NAN_GETTER(_VkPipelineDepthStencilStateCreateInfo::GetdepthCompareOp) {
  _VkPipelineDepthStencilStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineDepthStencilStateCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.depthCompareOp));
}NAN_SETTER(_VkPipelineDepthStencilStateCreateInfo::SetdepthCompareOp) {
  _VkPipelineDepthStencilStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineDepthStencilStateCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.depthCompareOp = static_cast<VkCompareOp>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowError("Value of member 'depthCompareOp' has invalid type");
  }
}// depthBoundsTestEnable
NAN_GETTER(_VkPipelineDepthStencilStateCreateInfo::GetdepthBoundsTestEnable) {
  _VkPipelineDepthStencilStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineDepthStencilStateCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.depthBoundsTestEnable));
}NAN_SETTER(_VkPipelineDepthStencilStateCreateInfo::SetdepthBoundsTestEnable) {
  _VkPipelineDepthStencilStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineDepthStencilStateCreateInfo>(info.This());
  if (value->IsBoolean() || value->IsNumber()) {
    self->instance.depthBoundsTestEnable = static_cast<uint32_t>(Nan::To<bool>(value).FromMaybe(false)) ? VK_TRUE : VK_FALSE;
  } else {
    return Nan::ThrowError("Value of member 'depthBoundsTestEnable' has invalid type");
  }
}// stencilTestEnable
NAN_GETTER(_VkPipelineDepthStencilStateCreateInfo::GetstencilTestEnable) {
  _VkPipelineDepthStencilStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineDepthStencilStateCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.stencilTestEnable));
}NAN_SETTER(_VkPipelineDepthStencilStateCreateInfo::SetstencilTestEnable) {
  _VkPipelineDepthStencilStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineDepthStencilStateCreateInfo>(info.This());
  if (value->IsBoolean() || value->IsNumber()) {
    self->instance.stencilTestEnable = static_cast<uint32_t>(Nan::To<bool>(value).FromMaybe(false)) ? VK_TRUE : VK_FALSE;
  } else {
    return Nan::ThrowError("Value of member 'stencilTestEnable' has invalid type");
  }
}// front
NAN_GETTER(_VkPipelineDepthStencilStateCreateInfo::Getfront) {
  _VkPipelineDepthStencilStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineDepthStencilStateCreateInfo>(info.This());
  if (self->front.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->front);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkPipelineDepthStencilStateCreateInfo::Setfront) {
  _VkPipelineDepthStencilStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineDepthStencilStateCreateInfo>(info.This());
  // js
  if (!(value->IsNull())) {
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> obj(Nan::To<v8::Object>(value).ToLocalChecked());
    self->front = obj;
  } else {
    //self->front = Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>>(Nan::Null());
  }
  // vulkan
  if (!(value->IsNull())) {
    _VkStencilOpState* obj = Nan::ObjectWrap::Unwrap<_VkStencilOpState>(Nan::To<v8::Object>(value).ToLocalChecked());
    self->instance.front = obj->instance;
  } else {
    memset(&self->instance.front, 0, sizeof(VkStencilOpState));
  }
}// back
NAN_GETTER(_VkPipelineDepthStencilStateCreateInfo::Getback) {
  _VkPipelineDepthStencilStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineDepthStencilStateCreateInfo>(info.This());
  if (self->back.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->back);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkPipelineDepthStencilStateCreateInfo::Setback) {
  _VkPipelineDepthStencilStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineDepthStencilStateCreateInfo>(info.This());
  // js
  if (!(value->IsNull())) {
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> obj(Nan::To<v8::Object>(value).ToLocalChecked());
    self->back = obj;
  } else {
    //self->back = Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>>(Nan::Null());
  }
  // vulkan
  if (!(value->IsNull())) {
    _VkStencilOpState* obj = Nan::ObjectWrap::Unwrap<_VkStencilOpState>(Nan::To<v8::Object>(value).ToLocalChecked());
    self->instance.back = obj->instance;
  } else {
    memset(&self->instance.back, 0, sizeof(VkStencilOpState));
  }
}// minDepthBounds
NAN_GETTER(_VkPipelineDepthStencilStateCreateInfo::GetminDepthBounds) {
  _VkPipelineDepthStencilStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineDepthStencilStateCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.minDepthBounds));
}NAN_SETTER(_VkPipelineDepthStencilStateCreateInfo::SetminDepthBounds) {
  _VkPipelineDepthStencilStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineDepthStencilStateCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.minDepthBounds = static_cast<float>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowError("Value of member 'minDepthBounds' has invalid type");
  }
}// maxDepthBounds
NAN_GETTER(_VkPipelineDepthStencilStateCreateInfo::GetmaxDepthBounds) {
  _VkPipelineDepthStencilStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineDepthStencilStateCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.maxDepthBounds));
}NAN_SETTER(_VkPipelineDepthStencilStateCreateInfo::SetmaxDepthBounds) {
  _VkPipelineDepthStencilStateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineDepthStencilStateCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.maxDepthBounds = static_cast<float>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowError("Value of member 'maxDepthBounds' has invalid type");
  }
}