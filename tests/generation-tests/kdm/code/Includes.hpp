
#ifndef EMF_CPP_KDM_CODE_INCLUDES__HPP
#define EMF_CPP_KDM_CODE_INCLUDES__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/AbstractCodeRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


class Includes :  public virtual ::kdm::code::AbstractCodeRelationship
{
public:

	typedef Includes_ptr ptr_type;
	
	Includes();
	virtual ~Includes();

	typedef kdm::code::AbstractCodeElement_ptr to_t;
	typedef kdm::code::PreprocessorDirective_ptr from_t;
	
	to_t getTo() const;
	void setTo(to_t to_);
	from_t getFrom() const;
	void setFrom(from_t from_);
	

	/*PROTECTED REGION ID(kdm::code::Includes public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class CodePackage;

	kdm::code::AbstractCodeElement_ptr m_to;
	kdm::code::PreprocessorDirective_ptr m_from;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::code::Includes protected) START*/
	/*PROTECTED REGION END*/
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_INCLUDES__HPP
