
#ifndef EMF_CPP_CST_NODE__HPP
#define EMF_CPP_CST_NODE__HPP

#include <CST/fwd.hpp>
#include <CST/meta.hpp>
#include <CST/Element.hpp>

#include <e4c/mapping.hpp>

namespace CST
{


class Node :  public virtual ::CST::Element
{
public:

    typedef Node_ptr ptr_type;

    Node();
    virtual ~Node();

    typedef std::vector < CST::Element_ptr > children_t;

    children_t getChildren() const;
    void addChildren(CST::Element_ptr children_);
    void addAllChildren(const children_t& children_);


    /*PROTECTED REGION ID(CST::Node public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class CSTPackage;

    std::vector < std::unique_ptr < CST::Element > > m_children;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(CST::Node protected) START*/
    /*PROTECTED REGION END*/
};

} // CST


#endif // EMF_CPP_CST_NODE__HPP
