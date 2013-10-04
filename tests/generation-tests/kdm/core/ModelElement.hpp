
#ifndef EMF_CPP_KDM_CORE_MODELELEMENT__HPP
#define EMF_CPP_KDM_CORE_MODELELEMENT__HPP

#include <kdm/core/fwd.hpp>
#include <kdm/core/meta.hpp>
#include <kdm/core/Element.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace core
{


class ModelElement :  public virtual ::kdm::core::Element
{
public:

	typedef ModelElement_ptr ptr_type;
	
	virtual ~ModelElement();

	typedef std::set < kdm::kdm::Stereotype_ptr > stereotype_t;
	typedef std::set < kdm::kdm::ExtendedValue_ptr > taggedValue_t;
	
	stereotype_t getStereotype() const;
	void addStereotype(kdm::kdm::Stereotype_ptr stereotype_);
	void addAllStereotype(const stereotype_t& stereotype_);
	taggedValue_t getTaggedValue() const;
	void addTaggedValue(kdm::kdm::ExtendedValue_ptr taggedValue_);
	void addAllTaggedValue(const taggedValue_t& taggedValue_);
	

	/*PROTECTED REGION ID(kdm::core::ModelElement public) START*/
	/*PROTECTED REGION END*/
		
protected:
	ModelElement();

	friend class CorePackage;

	std::set < kdm::kdm::Stereotype_ptr > m_stereotype;
	std::set < std::unique_ptr < kdm::kdm::ExtendedValue > > m_taggedValue;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::core::ModelElement protected) START*/
	/*PROTECTED REGION END*/
};

} // core
} // kdm


#endif // EMF_CPP_KDM_CORE_MODELELEMENT__HPP
