
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
	typedef std::set < emof::Parameter_ptr > ownedParameter_t;
	typedef std::set < emof::Type_ptr > raisedException_t;

	
	class_t getClass() const;
	ownedParameter_t getOwnedParameter() const;
	raisedException_t getRaisedException() const;


	emof::Class_ptr m_class;
	std::set < std::unique_ptr < emof::Parameter > > m_ownedParameter;
	std::set < emof::Type_ptr > m_raisedException;

		
protected:

};

} // emof


#endif // EMF_CPP_EMOF_OPERATION__HPP
