/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.6
 */
#include "utils.h"
#include "index.h"
#include "VkCommandBufferInheritanceInfo.h"

Nan::Persistent<v8::FunctionTemplate> _VkCommandBufferInheritanceInfo::constructor;

_VkCommandBufferInheritanceInfo::_VkCommandBufferInheritanceInfo() {
  instance.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_INFO;
}

_VkCommandBufferInheritanceInfo::~_VkCommandBufferInheritanceInfo() {
  //printf("VkCommandBufferInheritanceInfo deconstructed!!\n");
}

void _VkCommandBufferInheritanceInfo::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkCommandBufferInheritanceInfo::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkCommandBufferInheritanceInfo").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("pNext").ToLocalChecked(), GetpNext, SetpNext, ctor);
  SetPrototypeAccessor(proto, Nan::New("renderPass").ToLocalChecked(), GetrenderPass, SetrenderPass, ctor);
  SetPrototypeAccessor(proto, Nan::New("subpass").ToLocalChecked(), Getsubpass, Setsubpass, ctor);
  SetPrototypeAccessor(proto, Nan::New("framebuffer").ToLocalChecked(), Getframebuffer, Setframebuffer, ctor);
  SetPrototypeAccessor(proto, Nan::New("occlusionQueryEnable").ToLocalChecked(), GetocclusionQueryEnable, SetocclusionQueryEnable, ctor);
  SetPrototypeAccessor(proto, Nan::New("queryFlags").ToLocalChecked(), GetqueryFlags, SetqueryFlags, ctor);
  SetPrototypeAccessor(proto, Nan::New("pipelineStatistics").ToLocalChecked(), GetpipelineStatistics, SetpipelineStatistics, ctor);
  Nan::Set(target, Nan::New("VkCommandBufferInheritanceInfo").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkCommandBufferInheritanceInfo::New) {
  if (info.IsConstructCall()) {
    _VkCommandBufferInheritanceInfo* self = new _VkCommandBufferInheritanceInfo();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("pNext").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("renderPass").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("subpass").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("framebuffer").ToLocalChecked();
      v8::Local<v8::String> sAccess5 = Nan::New("occlusionQueryEnable").ToLocalChecked();
      v8::Local<v8::String> sAccess6 = Nan::New("queryFlags").ToLocalChecked();
      v8::Local<v8::String> sAccess7 = Nan::New("pipelineStatistics").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      if (obj->Has(sAccess5)) info.This()->Set(sAccess5, obj->Get(sAccess5));
      if (obj->Has(sAccess6)) info.This()->Set(sAccess6, obj->Get(sAccess6));
      if (obj->Has(sAccess7)) info.This()->Set(sAccess7, obj->Get(sAccess7));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkCommandBufferInheritanceInfo constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkCommandBufferInheritanceInfo::GetsType) {
  _VkCommandBufferInheritanceInfo *self = Nan::ObjectWrap::Unwrap<_VkCommandBufferInheritanceInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkCommandBufferInheritanceInfo::SetsType) {
  _VkCommandBufferInheritanceInfo *self = Nan::ObjectWrap::Unwrap<_VkCommandBufferInheritanceInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowError("Value of member 'sType' has invalid type");
  }
}// pNext
NAN_GETTER(_VkCommandBufferInheritanceInfo::GetpNext) {
  _VkCommandBufferInheritanceInfo *self = Nan::ObjectWrap::Unwrap<_VkCommandBufferInheritanceInfo>(info.This());
}NAN_SETTER(_VkCommandBufferInheritanceInfo::SetpNext) {
  _VkCommandBufferInheritanceInfo *self = Nan::ObjectWrap::Unwrap<_VkCommandBufferInheritanceInfo>(info.This());
}// renderPass
NAN_GETTER(_VkCommandBufferInheritanceInfo::GetrenderPass) {
  _VkCommandBufferInheritanceInfo *self = Nan::ObjectWrap::Unwrap<_VkCommandBufferInheritanceInfo>(info.This());
  if (self->renderPass.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->renderPass);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkCommandBufferInheritanceInfo::SetrenderPass) {
  _VkCommandBufferInheritanceInfo *self = Nan::ObjectWrap::Unwrap<_VkCommandBufferInheritanceInfo>(info.This());
  // js
  if (!(value->IsNull())) {
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> obj(Nan::To<v8::Object>(value).ToLocalChecked());
    self->renderPass = obj;
  } else {
    //self->renderPass = Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>>(Nan::Null());
  }
  // vulkan
  if (!(value->IsNull())) {
    _VkRenderPass* obj = Nan::ObjectWrap::Unwrap<_VkRenderPass>(Nan::To<v8::Object>(value).ToLocalChecked());
    self->instance.renderPass = obj->instance;
  } else {
    self->instance.renderPass = VK_NULL_HANDLE;
  }
}// subpass
NAN_GETTER(_VkCommandBufferInheritanceInfo::Getsubpass) {
  _VkCommandBufferInheritanceInfo *self = Nan::ObjectWrap::Unwrap<_VkCommandBufferInheritanceInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.subpass));
}NAN_SETTER(_VkCommandBufferInheritanceInfo::Setsubpass) {
  _VkCommandBufferInheritanceInfo *self = Nan::ObjectWrap::Unwrap<_VkCommandBufferInheritanceInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.subpass = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowError("Value of member 'subpass' has invalid type");
  }
}// framebuffer
NAN_GETTER(_VkCommandBufferInheritanceInfo::Getframebuffer) {
  _VkCommandBufferInheritanceInfo *self = Nan::ObjectWrap::Unwrap<_VkCommandBufferInheritanceInfo>(info.This());
  if (self->framebuffer.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->framebuffer);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkCommandBufferInheritanceInfo::Setframebuffer) {
  _VkCommandBufferInheritanceInfo *self = Nan::ObjectWrap::Unwrap<_VkCommandBufferInheritanceInfo>(info.This());
  // js
  if (!(value->IsNull())) {
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> obj(Nan::To<v8::Object>(value).ToLocalChecked());
    self->framebuffer = obj;
  } else {
    //self->framebuffer = Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>>(Nan::Null());
  }
  // vulkan
  if (!(value->IsNull())) {
    _VkFramebuffer* obj = Nan::ObjectWrap::Unwrap<_VkFramebuffer>(Nan::To<v8::Object>(value).ToLocalChecked());
    self->instance.framebuffer = obj->instance;
  } else {
    self->instance.framebuffer = VK_NULL_HANDLE;
  }
}// occlusionQueryEnable
NAN_GETTER(_VkCommandBufferInheritanceInfo::GetocclusionQueryEnable) {
  _VkCommandBufferInheritanceInfo *self = Nan::ObjectWrap::Unwrap<_VkCommandBufferInheritanceInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.occlusionQueryEnable));
}NAN_SETTER(_VkCommandBufferInheritanceInfo::SetocclusionQueryEnable) {
  _VkCommandBufferInheritanceInfo *self = Nan::ObjectWrap::Unwrap<_VkCommandBufferInheritanceInfo>(info.This());
  if (value->IsBoolean() || value->IsNumber()) {
    self->instance.occlusionQueryEnable = static_cast<uint32_t>(Nan::To<bool>(value).FromMaybe(false)) ? VK_TRUE : VK_FALSE;
  } else {
    return Nan::ThrowError("Value of member 'occlusionQueryEnable' has invalid type");
  }
}// queryFlags
NAN_GETTER(_VkCommandBufferInheritanceInfo::GetqueryFlags) {
  _VkCommandBufferInheritanceInfo *self = Nan::ObjectWrap::Unwrap<_VkCommandBufferInheritanceInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.queryFlags));
}NAN_SETTER(_VkCommandBufferInheritanceInfo::SetqueryFlags) {
  _VkCommandBufferInheritanceInfo *self = Nan::ObjectWrap::Unwrap<_VkCommandBufferInheritanceInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.queryFlags = static_cast<VkQueryControlFlags>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowError("Value of member 'queryFlags' has invalid type");
  }
}// pipelineStatistics
NAN_GETTER(_VkCommandBufferInheritanceInfo::GetpipelineStatistics) {
  _VkCommandBufferInheritanceInfo *self = Nan::ObjectWrap::Unwrap<_VkCommandBufferInheritanceInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.pipelineStatistics));
}NAN_SETTER(_VkCommandBufferInheritanceInfo::SetpipelineStatistics) {
  _VkCommandBufferInheritanceInfo *self = Nan::ObjectWrap::Unwrap<_VkCommandBufferInheritanceInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.pipelineStatistics = static_cast<VkQueryPipelineStatisticFlags>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowError("Value of member 'pipelineStatistics' has invalid type");
  }
}