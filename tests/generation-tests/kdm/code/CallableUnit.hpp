
#ifndef EMF_CPP_KDM_CODE_CALLABLEUNIT__HPP
#define EMF_CPP_KDM_CODE_CALLABLEUNIT__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/ControlElement.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


// kdm::code::CallableUnit
class CallableUnit :  public virtual ::kdm::code::ControlElement
{
public:

	typedef CallableUnit_ptr ptr_type;
	
	CallableUnit();
	virtual ~CallableUnit();

	typedef ::kdm::code::CallableKind kind_t;

	
	void setKind(kind_t _kind);
	kind_t getKind() const;


	kind_t m_kind;

		
protected:

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_CALLABLEUNIT__HPP
