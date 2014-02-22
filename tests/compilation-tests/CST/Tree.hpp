
#ifndef EMF_CPP_CST_TREE__HPP
#define EMF_CPP_CST_TREE__HPP

#include <CST/fwd.hpp>
#include <CST/meta.hpp>
#include <CST/Node.hpp>

#include <e4c/mapping.hpp>

namespace CST
{


class Tree :  public virtual ::CST::Node
{
public:

    typedef Tree_ptr ptr_type;

    Tree();
    virtual ~Tree();




    /*PROTECTED REGION ID(CST::Tree public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class CSTPackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(CST::Tree protected) START*/
    /*PROTECTED REGION END*/
};

} // CST


#endif // EMF_CPP_CST_TREE__HPP
