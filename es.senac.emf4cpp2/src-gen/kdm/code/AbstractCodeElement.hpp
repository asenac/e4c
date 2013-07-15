
#ifndef EMF_CPP_KDM_CODE_ABSTRACTCODEELEMENT__HPP
#define EMF_CPP_KDM_CODE_ABSTRACTCODEELEMENT__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/core/KDMEntity.hpp>


namespace kdm
{
namespace code
{


// kdm::code::AbstractCodeElement
class AbstractCodeElement :  public virtual ::kdm::core::KDMEntity
{
public:

	typedef AbstractCodeElement_ptr ptr_type;

	AbstractCodeElement();
	virtual ~AbstractCodeElement();

	// Typedefs
	typedef ::e4c::impl::reference< AbstractCodeElement__source_tag > _source_t;
	typedef ::e4c::impl::reference< AbstractCodeElement__comment_tag > _comment_t;
	typedef ::e4c::impl::reference< AbstractCodeElement__codeRelation_tag > _codeRelation_t;

	
	// Members
	_source_t source;
	_comment_t comment;
	_codeRelation_t codeRelation;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_ABSTRACTCODEELEMENT__HPP
