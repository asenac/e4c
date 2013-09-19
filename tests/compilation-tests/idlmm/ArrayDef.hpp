
#ifndef EMF_CPP_IDLMM_ARRAYDEF__HPP
#define EMF_CPP_IDLMM_ARRAYDEF__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <idlmm/Typed.hpp>
#include <idlmm/IDLType.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


// idlmm::ArrayDef
class ArrayDef :  public virtual ::idlmm::Typed,  public virtual ::idlmm::IDLType
{
public:

	typedef ArrayDef_ptr ptr_type;
	
	ArrayDef();
	virtual ~ArrayDef();

	typedef int name_t;
	typedef boost::ptr_vector < idlmm::Expression > bounds_t;

	
	void setName(name_t _name);
	name_t getName() const;
	// TODO

	
protected:

	name_t m_name;
	bounds_t m_bounds;

};

} // idlmm


#endif // EMF_CPP_IDLMM_ARRAYDEF__HPP
