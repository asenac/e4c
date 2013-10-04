
#ifndef EMF_CPP_KDM_KDM_TAGGEDREF__HPP
#define EMF_CPP_KDM_KDM_TAGGEDREF__HPP

#include <kdm/kdm/fwd.hpp>
#include <kdm/kdm/meta.hpp>
#include <kdm/kdm/ExtendedValue.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace kdm
{


class TaggedRef :  public virtual ::kdm::kdm::ExtendedValue
{
public:

	typedef TaggedRef_ptr ptr_type;
	
	TaggedRef();
	virtual ~TaggedRef();

	typedef kdm::core::ModelElement_ptr reference_t;
	
	reference_t getReference() const;
	void setReference(reference_t reference_);
	

	/*PROTECTED REGION ID(kdm::kdm::TaggedRef public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class KdmPackage;

	kdm::core::ModelElement_ptr m_reference;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::kdm::TaggedRef protected) START*/
	/*PROTECTED REGION END*/
};

} // kdm
} // kdm


#endif // EMF_CPP_KDM_KDM_TAGGEDREF__HPP
