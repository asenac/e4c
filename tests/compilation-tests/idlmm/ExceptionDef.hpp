
#ifndef EMF_CPP_IDLMM_EXCEPTIONDEF__HPP
#define EMF_CPP_IDLMM_EXCEPTIONDEF__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <idlmm/Contained.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


// idlmm::ExceptionDef
class ExceptionDef :  public virtual ::idlmm::Contained
{
public:

	typedef ExceptionDef_ptr ptr_type;
	
	ExceptionDef();
	virtual ~ExceptionDef();

	typedef int typeCode_t;
	typedef boost::ptr_vector < idlmm::Field > members_t;

	
	void setTypeCode(typeCode_t _typeCode);
	typeCode_t getTypeCode() const;
	// TODO

	
protected:

	typeCode_t m_typeCode;
	members_t m_members;

};

} // idlmm


#endif // EMF_CPP_IDLMM_EXCEPTIONDEF__HPP
