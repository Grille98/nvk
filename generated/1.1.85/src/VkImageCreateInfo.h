/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.6
 */
#ifndef __VK_VKIMAGECREATEINFO_H__
#define __VK_VKIMAGECREATEINFO_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkImageCreateInfo: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> pNext;
    static NAN_GETTER(GetpNext);
    static NAN_SETTER(SetpNext);
    
    static NAN_GETTER(Getflags);
    static NAN_SETTER(Setflags);
    
    static NAN_GETTER(GetimageType);
    static NAN_SETTER(SetimageType);
    
    static NAN_GETTER(Getformat);
    static NAN_SETTER(Setformat);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> extent;
      static NAN_GETTER(Getextent);
    static NAN_SETTER(Setextent);
    
    static NAN_GETTER(GetmipLevels);
    static NAN_SETTER(SetmipLevels);
    
    static NAN_GETTER(GetarrayLayers);
    static NAN_SETTER(SetarrayLayers);
    
    static NAN_GETTER(Getsamples);
    static NAN_SETTER(Setsamples);
    
    static NAN_GETTER(Gettiling);
    static NAN_SETTER(Settiling);
    
    static NAN_GETTER(Getusage);
    static NAN_SETTER(Setusage);
    
    static NAN_GETTER(GetsharingMode);
    static NAN_SETTER(SetsharingMode);
    
    static NAN_GETTER(GetqueueFamilyIndexCount);
    static NAN_SETTER(SetqueueFamilyIndexCount);
    
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pQueueFamilyIndices;
    static NAN_GETTER(GetpQueueFamilyIndices);
    static NAN_SETTER(SetpQueueFamilyIndices);
    
    static NAN_GETTER(GetinitialLayout);
    static NAN_SETTER(SetinitialLayout);
    

    // real instance
    VkImageCreateInfo instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);

  private:
    _VkImageCreateInfo();
    ~_VkImageCreateInfo();

};

#endif