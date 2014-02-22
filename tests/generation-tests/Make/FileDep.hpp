
#ifndef EMF_CPP_MAKE_FILEDEP__HPP
#define EMF_CPP_MAKE_FILEDEP__HPP

#include <Make/fwd.hpp>
#include <Make/meta.hpp>
#include <Make/Dependency.hpp>

#include <e4c/mapping.hpp>

namespace Make
{


class FileDep :  public virtual ::Make::Dependency
{
public:

    typedef FileDep_ptr ptr_type;

    FileDep();
    virtual ~FileDep();

    typedef ::PrimitiveTypes::String name_t;

    void setName(name_t _name);
    name_t getName() const;


    /*PROTECTED REGION ID(Make::FileDep public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class MakePackage;

    name_t m_name;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(Make::FileDep protected) START*/
    /*PROTECTED REGION END*/
};

} // Make


#endif // EMF_CPP_MAKE_FILEDEP__HPP
