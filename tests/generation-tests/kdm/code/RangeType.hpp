
#ifndef EMF_CPP_KDM_CODE_RANGETYPE__HPP
#define EMF_CPP_KDM_CODE_RANGETYPE__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/DerivedType.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


class RangeType :  public virtual ::kdm::code::DerivedType
{
public:

	typedef RangeType_ptr ptr_type;
	
	RangeType();
	virtual ~RangeType();

	typedef ::kdm::core::Integer lower_t;
	typedef ::kdm::core::Integer upper_t;
	
	void setLower(lower_t _lower);
	lower_t getLower() const;
	void setUpper(upper_t _upper);
	upper_t getUpper() const;
	

	/*PROTECTED REGION ID(kdm::code::RangeType public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class CodePackage;

	lower_t m_lower;
	upper_t m_upper;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::code::RangeType protected) START*/
	/*PROTECTED REGION END*/
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_RANGETYPE__HPP
