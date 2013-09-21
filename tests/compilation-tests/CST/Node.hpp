
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

	typedef std::vector < CST::Element_ptr > children_t;

	
	children_t getChildren() const;


	std::vector < std::unique_ptr < CST::Element > > m_children;

		
protected:

};

} // CST


#endif // EMF_CPP_CST_NODE__HPP
