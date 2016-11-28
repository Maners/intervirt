
#include "Msvm_ProcessorSettingData.h"

namespace Drivers {
namespace Hyperv {
namespace Wmi {
namespace Classes {
namespace V1 {


SER_START_ITEMS(Msvm_ProcessorSettingData_Data)
    SER_NS_STR(MSVM_PROCESSORSETTINGDATA_RESOURCE_URI, "Caption", 1),
    SER_NS_STR(MSVM_PROCESSORSETTINGDATA_RESOURCE_URI, "Description", 1),
    SER_NS_STR(MSVM_PROCESSORSETTINGDATA_RESOURCE_URI, "InstanceID", 1),
    SER_NS_STR(MSVM_PROCESSORSETTINGDATA_RESOURCE_URI, "ElementName", 1),
    SER_NS_UINT16(MSVM_PROCESSORSETTINGDATA_RESOURCE_URI, "ResourceType", 1),
    SER_NS_STR(MSVM_PROCESSORSETTINGDATA_RESOURCE_URI, "OtherResourceType", 1),
    SER_NS_STR(MSVM_PROCESSORSETTINGDATA_RESOURCE_URI, "ResourceSubType", 1),
    SER_NS_STR(MSVM_PROCESSORSETTINGDATA_RESOURCE_URI, "PoolID", 1),
    SER_NS_UINT16(MSVM_PROCESSORSETTINGDATA_RESOURCE_URI, "ConsumerVisibility", 1),
    SER_NS_DYN_ARRAY(MSVM_PROCESSORSETTINGDATA_RESOURCE_URI, "HostResource", 0, 0, string),
    SER_NS_STR(MSVM_PROCESSORSETTINGDATA_RESOURCE_URI, "AllocationUnits", 1),
    SER_NS_UINT64(MSVM_PROCESSORSETTINGDATA_RESOURCE_URI, "VirtualQuantity", 1),
    SER_NS_UINT64(MSVM_PROCESSORSETTINGDATA_RESOURCE_URI, "Reservation", 1),
    SER_NS_UINT64(MSVM_PROCESSORSETTINGDATA_RESOURCE_URI, "Limit", 1),
    SER_NS_UINT32(MSVM_PROCESSORSETTINGDATA_RESOURCE_URI, "Weight", 1),
    SER_NS_BOOL(MSVM_PROCESSORSETTINGDATA_RESOURCE_URI, "AutomaticAllocation", 1),
    SER_NS_BOOL(MSVM_PROCESSORSETTINGDATA_RESOURCE_URI, "AutomaticDeallocation", 1),
    SER_NS_STR(MSVM_PROCESSORSETTINGDATA_RESOURCE_URI, "Parent", 1),
    SER_NS_DYN_ARRAY(MSVM_PROCESSORSETTINGDATA_RESOURCE_URI, "Connection", 0, 0, string),
    SER_NS_STR(MSVM_PROCESSORSETTINGDATA_RESOURCE_URI, "Address", 1),
    SER_NS_UINT16(MSVM_PROCESSORSETTINGDATA_RESOURCE_URI, "MappingBehavior", 1),
    SER_NS_BOOL(MSVM_PROCESSORSETTINGDATA_RESOURCE_URI, "IsVirtualized", 1),
    SER_NS_STR(MSVM_PROCESSORSETTINGDATA_RESOURCE_URI, "DeviceID", 1),
    SER_NS_STR(MSVM_PROCESSORSETTINGDATA_RESOURCE_URI, "DeviceIDFormat", 1),
    SER_NS_UINT16(MSVM_PROCESSORSETTINGDATA_RESOURCE_URI, "ProcessorsPerSocket", 1),
    SER_NS_UINT16(MSVM_PROCESSORSETTINGDATA_RESOURCE_URI, "SocketCount", 1),
    SER_NS_BOOL(MSVM_PROCESSORSETTINGDATA_RESOURCE_URI, "ThreadsEnabled", 1),
    SER_NS_BOOL(MSVM_PROCESSORSETTINGDATA_RESOURCE_URI, "LimitCPUID", 1),
    SER_NS_BOOL(MSVM_PROCESSORSETTINGDATA_RESOURCE_URI, "LimitProcessorFeatures", 1),

SER_END_ITEMS(Msvm_ProcessorSettingData_Data);

MsvmProcessorSettingData::MsvmProcessorSettingData()
        :AbstractWmiObject(
            MSVM_PROCESSORSETTINGDATA_WQL_SELECT,
            MSVM_PROCESSORSETTINGDATA_CLASSNAME,
            "http://schemas.microsoft.com/wbem/wsman/1/wmi/root/virtualization/*",
            MSVM_PROCESSORSETTINGDATA_RESOURCE_URI,
            Msvm_ProcessorSettingData_Data_TypeInfo
        ) {}

}
}
}
}
}
