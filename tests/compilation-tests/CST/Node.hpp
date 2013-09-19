
#ifndef EMF_CPP_CST_NODE__HPP
#define EMF_CPP_CST_NODE__HPP

#include <CST/fwd.hpp>
#include <CST/meta.hpp>
#include <CST/Element.hpp>

#include <e4c/mapping.hpp>

namespace CST
{


// CST::Node
class Node :  public virtual ::CST::Element
{
public:

	typedef Node_ptr ptr_type;
	
	Node();
	virtual ~Node();

	typedef boost::ptr_vector < CST::Element > children_t;

	
	// TODO

	
protected:

	children_t m_children;

};

} // CST


#endif // EMF_CPP_CST_NODE__HPP
