
#ifndef EMF_CPP_C_CSOURCETEXT__HPP
#define EMF_CPP_C_CSOURCETEXT__HPP

#include <C/fwd.hpp>
#include <C/meta.hpp>
#include <ecore/EObject.hpp>

namespace C
{


// C::CSourceText
class CSourceText : public virtual ::ecore::EObject
{
public:

	typedef CSourceText_ptr ptr_type;

	CSourceText();
	virtual ~CSourceText();

	// Typedefs
	typedef ::e4c::impl::attribute< CSourceText__source_tag > _source_t;
	typedef ::e4c::impl::attribute< CSourceText__fileName_tag > _fileName_t;

	
	// Members
	_source_t source;
	_fileName_t fileName;

};

} // C


#endif // EMF_CPP_C_CSOURCETEXT__HPP
