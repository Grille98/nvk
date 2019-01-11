/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.5
 */
#ifndef __BASE__
#define __BASE__

#include <nan.h>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include "source.h"

/*
#include "VkDebugUtilsMessengerEXT.h"
#include "VkDebugReportCallbackEXT.h"
#include "VkSwapchainKHR.h"
#include "VkSurfaceKHR.h"
#include "VkDisplayModeKHR.h"
#include "VkDisplayKHR.h"
#include "VkAccelerationStructureNV.h"
#include "VkValidationCacheEXT.h"
#include "VkSamplerYcbcrConversion.h"
#include "VkDescriptorUpdateTemplate.h"
#include "VkIndirectCommandsLayoutNVX.h"
#include "VkObjectTableNVX.h"
#include "VkPipelineCache.h"
#include "VkRenderPass.h"
#include "VkFramebuffer.h"
#include "VkQueryPool.h"
#include "VkEvent.h"
#include "VkSemaphore.h"
#include "VkFence.h"
#include "VkDescriptorPool.h"
#include "VkDescriptorSetLayout.h"
#include "VkDescriptorSet.h"
#include "VkSampler.h"
#include "VkPipelineLayout.h"
#include "VkPipeline.h"
#include "VkShaderModule.h"
#include "VkImageView.h"
#include "VkImage.h"
#include "VkBufferView.h"
#include "VkBuffer.h"
#include "VkCommandPool.h"
#include "VkDeviceMemory.h"
#include "VkCommandBuffer.h"
#include "VkQueue.h"
#include "VkDevice.h"
#include "VkPhysicalDevice.h"
#include "VkInstance.h"
#include "VkClearColorValue.h"
#include "VkDeviceMemoryOverallocationCreateInfoAMD.h"
#include "VkImageDrmFormatModifierPropertiesEXT.h"
#include "VkSubresourceLayout.h"
#include "VkImageDrmFormatModifierExplicitCreateInfoEXT.h"
#include "VkImageDrmFormatModifierListCreateInfoEXT.h"
#include "VkPhysicalDeviceImageDrmFormatModifierInfoEXT.h"
#include "VkDrmFormatModifierPropertiesEXT.h"
#include "VkDrmFormatModifierPropertiesListEXT.h"
#include "VkPhysicalDeviceRayTracingPropertiesNV.h"
#include "VkAccelerationStructureMemoryRequirementsInfoNV.h"
#include "VkWriteDescriptorSetAccelerationStructureNV.h"
#include "VkBindAccelerationStructureMemoryInfoNV.h"
#include "VkGeometryAABBNV.h"
#include "VkGeometryTrianglesNV.h"
#include "VkGeometryDataNV.h"
#include "VkGeometryNV.h"
#include "VkAccelerationStructureInfoNV.h"
#include "VkAccelerationStructureCreateInfoNV.h"
#include "VkRayTracingShaderGroupCreateInfoNV.h"
#include "VkSpecializationMapEntry.h"
#include "VkSpecializationInfo.h"
#include "VkPipelineShaderStageCreateInfo.h"
#include "VkRayTracingPipelineCreateInfoNV.h"
#include "VkDrawMeshTasksIndirectCommandNV.h"
#include "VkPhysicalDeviceMeshShaderPropertiesNV.h"
#include "VkPhysicalDeviceMeshShaderFeaturesNV.h"
#include "VkCoarseSampleLocationNV.h"
#include "VkCoarseSampleOrderCustomNV.h"
#include "VkPipelineViewportCoarseSampleOrderStateCreateInfoNV.h"
#include "VkExtent2D.h"
#include "VkPhysicalDeviceShadingRateImagePropertiesNV.h"
#include "VkPhysicalDeviceShadingRateImageFeaturesNV.h"
#include "VkShadingRatePaletteNV.h"
#include "VkPipelineViewportShadingRateImageStateCreateInfoNV.h"
#include "VkPhysicalDeviceShaderImageFootprintFeaturesNV.h"
#include "VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV.h"
#include "VkPhysicalDeviceComputeShaderDerivativesFeaturesNV.h"
#include "VkPhysicalDeviceCornerSampledImageFeaturesNV.h"
#include "VkOffset2D.h"
#include "VkRect2D.h"
#include "VkPipelineViewportExclusiveScissorStateCreateInfoNV.h"
#include "VkPhysicalDeviceExclusiveScissorFeaturesNV.h"
#include "VkPipelineRepresentativeFragmentTestStateCreateInfoNV.h"
#include "VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV.h"
#include "VkPipelineRasterizationStateStreamCreateInfoEXT.h"
#include "VkPhysicalDeviceTransformFeedbackPropertiesEXT.h"
#include "VkPhysicalDeviceTransformFeedbackFeaturesEXT.h"
#include "VkPhysicalDeviceASTCDecodeFeaturesEXT.h"
#include "VkImageViewASTCDecodeModeEXT.h"
#include "VkCheckpointDataNV.h"
#include "VkQueueFamilyCheckpointPropertiesNV.h"
#include "VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT.h"
#include "VkPhysicalDeviceShaderAtomicInt64FeaturesKHR.h"
#include "VkPhysicalDeviceVulkanMemoryModelFeaturesKHR.h"
#include "VkPhysicalDeviceConditionalRenderingFeaturesEXT.h"
#include "VkPhysicalDevice8BitStorageFeaturesKHR.h"
#include "VkCommandBufferInheritanceConditionalRenderingInfoEXT.h"
#include "VkPhysicalDevicePCIBusInfoPropertiesEXT.h"
#include "VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT.h"
#include "VkVertexInputBindingDivisorDescriptionEXT.h"
#include "VkPipelineVertexInputDivisorStateCreateInfoEXT.h"
#include "VkSubpassEndInfoKHR.h"
#include "VkSubpassBeginInfoKHR.h"
#include "VkSubpassDependency2KHR.h"
#include "VkAttachmentReference2KHR.h"
#include "VkSubpassDescription2KHR.h"
#include "VkAttachmentDescription2KHR.h"
#include "VkRenderPassCreateInfo2KHR.h"
#include "VkDescriptorSetVariableDescriptorCountLayoutSupportEXT.h"
#include "VkDescriptorSetVariableDescriptorCountAllocateInfoEXT.h"
#include "VkDescriptorSetLayoutBindingFlagsCreateInfoEXT.h"
#include "VkPhysicalDeviceDescriptorIndexingPropertiesEXT.h"
#include "VkPhysicalDeviceDescriptorIndexingFeaturesEXT.h"
#include "VkPipelineRasterizationConservativeStateCreateInfoEXT.h"
#include "VkPhysicalDeviceShaderCorePropertiesAMD.h"
#include "VkCalibratedTimestampInfoEXT.h"
#include "VkPhysicalDeviceConservativeRasterizationPropertiesEXT.h"
#include "VkPhysicalDeviceExternalMemoryHostPropertiesEXT.h"
#include "VkMemoryHostPointerPropertiesEXT.h"
#include "VkImportMemoryHostPointerInfoEXT.h"
#include "VkDebugUtilsObjectNameInfoEXT.h"
#include "VkDebugUtilsLabelEXT.h"
#include "VkDebugUtilsMessengerCallbackDataEXT.h"
#include "VkDebugUtilsMessengerCreateInfoEXT.h"
#include "VkDebugUtilsObjectTagInfoEXT.h"
#include "VkDeviceQueueGlobalPriorityCreateInfoEXT.h"
#include "VkShaderResourceUsageAMD.h"
#include "VkShaderStatisticsInfoAMD.h"
#include "VkPhysicalDeviceShaderDrawParameterFeatures.h"
#include "VkDescriptorSetLayoutSupportKHR.h"
#include "VkDescriptorSetLayoutSupport.h"
#include "VkPhysicalDeviceMaintenance3PropertiesKHR.h"
#include "VkPhysicalDeviceMaintenance3Properties.h"
#include "VkShaderModuleValidationCacheCreateInfoEXT.h"
#include "VkValidationCacheCreateInfoEXT.h"
#include "VkImageFormatListCreateInfoKHR.h"
#include "VkPipelineCoverageModulationStateCreateInfoNV.h"
#include "VkDescriptorPoolInlineUniformBlockCreateInfoEXT.h"
#include "VkWriteDescriptorSetInlineUniformBlockEXT.h"
#include "VkPhysicalDeviceInlineUniformBlockPropertiesEXT.h"
#include "VkPhysicalDeviceInlineUniformBlockFeaturesEXT.h"
#include "VkPipelineColorBlendAdvancedStateCreateInfoEXT.h"
#include "VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT.h"
#include "VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT.h"
#include "VkSamplerReductionModeCreateInfoEXT.h"
#include "VkMultisamplePropertiesEXT.h"
#include "VkPhysicalDeviceSampleLocationsPropertiesEXT.h"
#include "VkSampleLocationEXT.h"
#include "VkSampleLocationsInfoEXT.h"
#include "VkPipelineSampleLocationsStateCreateInfoEXT.h"
#include "VkSubpassSampleLocationsEXT.h"
#include "VkAttachmentSampleLocationsEXT.h"
#include "VkRenderPassSampleLocationsBeginInfoEXT.h"
#include "VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT.h"
#include "VkPipelineCoverageToColorStateCreateInfoNV.h"
#include "VkDeviceQueueInfo2.h"
#include "VkPhysicalDeviceProtectedMemoryProperties.h"
#include "VkPhysicalDeviceProtectedMemoryFeatures.h"
#include "VkProtectedSubmitInfo.h"
#include "VkConditionalRenderingBeginInfoEXT.h"
#include "VkTextureLODGatherFormatPropertiesAMD.h"
#include "VkSamplerYcbcrConversionImageFormatPropertiesKHR.h"
#include "VkSamplerYcbcrConversionImageFormatProperties.h"
#include "VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR.h"
#include "VkPhysicalDeviceSamplerYcbcrConversionFeatures.h"
#include "VkImagePlaneMemoryRequirementsInfoKHR.h"
#include "VkImagePlaneMemoryRequirementsInfo.h"
#include "VkBindImagePlaneMemoryInfoKHR.h"
#include "VkBindImagePlaneMemoryInfo.h"
#include "VkSamplerYcbcrConversionCreateInfoKHR.h"
#include "VkComponentMapping.h"
#include "VkSamplerYcbcrConversionCreateInfo.h"
#include "VkSamplerYcbcrConversionInfoKHR.h"
#include "VkSamplerYcbcrConversionInfo.h"
#include "VkPipelineTessellationDomainOriginStateCreateInfoKHR.h"
#include "VkPipelineTessellationDomainOriginStateCreateInfo.h"
#include "VkImageViewUsageCreateInfoKHR.h"
#include "VkImageViewUsageCreateInfo.h"
#include "VkMemoryDedicatedAllocateInfoKHR.h"
#include "VkMemoryDedicatedAllocateInfo.h"
#include "VkMemoryDedicatedRequirementsKHR.h"
#include "VkMemoryDedicatedRequirements.h"
#include "VkPhysicalDevicePointClippingPropertiesKHR.h"
#include "VkPhysicalDevicePointClippingProperties.h"
#include "VkSparseImageMemoryRequirements2KHR.h"
#include "VkExtent3D.h"
#include "VkSparseImageFormatProperties.h"
#include "VkSparseImageMemoryRequirements.h"
#include "VkSparseImageMemoryRequirements2.h"
#include "VkMemoryRequirements2KHR.h"
#include "VkMemoryRequirements.h"
#include "VkMemoryRequirements2.h"
#include "VkImageSparseMemoryRequirementsInfo2KHR.h"
#include "VkImageSparseMemoryRequirementsInfo2.h"
#include "VkImageMemoryRequirementsInfo2KHR.h"
#include "VkImageMemoryRequirementsInfo2.h"
#include "VkBufferMemoryRequirementsInfo2KHR.h"
#include "VkBufferMemoryRequirementsInfo2.h"
#include "VkPhysicalDeviceSubgroupProperties.h"
#include "VkPhysicalDevice16BitStorageFeaturesKHR.h"
#include "VkPhysicalDevice16BitStorageFeatures.h"
#include "VkSharedPresentSurfaceCapabilitiesKHR.h"
#include "VkDisplayPlaneCapabilitiesKHR.h"
#include "VkDisplayPlaneCapabilities2KHR.h"
#include "VkDisplayPlaneInfo2KHR.h"
#include "VkDisplayModeParametersKHR.h"
#include "VkDisplayModePropertiesKHR.h"
#include "VkDisplayModeProperties2KHR.h"
#include "VkDisplayPlanePropertiesKHR.h"
#include "VkDisplayPlaneProperties2KHR.h"
#include "VkDisplayPropertiesKHR.h"
#include "VkDisplayProperties2KHR.h"
#include "VkSurfaceFormatKHR.h"
#include "VkSurfaceFormat2KHR.h"
#include "VkSurfaceCapabilitiesKHR.h"
#include "VkSurfaceCapabilities2KHR.h"
#include "VkPhysicalDeviceSurfaceInfo2KHR.h"
#include "VkRenderPassInputAttachmentAspectCreateInfoKHR.h"
#include "VkInputAttachmentAspectReference.h"
#include "VkRenderPassInputAttachmentAspectCreateInfo.h"
#include "VkInputAttachmentAspectReferenceKHR.h"
#include "VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX.h"
#include "VkPipelineDiscardRectangleStateCreateInfoEXT.h"
#include "VkPhysicalDeviceDiscardRectanglePropertiesEXT.h"
#include "VkViewportSwizzleNV.h"
#include "VkPipelineViewportSwizzleStateCreateInfoNV.h"
#include "VkViewportWScalingNV.h"
#include "VkPipelineViewportWScalingStateCreateInfoNV.h"
#include "VkPresentTimeGOOGLE.h"
#include "VkPresentTimesInfoGOOGLE.h"
#include "VkPastPresentationTimingGOOGLE.h"
#include "VkRefreshCycleDurationGOOGLE.h"
#include "VkXYColorEXT.h"
#include "VkHdrMetadataEXT.h"
#include "VkDescriptorUpdateTemplateCreateInfoKHR.h"
#include "VkDescriptorUpdateTemplateEntry.h"
#include "VkDescriptorUpdateTemplateCreateInfo.h"
#include "VkDescriptorUpdateTemplateEntryKHR.h"
#include "VkDeviceGroupSwapchainCreateInfoKHR.h"
#include "VkDeviceGroupDeviceCreateInfoKHR.h"
#include "VkDeviceGroupDeviceCreateInfo.h"
#include "VkDeviceGroupPresentInfoKHR.h"
#include "VkAcquireNextImageInfoKHR.h"
#include "VkBindImageMemorySwapchainInfoKHR.h"
#include "VkImageSwapchainCreateInfoKHR.h"
#include "VkDeviceGroupPresentCapabilitiesKHR.h"
#include "VkDeviceGroupBindSparseInfoKHR.h"
#include "VkDeviceGroupBindSparseInfo.h"
#include "VkDeviceGroupSubmitInfoKHR.h"
#include "VkDeviceGroupSubmitInfo.h"
#include "VkDeviceGroupCommandBufferBeginInfoKHR.h"
#include "VkDeviceGroupCommandBufferBeginInfo.h"
#include "VkDeviceGroupRenderPassBeginInfoKHR.h"
#include "VkDeviceGroupRenderPassBeginInfo.h"
#include "VkBindImageMemoryDeviceGroupInfoKHR.h"
#include "VkBindImageMemoryDeviceGroupInfo.h"
#include "VkBindImageMemoryInfoKHR.h"
#include "VkBindImageMemoryInfo.h"
#include "VkBindBufferMemoryDeviceGroupInfoKHR.h"
#include "VkBindBufferMemoryDeviceGroupInfo.h"
#include "VkBindBufferMemoryInfoKHR.h"
#include "VkBindBufferMemoryInfo.h"
#include "VkMemoryAllocateFlagsInfoKHR.h"
#include "VkMemoryAllocateFlagsInfo.h"
#include "VkPhysicalDeviceGroupPropertiesKHR.h"
#include "VkPhysicalDeviceGroupProperties.h"
#include "VkSwapchainCounterCreateInfoEXT.h"
#include "VkDisplayEventInfoEXT.h"
#include "VkDeviceEventInfoEXT.h"
#include "VkDisplayPowerInfoEXT.h"
#include "VkSurfaceCapabilities2EXT.h"
#include "VkRenderPassMultiviewCreateInfoKHR.h"
#include "VkRenderPassMultiviewCreateInfo.h"
#include "VkPhysicalDeviceMultiviewPropertiesKHR.h"
#include "VkPhysicalDeviceMultiviewProperties.h"
#include "VkPhysicalDeviceMultiviewFeaturesKHR.h"
#include "VkPhysicalDeviceMultiviewFeatures.h"
#include "VkFenceGetFdInfoKHR.h"
#include "VkImportFenceFdInfoKHR.h"
#include "VkFenceGetWin32HandleInfoKHR.h"
#include "VkExportFenceWin32HandleInfoKHR.h"
#include "VkImportFenceWin32HandleInfoKHR.h"
#include "VkExportFenceCreateInfoKHR.h"
#include "VkExportFenceCreateInfo.h"
#include "VkExternalFencePropertiesKHR.h"
#include "VkExternalFenceProperties.h"
#include "VkPhysicalDeviceExternalFenceInfoKHR.h"
#include "VkPhysicalDeviceExternalFenceInfo.h"
#include "VkSemaphoreGetFdInfoKHR.h"
#include "VkImportSemaphoreFdInfoKHR.h"
#include "VkSemaphoreGetWin32HandleInfoKHR.h"
#include "VkD3D12FenceSubmitInfoKHR.h"
#include "VkExportSemaphoreWin32HandleInfoKHR.h"
#include "VkImportSemaphoreWin32HandleInfoKHR.h"
#include "VkExportSemaphoreCreateInfoKHR.h"
#include "VkExportSemaphoreCreateInfo.h"
#include "VkExternalSemaphorePropertiesKHR.h"
#include "VkExternalSemaphoreProperties.h"
#include "VkPhysicalDeviceExternalSemaphoreInfoKHR.h"
#include "VkPhysicalDeviceExternalSemaphoreInfo.h"
#include "VkWin32KeyedMutexAcquireReleaseInfoKHR.h"
#include "VkMemoryGetFdInfoKHR.h"
#include "VkMemoryFdPropertiesKHR.h"
#include "VkImportMemoryFdInfoKHR.h"
#include "VkMemoryGetWin32HandleInfoKHR.h"
#include "VkMemoryWin32HandlePropertiesKHR.h"
#include "VkExportMemoryWin32HandleInfoKHR.h"
#include "VkImportMemoryWin32HandleInfoKHR.h"
#include "VkExportMemoryAllocateInfoKHR.h"
#include "VkExportMemoryAllocateInfo.h"
#include "VkExternalMemoryBufferCreateInfoKHR.h"
#include "VkExternalMemoryBufferCreateInfo.h"
#include "VkExternalMemoryImageCreateInfoKHR.h"
#include "VkExternalMemoryImageCreateInfo.h"
#include "VkPhysicalDeviceIDPropertiesKHR.h"
#include "VkPhysicalDeviceIDProperties.h"
#include "VkExternalBufferPropertiesKHR.h"
#include "VkExternalMemoryProperties.h"
#include "VkExternalBufferProperties.h"
#include "VkPhysicalDeviceExternalBufferInfoKHR.h"
#include "VkPhysicalDeviceExternalBufferInfo.h"
#include "VkExternalImageFormatPropertiesKHR.h"
#include "VkExternalImageFormatProperties.h"
#include "VkPhysicalDeviceExternalImageFormatInfoKHR.h"
#include "VkPhysicalDeviceExternalImageFormatInfo.h"
#include "VkExternalMemoryPropertiesKHR.h"
#include "VkPhysicalDeviceVariablePointerFeaturesKHR.h"
#include "VkPhysicalDeviceVariablePointerFeatures.h"
#include "VkRectLayerKHR.h"
#include "VkPresentRegionKHR.h"
#include "VkPresentRegionsKHR.h"
#include "VkConformanceVersionKHR.h"
#include "VkPhysicalDeviceDriverPropertiesKHR.h"
#include "VkPhysicalDevicePushDescriptorPropertiesKHR.h"
#include "VkPhysicalDeviceSparseImageFormatInfo2KHR.h"
#include "VkPhysicalDeviceSparseImageFormatInfo2.h"
#include "VkSparseImageFormatProperties2KHR.h"
#include "VkSparseImageFormatProperties2.h"
#include "VkPhysicalDeviceMemoryProperties2KHR.h"
#include "VkMemoryHeap.h"
#include "VkMemoryType.h"
#include "VkPhysicalDeviceMemoryProperties.h"
#include "VkPhysicalDeviceMemoryProperties2.h"
#include "VkQueueFamilyProperties2KHR.h"
#include "VkQueueFamilyProperties.h"
#include "VkQueueFamilyProperties2.h"
#include "VkPhysicalDeviceImageFormatInfo2KHR.h"
#include "VkPhysicalDeviceImageFormatInfo2.h"
#include "VkImageFormatProperties2KHR.h"
#include "VkImageFormatProperties.h"
#include "VkImageFormatProperties2.h"
#include "VkFormatProperties2KHR.h"
#include "VkFormatProperties.h"
#include "VkFormatProperties2.h"
#include "VkPhysicalDeviceProperties2KHR.h"
#include "VkPhysicalDeviceSparseProperties.h"
#include "VkPhysicalDeviceLimits.h"
#include "VkPhysicalDeviceProperties.h"
#include "VkPhysicalDeviceProperties2.h"
#include "VkPhysicalDeviceFeatures2KHR.h"
#include "VkPhysicalDeviceFeatures.h"
#include "VkPhysicalDeviceFeatures2.h"
#include "VkObjectTablePushConstantEntryNVX.h"
#include "VkObjectTableIndexBufferEntryNVX.h"
#include "VkObjectTableVertexBufferEntryNVX.h"
#include "VkObjectTableDescriptorSetEntryNVX.h"
#include "VkObjectTablePipelineEntryNVX.h"
#include "VkObjectTableEntryNVX.h"
#include "VkObjectTableCreateInfoNVX.h"
#include "VkCmdReserveSpaceForCommandsInfoNVX.h"
#include "VkIndirectCommandsTokenNVX.h"
#include "VkCmdProcessCommandsInfoNVX.h"
#include "VkIndirectCommandsLayoutTokenNVX.h"
#include "VkIndirectCommandsLayoutCreateInfoNVX.h"
#include "VkDeviceGeneratedCommandsLimitsNVX.h"
#include "VkDeviceGeneratedCommandsFeaturesNVX.h"
#include "VkWin32KeyedMutexAcquireReleaseInfoNV.h"
#include "VkExportMemoryWin32HandleInfoNV.h"
#include "VkImportMemoryWin32HandleInfoNV.h"
#include "VkExportMemoryAllocateInfoNV.h"
#include "VkExternalMemoryImageCreateInfoNV.h"
#include "VkExternalImageFormatPropertiesNV.h"
#include "VkDedicatedAllocationMemoryAllocateInfoNV.h"
#include "VkDedicatedAllocationBufferCreateInfoNV.h"
#include "VkDedicatedAllocationImageCreateInfoNV.h"
#include "VkDebugMarkerMarkerInfoEXT.h"
#include "VkDebugMarkerObjectTagInfoEXT.h"
#include "VkDebugMarkerObjectNameInfoEXT.h"
#include "VkPipelineRasterizationStateRasterizationOrderAMD.h"
#include "VkValidationFlagsEXT.h"
#include "VkDebugReportCallbackCreateInfoEXT.h"
#include "VkPresentInfoKHR.h"
#include "VkSwapchainCreateInfoKHR.h"
#include "VkWin32SurfaceCreateInfoKHR.h"
#include "VkDisplayPresentInfoKHR.h"
#include "VkDisplaySurfaceCreateInfoKHR.h"
#include "VkDisplayModeCreateInfoKHR.h"
#include "VkSubmitInfo.h"
#include "VkDispatchIndirectCommand.h"
#include "VkDrawIndexedIndirectCommand.h"
#include "VkDrawIndirectCommand.h"
#include "VkFramebufferCreateInfo.h"
#include "VkQueryPoolCreateInfo.h"
#include "VkSemaphoreCreateInfo.h"
#include "VkFenceCreateInfo.h"
#include "VkEventCreateInfo.h"
#include "VkSubpassDependency.h"
#include "VkAttachmentReference.h"
#include "VkSubpassDescription.h"
#include "VkAttachmentDescription.h"
#include "VkRenderPassCreateInfo.h"
#include "VkClearDepthStencilValue.h"
#include "VkClearValue.h"
#include "VkClearAttachment.h"
#include "VkRenderPassBeginInfo.h"
#include "VkCommandBufferInheritanceInfo.h"
#include "VkCommandBufferBeginInfo.h"
#include "VkCommandBufferAllocateInfo.h"
#include "VkCommandPoolCreateInfo.h"
#include "VkSamplerCreateInfo.h"
#include "VkPushConstantRange.h"
#include "VkPipelineLayoutCreateInfo.h"
#include "VkPipelineCacheCreateInfo.h"
#include "VkPipelineDynamicStateCreateInfo.h"
#include "VkPipelineColorBlendAttachmentState.h"
#include "VkPipelineColorBlendStateCreateInfo.h"
#include "VkStencilOpState.h"
#include "VkPipelineDepthStencilStateCreateInfo.h"
#include "VkPipelineMultisampleStateCreateInfo.h"
#include "VkPipelineRasterizationStateCreateInfo.h"
#include "VkViewport.h"
#include "VkPipelineViewportStateCreateInfo.h"
#include "VkPipelineTessellationStateCreateInfo.h"
#include "VkPipelineInputAssemblyStateCreateInfo.h"
#include "VkVertexInputAttributeDescription.h"
#include "VkVertexInputBindingDescription.h"
#include "VkPipelineVertexInputStateCreateInfo.h"
#include "VkGraphicsPipelineCreateInfo.h"
#include "VkComputePipelineCreateInfo.h"
#include "VkDescriptorSetAllocateInfo.h"
#include "VkDescriptorPoolSize.h"
#include "VkDescriptorPoolCreateInfo.h"
#include "VkDescriptorSetLayoutBinding.h"
#include "VkDescriptorSetLayoutCreateInfo.h"
#include "VkShaderModuleCreateInfo.h"
#include "VkOffset3D.h"
#include "VkImageSubresourceLayers.h"
#include "VkImageResolve.h"
#include "VkBufferImageCopy.h"
#include "VkImageBlit.h"
#include "VkImageCopy.h"
#include "VkImageSubresource.h"
#include "VkSparseImageMemoryBind.h"
#include "VkSparseImageMemoryBindInfo.h"
#include "VkSparseMemoryBind.h"
#include "VkSparseImageOpaqueMemoryBindInfo.h"
#include "VkSparseBufferMemoryBindInfo.h"
#include "VkBindSparseInfo.h"
#include "VkBufferCopy.h"
#include "VkImageSubresourceRange.h"
#include "VkImageViewCreateInfo.h"
#include "VkImageCreateInfo.h"
#include "VkImageMemoryBarrier.h"
#include "VkBufferMemoryBarrier.h"
#include "VkMemoryBarrier.h"
#include "VkBufferViewCreateInfo.h"
#include "VkBufferCreateInfo.h"
#include "VkCopyDescriptorSet.h"
#include "VkDescriptorBufferInfo.h"
#include "VkDescriptorImageInfo.h"
#include "VkWriteDescriptorSet.h"
#include "VkMappedMemoryRange.h"
#include "VkMemoryAllocateInfo.h"
#include "VkApplicationInfo.h"
#include "VkInstanceCreateInfo.h"
#include "VkDeviceQueueCreateInfo.h"
#include "VkDeviceCreateInfo.h"
#include "VkAllocationCallbacks.h"
#include "VkLayerProperties.h"
#include "VkExtensionProperties.h"
#include "VkClearRect.h"
#include "VkBaseInStructure.h"
#include "VkBaseOutStructure.h"

*/
#endif
