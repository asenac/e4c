
#ifndef EMF_CPP_MAKE_ELEMENT__HPP
#define EMF_CPP_MAKE_ELEMENT__HPP

#include <Make/fwd.hpp>
#include <Make/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace Make
{


class Element : ::ecore::EObject
{
public:

    typedef Element_ptr ptr_type;

    virtual ~Element();

    typedef ::PrimitiveTypes::String name_t;

    void setName(name_t _name);
    name_t getName() const;


    /*PROTECTED REGION ID(Make::Element public) START*/
    /*PROTECTED REGION END*/

protected:
    Element();

    friend class MakePackage;

    name_t m_name;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(Make::Element protected) START*/
    /*PROTECTED REGION END*/
};

} // Make


#endif // EMF_CPP_MAKE_ELEMENT__HPP
