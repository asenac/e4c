
#ifndef EMF_CPP_KDM_CODE_CLASSUNIT__HPP
#define EMF_CPP_KDM_CODE_CLASSUNIT__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/Datatype.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


class ClassUnit :  public virtual ::kdm::code::Datatype
{
public:

	typedef ClassUnit_ptr ptr_type;
	
	ClassUnit();
	virtual ~ClassUnit();

	typedef ::kdm::core::Boolean isAbstract_t;
	typedef std::vector < kdm::code::CodeItem_ptr > codeElement_t;
	
	void setIsAbstract(isAbstract_t _isAbstract);
	isAbstract_t getIsAbstract() const;
	codeElement_t getCodeElement() const;
	void addCodeElement(kdm::code::CodeItem_ptr codeElement_);
	void addAllCodeElement(const codeElement_t& codeElement_);
	

	/*PROTECTED REGION ID(kdm::code::ClassUnit public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class CodePackage;

	isAbstract_t m_isAbstract;
	std::vector < std::unique_ptr < kdm::code::CodeItem > > m_codeElement;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::code::ClassUnit protected) START*/
	/*PROTECTED REGION END*/
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_CLASSUNIT__HPP
