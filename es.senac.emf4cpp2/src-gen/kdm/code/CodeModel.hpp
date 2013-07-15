
#ifndef EMF_CPP_KDM_CODE_CODEMODEL__HPP
#define EMF_CPP_KDM_CODE_CODEMODEL__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/kdm/KDMModel.hpp>


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

	// Typedefs
	typedef ::e4c::impl::reference< CodeModel__codeElement_tag > _codeElement_t;

	
	// Members
	_codeElement_t codeElement;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_CODEMODEL__HPP
