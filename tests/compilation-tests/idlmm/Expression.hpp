
#ifndef EMF_CPP_IDLMM_EXPRESSION__HPP
#define EMF_CPP_IDLMM_EXPRESSION__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <idlmm/ModelElement.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


// idlmm::Expression
class Expression :  public virtual ::idlmm::ModelElement
{
public:

	typedef Expression_ptr ptr_type;
	
	virtual ~Expression();

	
	
	
	
protected:
	Expression();

	
};

} // idlmm


#endif // EMF_CPP_IDLMM_EXPRESSION__HPP
