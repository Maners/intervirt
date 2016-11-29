
#include "Msvm_VirtualSystemSettingData.h"

namespace Drivers {
namespace Hyperv {
namespace Wmi {
namespace Classes {
namespace V2 {


SER_START_ITEMS(Msvm_VirtualSystemSettingData_Data)
    SER_NS_STR(V2_MSVM_VIRTUALSYSTEMSETTINGDATA_RESOURCE_URI, "InstanceID", 1),
    SER_NS_STR(V2_MSVM_VIRTUALSYSTEMSETTINGDATA_RESOURCE_URI, "Caption", 1),
    SER_NS_STR(V2_MSVM_VIRTUALSYSTEMSETTINGDATA_RESOURCE_URI, "Description", 1),
    SER_NS_STR(V2_MSVM_VIRTUALSYSTEMSETTINGDATA_RESOURCE_URI, "ElementName", 1),
    SER_NS_STR(V2_MSVM_VIRTUALSYSTEMSETTINGDATA_RESOURCE_URI, "VirtualSystemIdentifier", 1),
    SER_NS_STR(V2_MSVM_VIRTUALSYSTEMSETTINGDATA_RESOURCE_URI, "VirtualSystemType", 1),
    SER_NS_DYN_ARRAY(V2_MSVM_VIRTUALSYSTEMSETTINGDATA_RESOURCE_URI, "Notes", 0, 0, string),
    SER_NS_STR(V2_MSVM_VIRTUALSYSTEMSETTINGDATA_RESOURCE_URI, "CreationTime", 1),
    SER_NS_STR(V2_MSVM_VIRTUALSYSTEMSETTINGDATA_RESOURCE_URI, "ConfigurationID", 1),
    SER_NS_STR(V2_MSVM_VIRTUALSYSTEMSETTINGDATA_RESOURCE_URI, "ConfigurationDataRoot", 1),
    SER_NS_STR(V2_MSVM_VIRTUALSYSTEMSETTINGDATA_RESOURCE_URI, "ConfigurationFile", 1),
    SER_NS_STR(V2_MSVM_VIRTUALSYSTEMSETTINGDATA_RESOURCE_URI, "SnapshotDataRoot", 1),
    SER_NS_STR(V2_MSVM_VIRTUALSYSTEMSETTINGDATA_RESOURCE_URI, "SuspendDataRoot", 1),
    SER_NS_STR(V2_MSVM_VIRTUALSYSTEMSETTINGDATA_RESOURCE_URI, "SwapFileDataRoot", 1),
    SER_NS_STR(V2_MSVM_VIRTUALSYSTEMSETTINGDATA_RESOURCE_URI, "LogDataRoot", 1),
    SER_NS_UINT16(V2_MSVM_VIRTUALSYSTEMSETTINGDATA_RESOURCE_URI, "AutomaticStartupAction", 1),
    SER_NS_STR(V2_MSVM_VIRTUALSYSTEMSETTINGDATA_RESOURCE_URI, "AutomaticStartupActionDelay", 1),
    SER_NS_UINT16(V2_MSVM_VIRTUALSYSTEMSETTINGDATA_RESOURCE_URI, "AutomaticStartupActionSequenceNumber", 1),
    SER_NS_UINT16(V2_MSVM_VIRTUALSYSTEMSETTINGDATA_RESOURCE_URI, "AutomaticShutdownAction", 1),
    SER_NS_UINT16(V2_MSVM_VIRTUALSYSTEMSETTINGDATA_RESOURCE_URI, "AutomaticRecoveryAction", 1),
    SER_NS_STR(V2_MSVM_VIRTUALSYSTEMSETTINGDATA_RESOURCE_URI, "RecoveryFile", 1),
    SER_NS_STR(V2_MSVM_VIRTUALSYSTEMSETTINGDATA_RESOURCE_URI, "BIOSGUID", 1),
    SER_NS_STR(V2_MSVM_VIRTUALSYSTEMSETTINGDATA_RESOURCE_URI, "BIOSSerialNumber", 1),
    SER_NS_STR(V2_MSVM_VIRTUALSYSTEMSETTINGDATA_RESOURCE_URI, "BaseBoardSerialNumber", 1),
    SER_NS_STR(V2_MSVM_VIRTUALSYSTEMSETTINGDATA_RESOURCE_URI, "ChassisSerialNumber", 1),
    SER_NS_STR(V2_MSVM_VIRTUALSYSTEMSETTINGDATA_RESOURCE_URI, "ChassisAssetTag", 1),
    SER_NS_BOOL(V2_MSVM_VIRTUALSYSTEMSETTINGDATA_RESOURCE_URI, "BIOSNumLock", 1),
    SER_NS_DYN_ARRAY(V2_MSVM_VIRTUALSYSTEMSETTINGDATA_RESOURCE_URI, "BootOrder", 0, 0, uint16),
    SER_NS_STR(V2_MSVM_VIRTUALSYSTEMSETTINGDATA_RESOURCE_URI, "Parent", 1),
    SER_NS_BOOL(V2_MSVM_VIRTUALSYSTEMSETTINGDATA_RESOURCE_URI, "IsSaved", 1),
    SER_NS_STR(V2_MSVM_VIRTUALSYSTEMSETTINGDATA_RESOURCE_URI, "AdditionalRecoveryInformation", 1),
    SER_NS_BOOL(V2_MSVM_VIRTUALSYSTEMSETTINGDATA_RESOURCE_URI, "AllowFullSCSICommandSet", 1),
    SER_NS_UINT32(V2_MSVM_VIRTUALSYSTEMSETTINGDATA_RESOURCE_URI, "DebugChannelId", 1),
    SER_NS_UINT16(V2_MSVM_VIRTUALSYSTEMSETTINGDATA_RESOURCE_URI, "DebugPortEnabled", 1),
    SER_NS_UINT32(V2_MSVM_VIRTUALSYSTEMSETTINGDATA_RESOURCE_URI, "DebugPort", 1),
    SER_NS_STR(V2_MSVM_VIRTUALSYSTEMSETTINGDATA_RESOURCE_URI, "Version", 1),
    SER_NS_BOOL(V2_MSVM_VIRTUALSYSTEMSETTINGDATA_RESOURCE_URI, "IncrementalBackupEnabled", 1),
    SER_NS_BOOL(V2_MSVM_VIRTUALSYSTEMSETTINGDATA_RESOURCE_URI, "VirtualNumaEnabled", 1),
    SER_NS_BOOL(V2_MSVM_VIRTUALSYSTEMSETTINGDATA_RESOURCE_URI, "AllowReducedFcRedundancy", 1),
    SER_NS_STR(V2_MSVM_VIRTUALSYSTEMSETTINGDATA_RESOURCE_URI, "VirtualSystemSubType", 1),
    SER_NS_DYN_ARRAY(V2_MSVM_VIRTUALSYSTEMSETTINGDATA_RESOURCE_URI, "BootSourceOrder", 0, 0, string),
    SER_NS_BOOL(V2_MSVM_VIRTUALSYSTEMSETTINGDATA_RESOURCE_URI, "PauseAfterBootFailure", 1),
    SER_NS_UINT16(V2_MSVM_VIRTUALSYSTEMSETTINGDATA_RESOURCE_URI, "NetworkBootPreferredProtocol", 1),
    SER_NS_BOOL(V2_MSVM_VIRTUALSYSTEMSETTINGDATA_RESOURCE_URI, "SecureBootEnabled", 1),
    SER_NS_UINT64(V2_MSVM_VIRTUALSYSTEMSETTINGDATA_RESOURCE_URI, "LowMmioGapSize", 1),

SER_END_ITEMS(Msvm_VirtualSystemSettingData_Data);

MsvmVirtualSystemSettingData::MsvmVirtualSystemSettingData()
        :AbstractWmiObject(
            V2_MSVM_VIRTUALSYSTEMSETTINGDATA_WQL_SELECT,
            V2_MSVM_VIRTUALSYSTEMSETTINGDATA_CLASSNAME,
            "http://schemas.microsoft.com/wbem/wsman/1/wmi/root/virtualization/v2/*",
            V2_MSVM_VIRTUALSYSTEMSETTINGDATA_RESOURCE_URI,
            Msvm_VirtualSystemSettingData_Data_TypeInfo
        ) {}

}
}
}
}
}
