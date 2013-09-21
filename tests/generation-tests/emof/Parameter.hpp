
#ifndef EMF_CPP_EMOF_PARAMETER__HPP
#define EMF_CPP_EMOF_PARAMETER__HPP

#include <emof/fwd.hpp>
#include <emof/meta.hpp>
#include <emof/TypedElement.hpp>
#include <emof/MultiplicityElement.hpp>

#include <e4c/mapping.hpp>

namespace emof
{


// emof::Parameter
class Parameter :  public virtual ::emof::TypedElement,  public virtual ::emof::MultiplicityElement
{
public:

	typedef Parameter_ptr ptr_type;
	
	Parameter();
	virtual ~Parameter();

	typedef emof::Operation_ptr operation_t;

	
	operation_t getOperation() const;


	emof::Operation_ptr m_operation;

		
protected:

};

} // emof


#endif // EMF_CPP_EMOF_PARAMETER__HPP
