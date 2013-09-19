
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

	typedef boost::ptr_set < kdm::kdm::Audit > audit_t;
	typedef boost::ptr_set < kdm::kdm::ExtensionFamily > extensionFamily_t;
	typedef int name_t;

	
	// TODO
	// TODO
	void setName(name_t _name);
	name_t getName() const;

	
protected:
	KDMFramework();

	audit_t m_audit;
	extensionFamily_t m_extensionFamily;
	name_t m_name;

};

} // kdm
} // kdm


#endif // EMF_CPP_KDM_KDM_KDMFRAMEWORK__HPP
