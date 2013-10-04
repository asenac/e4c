
#ifndef EMF_CPP_KDM_CODE_PARAMETERUNIT__HPP
#define EMF_CPP_KDM_CODE_PARAMETERUNIT__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/DataElement.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


class ParameterUnit :  public virtual ::kdm::code::DataElement
{
public:

	typedef ParameterUnit_ptr ptr_type;
	
	ParameterUnit();
	virtual ~ParameterUnit();

	typedef ::kdm::code::ParameterKind kind_t;
	typedef ::kdm::core::Integer pos_t;
	
	void setKind(kind_t _kind);
	kind_t getKind() const;
	void setPos(pos_t _pos);
	pos_t getPos() const;
	

	/*PROTECTED REGION ID(kdm::code::ParameterUnit public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class CodePackage;

	kind_t m_kind;
	pos_t m_pos;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::code::ParameterUnit protected) START*/
	/*PROTECTED REGION END*/
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_PARAMETERUNIT__HPP
