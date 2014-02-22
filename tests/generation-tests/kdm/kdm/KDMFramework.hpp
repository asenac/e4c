
#ifndef EMF_CPP_KDM_KDM_KDMFRAMEWORK__HPP
#define EMF_CPP_KDM_KDM_KDMFRAMEWORK__HPP

#include <kdm/kdm/fwd.hpp>
#include <kdm/kdm/meta.hpp>
#include <kdm/core/ModelElement.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace kdm
{


class KDMFramework :  public virtual ::kdm::core::ModelElement
{
public:

    typedef KDMFramework_ptr ptr_type;

    virtual ~KDMFramework();

    typedef std::set < kdm::kdm::Audit_ptr > audit_t;
    typedef std::set < kdm::kdm::ExtensionFamily_ptr > extensionFamily_t;
    typedef ::kdm::core::String name_t;

    audit_t getAudit() const;
    void addAudit(kdm::kdm::Audit_ptr audit_);
    void addAllAudit(const audit_t& audit_);
    extensionFamily_t getExtensionFamily() const;
    void addExtensionFamily(kdm::kdm::ExtensionFamily_ptr extensionFamily_);
    void addAllExtensionFamily(const extensionFamily_t& extensionFamily_);
    void setName(name_t _name);
    name_t getName() const;


    /*PROTECTED REGION ID(kdm::kdm::KDMFramework public) START*/
    /*PROTECTED REGION END*/

protected:
    KDMFramework();

    friend class KdmPackage;

    std::set < std::unique_ptr < kdm::kdm::Audit > > m_audit;
    std::set < std::unique_ptr < kdm::kdm::ExtensionFamily > > m_extensionFamily;
    name_t m_name;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::kdm::KDMFramework protected) START*/
    /*PROTECTED REGION END*/
};

} // kdm
} // kdm


#endif // EMF_CPP_KDM_KDM_KDMFRAMEWORK__HPP
