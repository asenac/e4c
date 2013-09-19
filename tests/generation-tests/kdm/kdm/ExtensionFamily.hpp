
#ifndef EMF_CPP_KDM_KDM_EXTENSIONFAMILY__HPP
#define EMF_CPP_KDM_KDM_EXTENSIONFAMILY__HPP

#include <kdm/kdm/fwd.hpp>
#include <kdm/kdm/meta.hpp>
#include <kdm/core/Element.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace kdm
{


// kdm::kdm::ExtensionFamily
class ExtensionFamily :  public virtual ::kdm::core::Element
{
public:

	typedef ExtensionFamily_ptr ptr_type;
	
	ExtensionFamily();
	virtual ~ExtensionFamily();

	typedef boost::ptr_set < kdm::kdm::Stereotype > stereotype_t;
	typedef int name_t;

	
	// TODO
	void setName(name_t _name);
	name_t getName() const;

	
protected:

	stereotype_t m_stereotype;
	name_t m_name;

};

} // kdm
} // kdm


#endif // EMF_CPP_KDM_KDM_EXTENSIONFAMILY__HPP
