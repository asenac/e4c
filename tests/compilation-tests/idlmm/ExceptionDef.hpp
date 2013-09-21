
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

	typedef ::idlmm::ETypeCode typeCode_t;
	typedef std::vector < idlmm::Field_ptr > members_t;

	
	void setTypeCode(typeCode_t _typeCode);
	typeCode_t getTypeCode() const;
	members_t getMembers() const;
	void addMembers(idlmm::Field_ptr members_);

		
protected:

	typeCode_t m_typeCode;
	std::vector < std::unique_ptr < idlmm::Field > > m_members;

	
};

} // idlmm


#endif // EMF_CPP_IDLMM_EXCEPTIONDEF__HPP
