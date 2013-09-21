
#ifndef EMF_CPP_KDM_CODE_GENERATEDFROM__HPP
#define EMF_CPP_KDM_CODE_GENERATEDFROM__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/AbstractCodeRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


// kdm::code::GeneratedFrom
class GeneratedFrom :  public virtual ::kdm::code::AbstractCodeRelationship
{
public:

	typedef GeneratedFrom_ptr ptr_type;
	
	GeneratedFrom();
	virtual ~GeneratedFrom();

	typedef kdm::code::PreprocessorDirective_ptr to_t;
	typedef kdm::code::AbstractCodeElement_ptr from_t;

	
	to_t getTo() const;
	from_t getFrom() const;


	kdm::code::PreprocessorDirective_ptr m_to;
	kdm::code::AbstractCodeElement_ptr m_from;

		
protected:

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_GENERATEDFROM__HPP
