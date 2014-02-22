
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


class AbstractCodeElement :  public virtual ::kdm::core::KDMEntity
{
public:

    typedef AbstractCodeElement_ptr ptr_type;

    virtual ~AbstractCodeElement();

    typedef std::set < kdm::source::SourceRef_ptr > source_t;
    typedef std::set < kdm::code::CommentUnit_ptr > comment_t;
    typedef std::set < kdm::code::AbstractCodeRelationship_ptr > codeRelation_t;

    source_t getSource() const;
    void addSource(kdm::source::SourceRef_ptr source_);
    void addAllSource(const source_t& source_);
    comment_t getComment() const;
    void addComment(kdm::code::CommentUnit_ptr comment_);
    void addAllComment(const comment_t& comment_);
    codeRelation_t getCodeRelation() const;
    void addCodeRelation(kdm::code::AbstractCodeRelationship_ptr codeRelation_);
    void addAllCodeRelation(const codeRelation_t& codeRelation_);


    /*PROTECTED REGION ID(kdm::code::AbstractCodeElement public) START*/
    /*PROTECTED REGION END*/

protected:
    AbstractCodeElement();

    friend class CodePackage;

    std::set < std::unique_ptr < kdm::source::SourceRef > > m_source;
    std::set < std::unique_ptr < kdm::code::CommentUnit > > m_comment;
    std::set < std::unique_ptr < kdm::code::AbstractCodeRelationship > > m_codeRelation;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::code::AbstractCodeElement protected) START*/
    /*PROTECTED REGION END*/
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_ABSTRACTCODEELEMENT__HPP
