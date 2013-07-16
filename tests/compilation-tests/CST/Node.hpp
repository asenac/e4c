
#ifndef EMF_CPP_CST_NODE__HPP
#define EMF_CPP_CST_NODE__HPP

#include <CST/fwd.hpp>
#include <CST/meta.hpp>
#include <CST/Element.hpp>

namespace CST
{


// CST::Node
class Node :  public virtual ::CST::Element
{
public:

	typedef Node_ptr ptr_type;

	Node();
	virtual ~Node();

	// Typedefs
	typedef ::e4c::impl::reference< Node__children_tag > _children_t;

	
	// Members
	_children_t children;

};

} // CST


#endif // EMF_CPP_CST_NODE__HPP
