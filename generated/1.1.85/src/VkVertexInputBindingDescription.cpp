/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.6
 */
#include "utils.h"
#include "index.h"
#include "VkVertexInputBindingDescription.h"

Nan::Persistent<v8::FunctionTemplate> _VkVertexInputBindingDescription::constructor;

_VkVertexInputBindingDescription::_VkVertexInputBindingDescription() {
  
}

_VkVertexInputBindingDescription::~_VkVertexInputBindingDescription() {
  //printf("VkVertexInputBindingDescription deconstructed!!\n");
}

void _VkVertexInputBindingDescription::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkVertexInputBindingDescription::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkVertexInputBindingDescription").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("binding").ToLocalChecked(), Getbinding, Setbinding, ctor);
  SetPrototypeAccessor(proto, Nan::New("stride").ToLocalChecked(), Getstride, Setstride, ctor);
  SetPrototypeAccessor(proto, Nan::New("inputRate").ToLocalChecked(), GetinputRate, SetinputRate, ctor);
  Nan::Set(target, Nan::New("VkVertexInputBindingDescription").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkVertexInputBindingDescription::New) {
  if (info.IsConstructCall()) {
    _VkVertexInputBindingDescription* self = new _VkVertexInputBindingDescription();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("binding").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("stride").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("inputRate").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkVertexInputBindingDescription constructor cannot be invoked without 'new'");
  }
};

// binding
NAN_GETTER(_VkVertexInputBindingDescription::Getbinding) {
  _VkVertexInputBindingDescription *self = Nan::ObjectWrap::Unwrap<_VkVertexInputBindingDescription>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.binding));
}NAN_SETTER(_VkVertexInputBindingDescription::Setbinding) {
  _VkVertexInputBindingDescription *self = Nan::ObjectWrap::Unwrap<_VkVertexInputBindingDescription>(info.This());
  if (value->IsNumber()) {
    self->instance.binding = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowError("Value of member 'binding' has invalid type");
  }
}// stride
NAN_GETTER(_VkVertexInputBindingDescription::Getstride) {
  _VkVertexInputBindingDescription *self = Nan::ObjectWrap::Unwrap<_VkVertexInputBindingDescription>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.stride));
}NAN_SETTER(_VkVertexInputBindingDescription::Setstride) {
  _VkVertexInputBindingDescription *self = Nan::ObjectWrap::Unwrap<_VkVertexInputBindingDescription>(info.This());
  if (value->IsNumber()) {
    self->instance.stride = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowError("Value of member 'stride' has invalid type");
  }
}// inputRate
NAN_GETTER(_VkVertexInputBindingDescription::GetinputRate) {
  _VkVertexInputBindingDescription *self = Nan::ObjectWrap::Unwrap<_VkVertexInputBindingDescription>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.inputRate));
}NAN_SETTER(_VkVertexInputBindingDescription::SetinputRate) {
  _VkVertexInputBindingDescription *self = Nan::ObjectWrap::Unwrap<_VkVertexInputBindingDescription>(info.This());
  if (value->IsNumber()) {
    self->instance.inputRate = static_cast<VkVertexInputRate>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowError("Value of member 'inputRate' has invalid type");
  }
}