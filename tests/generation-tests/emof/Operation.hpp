
#ifndef EMF_CPP_EMOF_OPERATION__HPP
#define EMF_CPP_EMOF_OPERATION__HPP

#include <emof/fwd.hpp>
#include <emof/meta.hpp>
#include <emof/TypedElement.hpp>
#include <emof/MultiplicityElement.hpp>

#include <e4c/mapping.hpp>

namespace emof
{


// emof::Operation
class Operation :  public virtual ::emof::TypedElement,  public virtual ::emof::MultiplicityElement
{
public:

	typedef Operation_ptr ptr_type;
	
	Operation();
	virtual ~Operation();

	typedef emof::Class_ptr class_t;
	typedef boost::ptr_set < emof::Parameter > ownedParameter_t;
	typedef std::vector < emof::Type_ptr > raisedException_t;

	
	// TODO
	// TODO
	// TODO

	
protected:

	class_t m_class;
	ownedParameter_t m_ownedParameter;
	raisedException_t m_raisedException;

};

} // emof


#endif // EMF_CPP_EMOF_OPERATION__HPP
