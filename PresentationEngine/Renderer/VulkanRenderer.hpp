//
// Created by michal on 03.03.2020.
//

#ifndef CHARTCORE_VULKANRENDERER_HPP
#define CHARTCORE_VULKANRENDERER_HPP

#include <vulkan/vulkan.h>
#include <vector>
#include "OperatingSystem.hpp"

namespace PresentationEngine {

    // Vulkan Queue's parameters container class
    struct QueueParameters {
        VkQueue  Handle;
        uint32_t FamilyIndex;

        QueueParameters() : Handle(VK_NULL_HANDLE), FamilyIndex(0) {
        }
    };

    // Vulkan Image's parameters container class
    struct ImageParameters {
        VkImage        Handle;
        VkImageView    View;
        VkSampler      Sampler;
        VkDeviceMemory Memory;

        ImageParameters() : Handle(VK_NULL_HANDLE), View(VK_NULL_HANDLE), Sampler(VK_NULL_HANDLE), Memory(VK_NULL_HANDLE) {
        }
    };

    // Vulkan Buffer's parameters container class
    struct BufferParameters {
        VkBuffer       Handle;
        VkDeviceMemory Memory;
        uint32_t       Size;

        BufferParameters() : Handle( VK_NULL_HANDLE ), Memory( VK_NULL_HANDLE ), Size(0) {
        }
    };

    // Container class for descriptor related resources
    struct DescriptorSetParameters {
        VkDescriptorPool      Pool;
        VkDescriptorSetLayout Layout;
        VkDescriptorSet       Handle;

        DescriptorSetParameters() : Pool(VK_NULL_HANDLE), Layout(VK_NULL_HANDLE), Handle(VK_NULL_HANDLE) {
        }
    };

    // Vulkan SwapChain's parameters container class
    struct SwapChainParameters {
        VkSwapchainKHR               Handle;
        VkFormat                     Format;
        std::vector<ImageParameters> Images;
        VkExtent2D                   Extent;

        SwapChainParameters() : Handle(VK_NULL_HANDLE), Format( VK_FORMAT_UNDEFINED ), Images(), Extent() {
        }
    };

    // General Vulkan parameters' container class
    struct VulkanRendererParameters {
        VkInstance          Instance;
        VkPhysicalDevice    PhysicalDevice;
        VkDevice            Device;
        QueueParameters     GraphicsQueue;
        QueueParameters     PresentQueue;
        VkSurfaceKHR        PresentationSurface;
        SwapChainParameters SwapChain;

        VulkanRendererParameters() :
                Instance( VK_NULL_HANDLE ),
                PhysicalDevice( VK_NULL_HANDLE ),
                Device( VK_NULL_HANDLE ),
                GraphicsQueue(),
                PresentQueue(),
                PresentationSurface( VK_NULL_HANDLE ),
                SwapChain() {
        }
    };

    class VulkanRenderer : public OS::ProjectBase {
    public:
        VulkanRenderer();
        virtual ~VulkanRenderer();

        bool              PrepareVulkan(OS::WindowParameters parameters);
        virtual bool      OnWindowSizeChanged() final override;

        VkPhysicalDevice              GetPhysicalDevice() const;
        VkDevice                      GetDevice() const;

        const QueueParameters         GetGraphicsQueue() const;
        const QueueParameters         GetPresentQueue() const;

        const SwapChainParameters&    GetSwapChain() const;

    private:
        OS::LibraryHandle       VulkanLibrary;
        OS::WindowParameters    Window;
        VulkanRendererParameters  Vulkan;

        bool                          LoadVulkanLibrary();
        bool                          LoadExportedEntryPoints();
        bool                          LoadGlobalLevelEntryPoints();
        bool                          CreateInstance();
        bool                          LoadInstanceLevelEntryPoints();
        bool                          CreatePresentationSurface();
        bool                          CreateDevice();
        bool                          CheckPhysicalDeviceProperties( VkPhysicalDevice physical_device, uint32_t &graphics_queue_family_index, uint32_t &present_queue_family_index );
        bool                          LoadDeviceLevelEntryPoints();
        bool                          GetDeviceQueue();
        bool                          CreateSwapChain();
        bool                          CreateSwapChainImageViews();
        virtual bool                  ChildOnWindowSizeChanged() = 0;
        virtual void                  ChildClear() = 0;

        bool                          CheckExtensionAvailability( const char *extension_name, const std::vector<VkExtensionProperties> &available_extensions );
        uint32_t                      GetSwapChainNumImages( VkSurfaceCapabilitiesKHR &surface_capabilities );
        VkSurfaceFormatKHR            GetSwapChainFormat( std::vector<VkSurfaceFormatKHR> &surface_formats );
        VkExtent2D                    GetSwapChainExtent( VkSurfaceCapabilitiesKHR &surface_capabilities );
        VkImageUsageFlags             GetSwapChainUsageFlags( VkSurfaceCapabilitiesKHR &surface_capabilities );
        VkSurfaceTransformFlagBitsKHR GetSwapChainTransform( VkSurfaceCapabilitiesKHR &surface_capabilities );
        VkPresentModeKHR              GetSwapChainPresentMode( std::vector<VkPresentModeKHR> &present_modes );
    };
}




#endif //CHARTCORE_VULKANRENDERER_HPP
