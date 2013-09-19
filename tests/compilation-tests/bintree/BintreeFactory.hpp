#ifndef EMF_CPP_BINTREE_FACTORY_HPP
#define EMF_CPP_BINTREE_FACTORY_HPP

#include <ecore/EFactory.hpp>
#include <bintree/fwd.hpp>

namespace bintree
{


class BintreeFactory : public ::ecore::EFactory
{
public:

    static const BintreeFactory_ptr _instance();

    BinTreeNode_ptr createBinTreeNode() const;

protected:

    BintreeFactory();
};

} // bintree


#endif // EMF_CPP_BINTREE_FACTORY_HPP
