
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

	typedef std::set < kdm::source::SourceRef_ptr > source_t;
	typedef std::set < kdm::code::CommentUnit_ptr > comment_t;
	typedef std::set < kdm::code::AbstractCodeRelationship_ptr > codeRelation_t;

	
	source_t getSource() const;
	comment_t getComment() const;
	codeRelation_t getCodeRelation() const;


	std::set < std::unique_ptr < kdm::source::SourceRef > > m_source;
	std::set < std::unique_ptr < kdm::code::CommentUnit > > m_comment;
	std::set < std::unique_ptr < kdm::code::AbstractCodeRelationship > > m_codeRelation;

		
protected:
	AbstractCodeElement();

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_ABSTRACTCODEELEMENT__HPP
