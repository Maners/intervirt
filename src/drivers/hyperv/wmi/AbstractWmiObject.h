#ifndef ABSTRACTWMIOBJECT_H
#define ABSTRACTWMIOBJECT_H

#include <common/util.h>
#include <openwsman/wsman-api.h>

namespace Drivers {
namespace Hyperv {
namespace Wmi {

extern XmlSerializerInfo bool_TypeInfo[];
extern XmlSerializerInfo string_TypeInfo[];
extern XmlSerializerInfo int8_TypeInfo[];
extern XmlSerializerInfo int16_TypeInfo[];
extern XmlSerializerInfo int32_TypeInfo[];
extern XmlSerializerInfo uint8_TypeInfo[];
extern XmlSerializerInfo uint16_TypeInfo[];
extern XmlSerializerInfo uint32_TypeInfo[];

class AbstractWmiObject
{
public:
  std::string getQueryString() { return this->queryString_; }
  std::string getClassName() { return this->className_; }
  std::string getNamespace() { return this->ns_; }
  std::string getResourceUri() { return this->resourceUri_; }
  XmlSerializerInfo* getSerializerInfo() { return this->serializerInfo_; }
protected:
  AbstractWmiObject(
      std::string queryString, 
      std::string className, 
      std::string ns, 
      std::string resourceUri, 
      XmlSerializerInfo *serializerInfo
  ) {
      this->queryString_ = queryString;
      this->className_ = className;
      this->ns_ = ns;
      this->resourceUri_ = resourceUri;
      this->serializerInfo_ = serializerInfo;
  }

private:
  std::string queryString_;
  std::string className_;
  std::string ns_;
  std::string resourceUri_;
  XmlSerializerInfo *serializerInfo_;
};
}
}
}

#endif /* ABSTRACTWMIOBJECT_H */
