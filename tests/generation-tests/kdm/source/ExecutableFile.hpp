
#ifndef EMF_CPP_KDM_SOURCE_EXECUTABLEFILE__HPP
#define EMF_CPP_KDM_SOURCE_EXECUTABLEFILE__HPP

#include <kdm/source/fwd.hpp>
#include <kdm/source/meta.hpp>
#include <kdm/source/InventoryItem.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace source
{


class ExecutableFile :  public virtual ::kdm::source::InventoryItem
{
public:

    typedef ExecutableFile_ptr ptr_type;

    ExecutableFile();
    virtual ~ExecutableFile();




    /*PROTECTED REGION ID(kdm::source::ExecutableFile public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class SourcePackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::source::ExecutableFile protected) START*/
    /*PROTECTED REGION END*/
};

} // source
} // kdm


#endif // EMF_CPP_KDM_SOURCE_EXECUTABLEFILE__HPP
