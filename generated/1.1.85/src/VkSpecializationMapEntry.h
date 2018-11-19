/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.6
 */
#ifndef __VK_VKSPECIALIZATIONMAPENTRY_H__
#define __VK_VKSPECIALIZATIONMAPENTRY_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkSpecializationMapEntry: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetconstantID);
    static NAN_SETTER(SetconstantID);
    
    static NAN_GETTER(Getoffset);
    static NAN_SETTER(Setoffset);
    
    static NAN_GETTER(Getsize);
    static NAN_SETTER(Setsize);
    

    // real instance
    VkSpecializationMapEntry instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);

  private:
    _VkSpecializationMapEntry();
    ~_VkSpecializationMapEntry();

};

#endif