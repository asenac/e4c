
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


// kdm::code::Includes
class Includes :  public virtual ::kdm::code::AbstractCodeRelationship
{
public:

	typedef Includes_ptr ptr_type;
	
	Includes();
	virtual ~Includes();

	typedef kdm::code::AbstractCodeElement_ptr to_t;
	typedef kdm::code::PreprocessorDirective_ptr from_t;

	
	// TODO
	// TODO

	
protected:

	to_t m_to;
	from_t m_from;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_INCLUDES__HPP
