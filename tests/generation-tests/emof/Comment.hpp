
#ifndef EMF_CPP_EMOF_COMMENT__HPP
#define EMF_CPP_EMOF_COMMENT__HPP

#include <emof/fwd.hpp>
#include <emof/meta.hpp>
#include <emof/Element.hpp>

#include <e4c/mapping.hpp>

namespace emof
{


// emof::Comment
class Comment :  public virtual ::emof::Element
{
public:

	typedef Comment_ptr ptr_type;
	
	Comment();
	virtual ~Comment();

	typedef std::vector < emof::NamedElement_ptr > annotatedElement_t;

	
	// TODO

	
protected:

	annotatedElement_t m_annotatedElement;

};

} // emof


#endif // EMF_CPP_EMOF_COMMENT__HPP
