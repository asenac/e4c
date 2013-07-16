
#ifndef EMF_CPP_CST_LEAF__HPP
#define EMF_CPP_CST_LEAF__HPP

#include <CST/fwd.hpp>
#include <CST/meta.hpp>
#include <CST/Element.hpp>

namespace CST
{


// CST::Leaf
class Leaf :  public virtual ::CST::Element
{
public:

	typedef Leaf_ptr ptr_type;

	Leaf();
	virtual ~Leaf();

	// Typedefs
	typedef ::e4c::impl::attribute< Leaf__value_tag > _value_t;
	typedef ::e4c::impl::attribute< Leaf__pos_tag > _pos_t;
	typedef ::e4c::impl::attribute< Leaf__line_tag > _line_t;

	
	// Members
	_value_t value;
	_pos_t pos;
	_line_t line;

};

} // CST


#endif // EMF_CPP_CST_LEAF__HPP
