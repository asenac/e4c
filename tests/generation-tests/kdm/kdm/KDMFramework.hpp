
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


// kdm::kdm::KDMFramework
class KDMFramework :  public virtual ::kdm::core::ModelElement
{
public:

	typedef KDMFramework_ptr ptr_type;
	
	virtual ~KDMFramework();

	typedef std::set < kdm::kdm::Audit_ptr > audit_t;
	typedef std::set < kdm::kdm::ExtensionFamily_ptr > extensionFamily_t;
	typedef ::kdm::core::String name_t;

	
	audit_t getAudit() const;
	extensionFamily_t getExtensionFamily() const;
	void setName(name_t _name);
	name_t getName() const;


	std::set < std::unique_ptr < kdm::kdm::Audit > > m_audit;
	std::set < std::unique_ptr < kdm::kdm::ExtensionFamily > > m_extensionFamily;
	name_t m_name;

		
protected:
	KDMFramework();

};

} // kdm
} // kdm


#endif // EMF_CPP_KDM_KDM_KDMFRAMEWORK__HPP
