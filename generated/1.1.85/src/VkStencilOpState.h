/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.6
 */
#ifndef __VK_VKSTENCILOPSTATE_H__
#define __VK_VKSTENCILOPSTATE_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkStencilOpState: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetfailOp);
    static NAN_SETTER(SetfailOp);
    
    static NAN_GETTER(GetpassOp);
    static NAN_SETTER(SetpassOp);
    
    static NAN_GETTER(GetdepthFailOp);
    static NAN_SETTER(SetdepthFailOp);
    
    static NAN_GETTER(GetcompareOp);
    static NAN_SETTER(SetcompareOp);
    
    static NAN_GETTER(GetcompareMask);
    static NAN_SETTER(SetcompareMask);
    
    static NAN_GETTER(GetwriteMask);
    static NAN_SETTER(SetwriteMask);
    
    static NAN_GETTER(Getreference);
    static NAN_SETTER(Setreference);
    

    // real instance
    VkStencilOpState instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);

  private:
    _VkStencilOpState();
    ~_VkStencilOpState();

};

#endif