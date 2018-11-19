/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.6
 */
#include "utils.h"
#include "index.h"
#include "VkBufferMemoryBarrier.h"

Nan::Persistent<v8::FunctionTemplate> _VkBufferMemoryBarrier::constructor;

_VkBufferMemoryBarrier::_VkBufferMemoryBarrier() {
  instance.sType = VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER;
}

_VkBufferMemoryBarrier::~_VkBufferMemoryBarrier() {
  //printf("VkBufferMemoryBarrier deconstructed!!\n");
}

void _VkBufferMemoryBarrier::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkBufferMemoryBarrier::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkBufferMemoryBarrier").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("pNext").ToLocalChecked(), GetpNext, SetpNext, ctor);
  SetPrototypeAccessor(proto, Nan::New("srcAccessMask").ToLocalChecked(), GetsrcAccessMask, SetsrcAccessMask, ctor);
  SetPrototypeAccessor(proto, Nan::New("dstAccessMask").ToLocalChecked(), GetdstAccessMask, SetdstAccessMask, ctor);
  SetPrototypeAccessor(proto, Nan::New("srcQueueFamilyIndex").ToLocalChecked(), GetsrcQueueFamilyIndex, SetsrcQueueFamilyIndex, ctor);
  SetPrototypeAccessor(proto, Nan::New("dstQueueFamilyIndex").ToLocalChecked(), GetdstQueueFamilyIndex, SetdstQueueFamilyIndex, ctor);
  SetPrototypeAccessor(proto, Nan::New("buffer").ToLocalChecked(), Getbuffer, Setbuffer, ctor);
  SetPrototypeAccessor(proto, Nan::New("offset").ToLocalChecked(), Getoffset, Setoffset, ctor);
  SetPrototypeAccessor(proto, Nan::New("size").ToLocalChecked(), Getsize, Setsize, ctor);
  Nan::Set(target, Nan::New("VkBufferMemoryBarrier").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkBufferMemoryBarrier::New) {
  if (info.IsConstructCall()) {
    _VkBufferMemoryBarrier* self = new _VkBufferMemoryBarrier();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("pNext").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("srcAccessMask").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("dstAccessMask").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("srcQueueFamilyIndex").ToLocalChecked();
      v8::Local<v8::String> sAccess5 = Nan::New("dstQueueFamilyIndex").ToLocalChecked();
      v8::Local<v8::String> sAccess6 = Nan::New("buffer").ToLocalChecked();
      v8::Local<v8::String> sAccess7 = Nan::New("offset").ToLocalChecked();
      v8::Local<v8::String> sAccess8 = Nan::New("size").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      if (obj->Has(sAccess5)) info.This()->Set(sAccess5, obj->Get(sAccess5));
      if (obj->Has(sAccess6)) info.This()->Set(sAccess6, obj->Get(sAccess6));
      if (obj->Has(sAccess7)) info.This()->Set(sAccess7, obj->Get(sAccess7));
      if (obj->Has(sAccess8)) info.This()->Set(sAccess8, obj->Get(sAccess8));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkBufferMemoryBarrier constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkBufferMemoryBarrier::GetsType) {
  _VkBufferMemoryBarrier *self = Nan::ObjectWrap::Unwrap<_VkBufferMemoryBarrier>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkBufferMemoryBarrier::SetsType) {
  _VkBufferMemoryBarrier *self = Nan::ObjectWrap::Unwrap<_VkBufferMemoryBarrier>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowError("Value of member 'sType' has invalid type");
  }
}// pNext
NAN_GETTER(_VkBufferMemoryBarrier::GetpNext) {
  _VkBufferMemoryBarrier *self = Nan::ObjectWrap::Unwrap<_VkBufferMemoryBarrier>(info.This());
}NAN_SETTER(_VkBufferMemoryBarrier::SetpNext) {
  _VkBufferMemoryBarrier *self = Nan::ObjectWrap::Unwrap<_VkBufferMemoryBarrier>(info.This());
}// srcAccessMask
NAN_GETTER(_VkBufferMemoryBarrier::GetsrcAccessMask) {
  _VkBufferMemoryBarrier *self = Nan::ObjectWrap::Unwrap<_VkBufferMemoryBarrier>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.srcAccessMask));
}NAN_SETTER(_VkBufferMemoryBarrier::SetsrcAccessMask) {
  _VkBufferMemoryBarrier *self = Nan::ObjectWrap::Unwrap<_VkBufferMemoryBarrier>(info.This());
  if (value->IsNumber()) {
    self->instance.srcAccessMask = static_cast<VkAccessFlags>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowError("Value of member 'srcAccessMask' has invalid type");
  }
}// dstAccessMask
NAN_GETTER(_VkBufferMemoryBarrier::GetdstAccessMask) {
  _VkBufferMemoryBarrier *self = Nan::ObjectWrap::Unwrap<_VkBufferMemoryBarrier>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.dstAccessMask));
}NAN_SETTER(_VkBufferMemoryBarrier::SetdstAccessMask) {
  _VkBufferMemoryBarrier *self = Nan::ObjectWrap::Unwrap<_VkBufferMemoryBarrier>(info.This());
  if (value->IsNumber()) {
    self->instance.dstAccessMask = static_cast<VkAccessFlags>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowError("Value of member 'dstAccessMask' has invalid type");
  }
}// srcQueueFamilyIndex
NAN_GETTER(_VkBufferMemoryBarrier::GetsrcQueueFamilyIndex) {
  _VkBufferMemoryBarrier *self = Nan::ObjectWrap::Unwrap<_VkBufferMemoryBarrier>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.srcQueueFamilyIndex));
}NAN_SETTER(_VkBufferMemoryBarrier::SetsrcQueueFamilyIndex) {
  _VkBufferMemoryBarrier *self = Nan::ObjectWrap::Unwrap<_VkBufferMemoryBarrier>(info.This());
  if (value->IsNumber()) {
    self->instance.srcQueueFamilyIndex = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowError("Value of member 'srcQueueFamilyIndex' has invalid type");
  }
}// dstQueueFamilyIndex
NAN_GETTER(_VkBufferMemoryBarrier::GetdstQueueFamilyIndex) {
  _VkBufferMemoryBarrier *self = Nan::ObjectWrap::Unwrap<_VkBufferMemoryBarrier>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.dstQueueFamilyIndex));
}NAN_SETTER(_VkBufferMemoryBarrier::SetdstQueueFamilyIndex) {
  _VkBufferMemoryBarrier *self = Nan::ObjectWrap::Unwrap<_VkBufferMemoryBarrier>(info.This());
  if (value->IsNumber()) {
    self->instance.dstQueueFamilyIndex = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowError("Value of member 'dstQueueFamilyIndex' has invalid type");
  }
}// buffer
NAN_GETTER(_VkBufferMemoryBarrier::Getbuffer) {
  _VkBufferMemoryBarrier *self = Nan::ObjectWrap::Unwrap<_VkBufferMemoryBarrier>(info.This());
  if (self->buffer.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->buffer);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkBufferMemoryBarrier::Setbuffer) {
  _VkBufferMemoryBarrier *self = Nan::ObjectWrap::Unwrap<_VkBufferMemoryBarrier>(info.This());
  // js
  if (!(value->IsNull())) {
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> obj(Nan::To<v8::Object>(value).ToLocalChecked());
    self->buffer = obj;
  } else {
    //self->buffer = Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>>(Nan::Null());
  }
  // vulkan
  if (!(value->IsNull())) {
    _VkBuffer* obj = Nan::ObjectWrap::Unwrap<_VkBuffer>(Nan::To<v8::Object>(value).ToLocalChecked());
    self->instance.buffer = obj->instance;
  } else {
    self->instance.buffer = VK_NULL_HANDLE;
  }
}// offset
NAN_GETTER(_VkBufferMemoryBarrier::Getoffset) {
  _VkBufferMemoryBarrier *self = Nan::ObjectWrap::Unwrap<_VkBufferMemoryBarrier>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.offset));
}NAN_SETTER(_VkBufferMemoryBarrier::Setoffset) {
  _VkBufferMemoryBarrier *self = Nan::ObjectWrap::Unwrap<_VkBufferMemoryBarrier>(info.This());
  if (value->IsNumber()) {
    self->instance.offset = static_cast<uint64_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowError("Value of member 'offset' has invalid type");
  }
}// size
NAN_GETTER(_VkBufferMemoryBarrier::Getsize) {
  _VkBufferMemoryBarrier *self = Nan::ObjectWrap::Unwrap<_VkBufferMemoryBarrier>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.size));
}NAN_SETTER(_VkBufferMemoryBarrier::Setsize) {
  _VkBufferMemoryBarrier *self = Nan::ObjectWrap::Unwrap<_VkBufferMemoryBarrier>(info.This());
  if (value->IsNumber()) {
    self->instance.size = static_cast<uint64_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowError("Value of member 'size' has invalid type");
  }
}