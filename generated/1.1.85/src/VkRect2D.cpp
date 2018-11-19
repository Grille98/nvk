/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.6
 */
#include "utils.h"
#include "index.h"
#include "VkRect2D.h"

Nan::Persistent<v8::FunctionTemplate> _VkRect2D::constructor;

_VkRect2D::_VkRect2D() {
  
}

_VkRect2D::~_VkRect2D() {
  //printf("VkRect2D deconstructed!!\n");
}

void _VkRect2D::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkRect2D::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkRect2D").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("offset").ToLocalChecked(), Getoffset, Setoffset, ctor);
  SetPrototypeAccessor(proto, Nan::New("extent").ToLocalChecked(), Getextent, Setextent, ctor);
  Nan::Set(target, Nan::New("VkRect2D").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkRect2D::New) {
  if (info.IsConstructCall()) {
    _VkRect2D* self = new _VkRect2D();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("offset").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("extent").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkRect2D constructor cannot be invoked without 'new'");
  }
};

// offset
NAN_GETTER(_VkRect2D::Getoffset) {
  _VkRect2D *self = Nan::ObjectWrap::Unwrap<_VkRect2D>(info.This());
  if (self->offset.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->offset);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkRect2D::Setoffset) {
  _VkRect2D *self = Nan::ObjectWrap::Unwrap<_VkRect2D>(info.This());
  // js
  if (!(value->IsNull())) {
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> obj(Nan::To<v8::Object>(value).ToLocalChecked());
    self->offset = obj;
  } else {
    //self->offset = Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>>(Nan::Null());
  }
  // vulkan
  if (!(value->IsNull())) {
    _VkOffset2D* obj = Nan::ObjectWrap::Unwrap<_VkOffset2D>(Nan::To<v8::Object>(value).ToLocalChecked());
    self->instance.offset = obj->instance;
  } else {
    memset(&self->instance.offset, 0, sizeof(VkOffset2D));
  }
}// extent
NAN_GETTER(_VkRect2D::Getextent) {
  _VkRect2D *self = Nan::ObjectWrap::Unwrap<_VkRect2D>(info.This());
  if (self->extent.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->extent);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkRect2D::Setextent) {
  _VkRect2D *self = Nan::ObjectWrap::Unwrap<_VkRect2D>(info.This());
  // js
  if (!(value->IsNull())) {
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> obj(Nan::To<v8::Object>(value).ToLocalChecked());
    self->extent = obj;
  } else {
    //self->extent = Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>>(Nan::Null());
  }
  // vulkan
  if (!(value->IsNull())) {
    _VkExtent2D* obj = Nan::ObjectWrap::Unwrap<_VkExtent2D>(Nan::To<v8::Object>(value).ToLocalChecked());
    self->instance.extent = obj->instance;
  } else {
    memset(&self->instance.extent, 0, sizeof(VkExtent2D));
  }
}