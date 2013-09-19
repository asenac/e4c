
#ifndef EMF_CPP_KDM_CODE_CODEMODEL__HPP
#define EMF_CPP_KDM_CODE_CODEMODEL__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/kdm/KDMModel.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


// kdm::code::CodeModel
class CodeModel :  public virtual ::kdm::kdm::KDMModel
{
public:

	typedef CodeModel_ptr ptr_type;
	
	CodeModel();
	virtual ~CodeModel();

	typedef boost::ptr_set < kdm::code::AbstractCodeElement > codeElement_t;

	
	// TODO

	
protected:

	codeElement_t m_codeElement;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_CODEMODEL__HPP
