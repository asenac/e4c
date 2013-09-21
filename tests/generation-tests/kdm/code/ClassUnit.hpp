
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


// kdm::code::ClassUnit
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


	isAbstract_t m_isAbstract;
	std::vector < std::unique_ptr < kdm::code::CodeItem > > m_codeElement;

		
protected:

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_CLASSUNIT__HPP
