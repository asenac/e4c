
#ifndef EMF_CPP_KDM_CODE_ABSTRACTCODEELEMENT__HPP
#define EMF_CPP_KDM_CODE_ABSTRACTCODEELEMENT__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/core/KDMEntity.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


// kdm::code::AbstractCodeElement
class AbstractCodeElement :  public virtual ::kdm::core::KDMEntity
{
public:

	typedef AbstractCodeElement_ptr ptr_type;
	
	virtual ~AbstractCodeElement();

	typedef boost::ptr_set < kdm::source::SourceRef > source_t;
	typedef boost::ptr_set < kdm::code::CommentUnit > comment_t;
	typedef boost::ptr_set < kdm::code::AbstractCodeRelationship > codeRelation_t;

	
	// TODO
	// TODO
	// TODO

	
protected:
	AbstractCodeElement();

	source_t m_source;
	comment_t m_comment;
	codeRelation_t m_codeRelation;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_ABSTRACTCODEELEMENT__HPP
