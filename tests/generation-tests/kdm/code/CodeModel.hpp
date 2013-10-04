
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


class CodeModel :  public virtual ::kdm::kdm::KDMModel
{
public:

	typedef CodeModel_ptr ptr_type;
	
	CodeModel();
	virtual ~CodeModel();

	typedef std::set < kdm::code::AbstractCodeElement_ptr > codeElement_t;
	
	codeElement_t getCodeElement() const;
	void addCodeElement(kdm::code::AbstractCodeElement_ptr codeElement_);
	void addAllCodeElement(const codeElement_t& codeElement_);
	

	/*PROTECTED REGION ID(kdm::code::CodeModel public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class CodePackage;

	std::set < std::unique_ptr < kdm::code::AbstractCodeElement > > m_codeElement;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::code::CodeModel protected) START*/
	/*PROTECTED REGION END*/
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_CODEMODEL__HPP
