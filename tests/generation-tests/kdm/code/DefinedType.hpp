
#ifndef EMF_CPP_KDM_CODE_DEFINEDTYPE__HPP
#define EMF_CPP_KDM_CODE_DEFINEDTYPE__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/Datatype.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


class DefinedType :  public virtual ::kdm::code::Datatype
{
public:

	typedef DefinedType_ptr ptr_type;
	
	virtual ~DefinedType();

	typedef kdm::code::Datatype_ptr type_t;
	typedef kdm::code::Datatype_ptr codeElement_t;
	
	type_t getType() const;
	void setType(type_t type_);
	codeElement_t getCodeElement() const;
	void setCodeElement(codeElement_t codeElement_);
	codeElement_t releaseCodeElement();
	

	/*PROTECTED REGION ID(kdm::code::DefinedType public) START*/
	/*PROTECTED REGION END*/
		
protected:
	DefinedType();

	friend class CodePackage;

	kdm::code::Datatype_ptr m_type;
	std::unique_ptr < kdm::code::Datatype > m_codeElement;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::code::DefinedType protected) START*/
	/*PROTECTED REGION END*/
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_DEFINEDTYPE__HPP
