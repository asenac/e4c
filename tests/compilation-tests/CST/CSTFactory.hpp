#ifndef EMF_CPP_CST_FACTORY_HPP
#define EMF_CPP_CST_FACTORY_HPP

#include <ecore/EFactory.hpp>
#include <CST/fwd.hpp>

namespace CST
{


class CSTFactory : public ::ecore::EFactory
{
public:

    static const CSTFactory_ptr _instance();

    Tree_ptr createTree() const;
    Element_ptr createElement() const;
    Node_ptr createNode() const;
    Leaf_ptr createLeaf() const;

protected:

    CSTFactory();
};

} // CST


#endif // EMF_CPP_CST_FACTORY_HPP
