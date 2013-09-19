
#ifndef EMF_CPP_IDLMM_CONTAINER__HPP
#define EMF_CPP_IDLMM_CONTAINER__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <idlmm/Contained.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


// idlmm::Container
class Container :  public virtual ::idlmm::Contained
{
public:

	typedef Container_ptr ptr_type;
	
	virtual ~Container();

	typedef boost::ptr_vector < idlmm::Contained > contains_t;

	
	// TODO

	
protected:
	Container();

	contains_t m_contains;

};

} // idlmm


#endif // EMF_CPP_IDLMM_CONTAINER__HPP
