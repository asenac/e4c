
#ifndef EMF_CPP_KDM_CODE_COMMENTUNIT__HPP
#define EMF_CPP_KDM_CODE_COMMENTUNIT__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/core/ModelElement.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


class CommentUnit :  public virtual ::kdm::core::ModelElement
{
public:

    typedef CommentUnit_ptr ptr_type;

    CommentUnit();
    virtual ~CommentUnit();

    typedef ::kdm::core::String text_t;

    void setText(text_t _text);
    text_t getText() const;


    /*PROTECTED REGION ID(kdm::code::CommentUnit public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class CodePackage;

    text_t m_text;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::code::CommentUnit protected) START*/
    /*PROTECTED REGION END*/
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_COMMENTUNIT__HPP
