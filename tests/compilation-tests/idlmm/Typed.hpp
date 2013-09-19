
#ifndef EMF_CPP_IDLMM_TYPED__HPP
#define EMF_CPP_IDLMM_TYPED__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <idlmm/ModelElement.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


// idlmm::Typed
class Typed :  public virtual ::idlmm::ModelElement
{
public:

	typedef Typed_ptr ptr_type;
	
	virtual ~Typed();

	typedef std::unique_ptr < idlmm::IDLType > containedType_t;
	typedef idlmm::TypedefDef_ptr sharedType_t;

	
	// TODO
	// TODO

	
protected:
	Typed();

	containedType_t m_containedType;
	sharedType_t m_sharedType;

};

} // idlmm


#endif // EMF_CPP_IDLMM_TYPED__HPP
