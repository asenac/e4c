
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

	typedef std::vector < idlmm::Contained_ptr > contains_t;

	
	contains_t getContains() const;
	void addContains(idlmm::Contained_ptr contains_);

		
protected:
	Container();

	std::vector < std::unique_ptr < idlmm::Contained > > m_contains;

	
};

} // idlmm


#endif // EMF_CPP_IDLMM_CONTAINER__HPP
