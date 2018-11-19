/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.6
 */
#include "utils.h"
#include "index.h"
#include "VkShaderModuleCreateInfo.h"

Nan::Persistent<v8::FunctionTemplate> _VkShaderModuleCreateInfo::constructor;

_VkShaderModuleCreateInfo::_VkShaderModuleCreateInfo() {
  instance.sType = VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO;
}

_VkShaderModuleCreateInfo::~_VkShaderModuleCreateInfo() {
  //printf("VkShaderModuleCreateInfo deconstructed!!\n");
}

void _VkShaderModuleCreateInfo::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkShaderModuleCreateInfo::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkShaderModuleCreateInfo").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("pNext").ToLocalChecked(), GetpNext, SetpNext, ctor);
  SetPrototypeAccessor(proto, Nan::New("flags").ToLocalChecked(), Getflags, Setflags, ctor);
  SetPrototypeAccessor(proto, Nan::New("codeSize").ToLocalChecked(), GetcodeSize, SetcodeSize, ctor);
  SetPrototypeAccessor(proto, Nan::New("pCode").ToLocalChecked(), GetpCode, SetpCode, ctor);
  Nan::Set(target, Nan::New("VkShaderModuleCreateInfo").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkShaderModuleCreateInfo::New) {
  if (info.IsConstructCall()) {
    _VkShaderModuleCreateInfo* self = new _VkShaderModuleCreateInfo();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("pNext").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("flags").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("codeSize").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("pCode").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkShaderModuleCreateInfo constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkShaderModuleCreateInfo::GetsType) {
  _VkShaderModuleCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkShaderModuleCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkShaderModuleCreateInfo::SetsType) {
  _VkShaderModuleCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkShaderModuleCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowError("Value of member 'sType' has invalid type");
  }
}// pNext
NAN_GETTER(_VkShaderModuleCreateInfo::GetpNext) {
  _VkShaderModuleCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkShaderModuleCreateInfo>(info.This());
}NAN_SETTER(_VkShaderModuleCreateInfo::SetpNext) {
  _VkShaderModuleCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkShaderModuleCreateInfo>(info.This());
}// flags
NAN_GETTER(_VkShaderModuleCreateInfo::Getflags) {
  _VkShaderModuleCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkShaderModuleCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.flags));
}NAN_SETTER(_VkShaderModuleCreateInfo::Setflags) {
  _VkShaderModuleCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkShaderModuleCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.flags = static_cast<VkShaderModuleCreateFlags>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowError("Value of member 'flags' has invalid type");
  }
}// codeSize
NAN_GETTER(_VkShaderModuleCreateInfo::GetcodeSize) {
  _VkShaderModuleCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkShaderModuleCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.codeSize));
}NAN_SETTER(_VkShaderModuleCreateInfo::SetcodeSize) {
  _VkShaderModuleCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkShaderModuleCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.codeSize = static_cast<size_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowError("Value of member 'codeSize' has invalid type");
  }
}// pCode
NAN_GETTER(_VkShaderModuleCreateInfo::GetpCode) {
  _VkShaderModuleCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkShaderModuleCreateInfo>(info.This());
  if (self->pCode.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pCode);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkShaderModuleCreateInfo::SetpCode) {
  _VkShaderModuleCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkShaderModuleCreateInfo>(info.This());
  
    // js
    if (value->IsArrayBufferView()) {
      self->pCode.Reset<v8::Array>(value.As<v8::Array>());
    } else if (value->IsNull()) {
      self->pCode.Reset();
    } else {
      return Nan::ThrowError("Value of member 'pCode' has invalid type");
    }
  
  
  // vulkan
  if (value->IsArrayBufferView()) {
    self->instance.pCode = getTypedArrayData<uint32_t>(Nan::To<v8::Object>(value).ToLocalChecked(), nullptr);
  } else {
    self->instance.pCode = nullptr;
  }
}