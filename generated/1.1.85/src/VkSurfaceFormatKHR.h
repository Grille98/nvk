/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.6
 */
#ifndef __VK_VKSURFACEFORMATKHR_H__
#define __VK_VKSURFACEFORMATKHR_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkSurfaceFormatKHR: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(Getformat);
    static NAN_GETTER(GetcolorSpace);

    // real instance
    VkSurfaceFormatKHR instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);

  private:
    _VkSurfaceFormatKHR();
    ~_VkSurfaceFormatKHR();

};

#endif