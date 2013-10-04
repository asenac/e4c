
#ifndef EMF_CPP_KDM_CODE_VALUELIST__HPP
#define EMF_CPP_KDM_CODE_VALUELIST__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/ValueElement.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


class ValueList :  public virtual ::kdm::code::ValueElement
{
public:

	typedef ValueList_ptr ptr_type;
	
	ValueList();
	virtual ~ValueList();

	typedef std::vector < kdm::code::ValueElement_ptr > valueElement_t;
	
	valueElement_t getValueElement() const;
	void addValueElement(kdm::code::ValueElement_ptr valueElement_);
	void addAllValueElement(const valueElement_t& valueElement_);
	

	/*PROTECTED REGION ID(kdm::code::ValueList public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class CodePackage;

	std::vector < std::unique_ptr < kdm::code::ValueElement > > m_valueElement;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::code::ValueList protected) START*/
	/*PROTECTED REGION END*/
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_VALUELIST__HPP
