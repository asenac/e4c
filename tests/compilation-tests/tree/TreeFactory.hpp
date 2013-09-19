#ifndef EMF_CPP_TREE_FACTORY_HPP
#define EMF_CPP_TREE_FACTORY_HPP

#include <ecore/EFactory.hpp>
#include <tree/fwd.hpp>

namespace tree
{


class TreeFactory : public ::ecore::EFactory
{
public:

    static const TreeFactory_ptr _instance();

    Leaf_ptr createLeaf() const;
    NonTerminal_ptr createNonTerminal() const;

protected:

    TreeFactory();
};

} // tree


#endif // EMF_CPP_TREE_FACTORY_HPP
