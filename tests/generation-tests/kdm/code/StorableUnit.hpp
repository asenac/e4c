
#ifndef EMF_CPP_KDM_CODE_STORABLEUNIT__HPP
#define EMF_CPP_KDM_CODE_STORABLEUNIT__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/DataElement.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


class StorableUnit :  public virtual ::kdm::code::DataElement
{
public:

    typedef StorableUnit_ptr ptr_type;

    StorableUnit();
    virtual ~StorableUnit();

    typedef ::kdm::code::StorableKind kind_t;

    void setKind(kind_t _kind);
    kind_t getKind() const;


    /*PROTECTED REGION ID(kdm::code::StorableUnit public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class CodePackage;

    kind_t m_kind;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::code::StorableUnit protected) START*/
    /*PROTECTED REGION END*/
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_STORABLEUNIT__HPP
