
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


class ExtensionFamily :  public virtual ::kdm::core::Element
{
public:

	typedef ExtensionFamily_ptr ptr_type;
	
	ExtensionFamily();
	virtual ~ExtensionFamily();

	typedef std::set < kdm::kdm::Stereotype_ptr > stereotype_t;
	typedef ::kdm::core::String name_t;
	
	stereotype_t getStereotype() const;
	void addStereotype(kdm::kdm::Stereotype_ptr stereotype_);
	void addAllStereotype(const stereotype_t& stereotype_);
	void setName(name_t _name);
	name_t getName() const;
	

	/*PROTECTED REGION ID(kdm::kdm::ExtensionFamily public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class KdmPackage;

	std::set < std::unique_ptr < kdm::kdm::Stereotype > > m_stereotype;
	name_t m_name;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::kdm::ExtensionFamily protected) START*/
	/*PROTECTED REGION END*/
};

} // kdm
} // kdm


#endif // EMF_CPP_KDM_KDM_EXTENSIONFAMILY__HPP
