
#ifndef EMF_CPP_KDM_CODE_CLASSUNIT__HPP
#define EMF_CPP_KDM_CODE_CLASSUNIT__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/Datatype.hpp>


namespace kdm
{
namespace code
{


// kdm::code::ClassUnit
class ClassUnit :  public virtual ::kdm::code::Datatype
{
public:

	typedef ClassUnit_ptr ptr_type;

	ClassUnit();
	virtual ~ClassUnit();

	// Typedefs
	typedef ::e4c::impl::attribute< ClassUnit__isAbstract_tag > _isAbstract_t;
	typedef ::e4c::impl::reference< ClassUnit__codeElement_tag > _codeElement_t;

	
	// Members
	_isAbstract_t isAbstract;
	_codeElement_t codeElement;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_CLASSUNIT__HPP
