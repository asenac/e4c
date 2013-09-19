
#ifndef EMF_CPP_KDM_CODE_CODEITEM__HPP
#define EMF_CPP_KDM_CODE_CODEITEM__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/AbstractCodeElement.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


// kdm::code::CodeItem
class CodeItem :  public virtual ::kdm::code::AbstractCodeElement
{
public:

	typedef CodeItem_ptr ptr_type;
	
	virtual ~CodeItem();

	
	
	
	
protected:
	CodeItem();

	
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_CODEITEM__HPP
