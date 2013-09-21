
#ifndef EMF_CPP_IDLMM_CONSTANT__HPP
#define EMF_CPP_IDLMM_CONSTANT__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <idlmm/Contained.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


class Constant :  public virtual ::idlmm::Contained
{
public:

	typedef Constant_ptr ptr_type;
	
	virtual ~Constant();

	
	
		
protected:
	Constant();

	friend class IdlmmPackage;

	
	
};

} // idlmm


#endif // EMF_CPP_IDLMM_CONSTANT__HPP
