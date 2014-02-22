
#ifndef EMF_CPP_EMOF_ELEMENT__HPP
#define EMF_CPP_EMOF_ELEMENT__HPP

#include <emof/fwd.hpp>
#include <emof/meta.hpp>
#include <emof/Object.hpp>

#include <e4c/mapping.hpp>

namespace emof
{


class Element :  public virtual ::emof::Object
{
public:

    typedef Element_ptr ptr_type;

    virtual ~Element();

    typedef std::set < emof::Comment_ptr > ownedComment_t;
    typedef std::set < emof::Tag_ptr > tag_t;

    ownedComment_t getOwnedComment() const;
    void addOwnedComment(emof::Comment_ptr ownedComment_);
    void addAllOwnedComment(const ownedComment_t& ownedComment_);
    tag_t getTag() const;
    void addTag(emof::Tag_ptr tag_);
    void addAllTag(const tag_t& tag_);


    /*PROTECTED REGION ID(emof::Element public) START*/
    /*PROTECTED REGION END*/

protected:
    Element();

    friend class EmofPackage;

    std::set < std::unique_ptr < emof::Comment > > m_ownedComment;
    std::set < emof::Tag_ptr > m_tag;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(emof::Element protected) START*/
    /*PROTECTED REGION END*/
};

} // emof


#endif // EMF_CPP_EMOF_ELEMENT__HPP
