
#ifndef EMF_CPP_MAKE_MAKEFILE__HPP
#define EMF_CPP_MAKE_MAKEFILE__HPP

#include <Make/fwd.hpp>
#include <Make/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace Make
{


class Makefile : ::ecore::EObject
{
public:

    typedef Makefile_ptr ptr_type;

    Makefile();
    virtual ~Makefile();

    typedef ::PrimitiveTypes::String name_t;
    typedef Make::Comment_ptr comment_t;
    typedef std::vector < Make::Element_ptr > elements_t;

    void setName(name_t _name);
    name_t getName() const;
    comment_t getComment() const;
    void setComment(comment_t comment_);
    comment_t releaseComment();
    elements_t getElements() const;
    void addElements(Make::Element_ptr elements_);
    void addAllElements(const elements_t& elements_);


    /*PROTECTED REGION ID(Make::Makefile public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class MakePackage;

    name_t m_name;
    std::unique_ptr < Make::Comment > m_comment;
    std::vector < std::unique_ptr < Make::Element > > m_elements;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(Make::Makefile protected) START*/
    /*PROTECTED REGION END*/
};

} // Make


#endif // EMF_CPP_MAKE_MAKEFILE__HPP
