
#ifndef EMF_CPP_KDM_PLATFORM_ABSTRACTPLATFORMELEMENT__HPP
#define EMF_CPP_KDM_PLATFORM_ABSTRACTPLATFORMELEMENT__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/core/KDMEntity.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace platform
{


class AbstractPlatformElement :  public virtual ::kdm::core::KDMEntity
{
public:

    typedef AbstractPlatformElement_ptr ptr_type;

    virtual ~AbstractPlatformElement();

    typedef std::set < kdm::source::SourceRef_ptr > source_t;
    typedef std::set < kdm::platform::AbstractPlatformRelationship_ptr > relation_t;
    typedef std::vector < kdm::action::ActionElement_ptr > abstraction_t;
    typedef std::set < kdm::code::AbstractCodeElement_ptr > implementation_t;

    source_t getSource() const;
    void addSource(kdm::source::SourceRef_ptr source_);
    void addAllSource(const source_t& source_);
    relation_t getRelation() const;
    void addRelation(kdm::platform::AbstractPlatformRelationship_ptr relation_);
    void addAllRelation(const relation_t& relation_);
    abstraction_t getAbstraction() const;
    void addAbstraction(kdm::action::ActionElement_ptr abstraction_);
    void addAllAbstraction(const abstraction_t& abstraction_);
    implementation_t getImplementation() const;
    void addImplementation(kdm::code::AbstractCodeElement_ptr implementation_);
    void addAllImplementation(const implementation_t& implementation_);


    /*PROTECTED REGION ID(kdm::platform::AbstractPlatformElement public) START*/
    /*PROTECTED REGION END*/

protected:
    AbstractPlatformElement();

    friend class PlatformPackage;

    std::set < std::unique_ptr < kdm::source::SourceRef > > m_source;
    std::set < std::unique_ptr < kdm::platform::AbstractPlatformRelationship > > m_relation;
    std::vector < std::unique_ptr < kdm::action::ActionElement > > m_abstraction;
    std::set < kdm::code::AbstractCodeElement_ptr > m_implementation;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::platform::AbstractPlatformElement protected) START*/
    /*PROTECTED REGION END*/
};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_ABSTRACTPLATFORMELEMENT__HPP
