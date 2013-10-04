
#ifndef EMF_CPP_KDM_CONCEPTUAL_CONCEPTUALFLOW__HPP
#define EMF_CPP_KDM_CONCEPTUAL_CONCEPTUALFLOW__HPP

#include <kdm/conceptual/fwd.hpp>
#include <kdm/conceptual/meta.hpp>
#include <kdm/conceptual/AbstractConceptualRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace conceptual
{


class ConceptualFlow :  public virtual ::kdm::conceptual::AbstractConceptualRelationship
{
public:

	typedef ConceptualFlow_ptr ptr_type;
	
	ConceptualFlow();
	virtual ~ConceptualFlow();

	typedef kdm::conceptual::ConceptualContainer_ptr to_t;
	typedef kdm::conceptual::ConceptualContainer_ptr from_t;
	
	to_t getTo() const;
	void setTo(to_t to_);
	from_t getFrom() const;
	void setFrom(from_t from_);
	

	/*PROTECTED REGION ID(kdm::conceptual::ConceptualFlow public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class ConceptualPackage;

	kdm::conceptual::ConceptualContainer_ptr m_to;
	kdm::conceptual::ConceptualContainer_ptr m_from;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::conceptual::ConceptualFlow protected) START*/
	/*PROTECTED REGION END*/
};

} // conceptual
} // kdm


#endif // EMF_CPP_KDM_CONCEPTUAL_CONCEPTUALFLOW__HPP
