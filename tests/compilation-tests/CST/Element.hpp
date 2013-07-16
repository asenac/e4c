
#ifndef EMF_CPP_CST_ELEMENT__HPP
#define EMF_CPP_CST_ELEMENT__HPP

#include <CST/fwd.hpp>
#include <CST/meta.hpp>
#include <ecore/EObject.hpp>

namespace CST
{


// CST::Element
class Element : public virtual ::ecore::EObject
{
public:

	typedef Element_ptr ptr_type;

	Element();
	virtual ~Element();

	// Typedefs
	typedef ::e4c::impl::attribute< Element__kind_tag > _kind_t;

	
	// Members
	_kind_t kind;

};

} // CST


#endif // EMF_CPP_CST_ELEMENT__HPP
