

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from HelloWorld.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef HelloWorld_1436885505_hpp
#define HelloWorld_1436885505_hpp

#include <iosfwd>
#include "HelloWorldImpl.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport __declspec(dllexport)
#endif

#include "dds/domain/DomainParticipant.hpp"
#include "dds/topic/TopicTraits.hpp"
#include "dds/core/SafeEnumeration.hpp"
#include "dds/core/String.hpp"
#include "dds/core/array.hpp"
#include "dds/core/vector.hpp"
#include "dds/core/Optional.hpp"
#include "dds/core/xtypes/DynamicType.hpp"
#include "dds/core/xtypes/StructType.hpp"
#include "dds/core/xtypes/UnionType.hpp"
#include "dds/core/xtypes/EnumType.hpp"
#include "dds/core/xtypes/AliasType.hpp"
#include "rti/core/array.hpp"
#include "rti/util/StreamFlagSaver.hpp"
#include "rti/domain/PluginSupport.hpp"
#include "rti/core/LongDouble.hpp"
#include "rti/core/Pointer.hpp"
#include "rti/topic/TopicTraits.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

class NDDSUSERDllExport HelloWorld {

  public:
    HelloWorld();
    explicit HelloWorld(
        const dds::core::string& msg);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    HelloWorld (HelloWorld&& other_) = default;
    HelloWorld& operator=(HelloWorld&&  other_) = default;
    HelloWorld& operator=(const HelloWorld&) = default;
    HelloWorld(const HelloWorld&) = default;
    #else
    HelloWorld(HelloWorld&& other_) OMG_NOEXCEPT;  
    HelloWorld& operator=(HelloWorld&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    dds::core::string& msg() OMG_NOEXCEPT; 
    const dds::core::string& msg() const OMG_NOEXCEPT;
    void msg(const dds::core::string& value);

    bool operator == (const HelloWorld& other_) const;
    bool operator != (const HelloWorld& other_) const;

    void swap(HelloWorld& other_) OMG_NOEXCEPT ;

  private:

    dds::core::string m_msg_;

};

inline void swap(HelloWorld& a, HelloWorld& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const HelloWorld& sample);

namespace dds { 
    namespace topic {

        template<>
        struct topic_type_name<HelloWorld> {
            NDDSUSERDllExport static std::string value() {
                return "HelloWorld";
            }
        };

        template<>
        struct is_topic_type<HelloWorld> : public dds::core::true_type {};

        template<>
        struct topic_type_support<HelloWorld> {

            NDDSUSERDllExport static void initialize_sample(HelloWorld& sample);

            NDDSUSERDllExport static void register_type(
                dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, const HelloWorld& sample);

            NDDSUSERDllExport static void from_cdr_buffer(HelloWorld& sample, const std::vector<char>& buffer);
        };

    }
}

namespace rti { 
    namespace topic {
        template<>
        struct dynamic_type<HelloWorld> {
            typedef dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const dds::core::xtypes::StructType& get();
        };

        template<>
        struct impl_type<HelloWorld> {
            typedef HelloWorld_c type;
        };

    }
}

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif // HelloWorld_1436885505_hpp

