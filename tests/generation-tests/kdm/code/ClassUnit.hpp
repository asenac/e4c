
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

	typedef int isAbstract_t;
	typedef boost::ptr_vector < kdm::code::CodeItem > codeElement_t;

	
	void setIsAbstract(isAbstract_t _isAbstract);
	isAbstract_t getIsAbstract() const;
	// TODO

	
protected:

	isAbstract_t m_isAbstract;
	codeElement_t m_codeElement;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_CLASSUNIT__HPP
