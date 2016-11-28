
#include "Msvm_VirtualSwitch.h"

namespace Drivers {
namespace Hyperv {
namespace Wmi {
namespace Classes {
namespace V1 {


SER_START_ITEMS(Msvm_VirtualSwitch_Data)
    SER_NS_STR(MSVM_VIRTUALSWITCH_RESOURCE_URI, "Caption", 1),
    SER_NS_STR(MSVM_VIRTUALSWITCH_RESOURCE_URI, "Description", 1),
    SER_NS_STR(MSVM_VIRTUALSWITCH_RESOURCE_URI, "ElementName", 1),
    SER_NS_STR(MSVM_VIRTUALSWITCH_RESOURCE_URI, "InstallDate", 1),
    SER_NS_DYN_ARRAY(MSVM_VIRTUALSWITCH_RESOURCE_URI, "OperationalStatus", 0, 0, uint16),
    SER_NS_DYN_ARRAY(MSVM_VIRTUALSWITCH_RESOURCE_URI, "StatusDescriptions", 0, 0, string),
    SER_NS_STR(MSVM_VIRTUALSWITCH_RESOURCE_URI, "Status", 1),
    SER_NS_UINT16(MSVM_VIRTUALSWITCH_RESOURCE_URI, "HealthState", 1),
    SER_NS_UINT16(MSVM_VIRTUALSWITCH_RESOURCE_URI, "EnabledState", 1),
    SER_NS_STR(MSVM_VIRTUALSWITCH_RESOURCE_URI, "OtherEnabledState", 1),
    SER_NS_UINT16(MSVM_VIRTUALSWITCH_RESOURCE_URI, "RequestedState", 1),
    SER_NS_UINT16(MSVM_VIRTUALSWITCH_RESOURCE_URI, "EnabledDefault", 1),
    SER_NS_STR(MSVM_VIRTUALSWITCH_RESOURCE_URI, "TimeOfLastStateChange", 1),
    SER_NS_STR(MSVM_VIRTUALSWITCH_RESOURCE_URI, "CreationClassName", 1),
    SER_NS_STR(MSVM_VIRTUALSWITCH_RESOURCE_URI, "Name", 1),
    SER_NS_STR(MSVM_VIRTUALSWITCH_RESOURCE_URI, "PrimaryOwnerContact", 1),
    SER_NS_STR(MSVM_VIRTUALSWITCH_RESOURCE_URI, "PrimaryOwnerName", 1),
    SER_NS_DYN_ARRAY(MSVM_VIRTUALSWITCH_RESOURCE_URI, "Roles", 0, 0, string),
    SER_NS_STR(MSVM_VIRTUALSWITCH_RESOURCE_URI, "NameFormat", 1),
    SER_NS_DYN_ARRAY(MSVM_VIRTUALSWITCH_RESOURCE_URI, "OtherIdentifyingInfo", 0, 0, string),
    SER_NS_DYN_ARRAY(MSVM_VIRTUALSWITCH_RESOURCE_URI, "IdentifyingDescriptions", 0, 0, string),
    SER_NS_DYN_ARRAY(MSVM_VIRTUALSWITCH_RESOURCE_URI, "Dedicated", 0, 0, uint16),
    SER_NS_DYN_ARRAY(MSVM_VIRTUALSWITCH_RESOURCE_URI, "OtherDedicatedDescriptions", 0, 0, string),
    SER_NS_UINT16(MSVM_VIRTUALSWITCH_RESOURCE_URI, "ResetCapability", 1),
    SER_NS_DYN_ARRAY(MSVM_VIRTUALSWITCH_RESOURCE_URI, "PowerManagementCapabilities", 0, 0, uint16),
    SER_NS_STR(MSVM_VIRTUALSWITCH_RESOURCE_URI, "ScopeOfResidence", 1),
    SER_NS_UINT32(MSVM_VIRTUALSWITCH_RESOURCE_URI, "NumLearnableAddresses", 1),
    SER_NS_UINT32(MSVM_VIRTUALSWITCH_RESOURCE_URI, "MaxVMQOffloads", 1),
    SER_NS_UINT32(MSVM_VIRTUALSWITCH_RESOURCE_URI, "MaxChimneyOffloads", 1),

SER_END_ITEMS(Msvm_VirtualSwitch_Data);

MsvmVirtualSwitch::MsvmVirtualSwitch()
        :AbstractWmiObject(
            MSVM_VIRTUALSWITCH_WQL_SELECT,
            MSVM_VIRTUALSWITCH_CLASSNAME,
            "http://schemas.microsoft.com/wbem/wsman/1/wmi/root/virtualization/*",
            MSVM_VIRTUALSWITCH_RESOURCE_URI,
            Msvm_VirtualSwitch_Data_TypeInfo
        ) {}

}
}
}
}
}
