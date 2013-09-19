
#ifndef EMF_CPP_KDM_CODE_PREPROCESSORDIRECTIVE__HPP
#define EMF_CPP_KDM_CODE_PREPROCESSORDIRECTIVE__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/AbstractCodeElement.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


// kdm::code::PreprocessorDirective
class PreprocessorDirective :  public virtual ::kdm::code::AbstractCodeElement
{
public:

	typedef PreprocessorDirective_ptr ptr_type;
	
	PreprocessorDirective();
	virtual ~PreprocessorDirective();

	typedef boost::ptr_set < kdm::code::AbstractCodeElement > codeElement_t;

	
	// TODO

	
protected:

	codeElement_t m_codeElement;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_PREPROCESSORDIRECTIVE__HPP
