
#ifndef EMF_CPP_KDM_CODE_TEMPLATEUNIT__HPP
#define EMF_CPP_KDM_CODE_TEMPLATEUNIT__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/Datatype.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


// kdm::code::TemplateUnit
class TemplateUnit :  public virtual ::kdm::code::Datatype
{
public:

	typedef TemplateUnit_ptr ptr_type;
	
	TemplateUnit();
	virtual ~TemplateUnit();

	typedef boost::ptr_vector < kdm::code::CodeItem > codeElement_t;

	
	// TODO

	
protected:

	codeElement_t m_codeElement;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_TEMPLATEUNIT__HPP
