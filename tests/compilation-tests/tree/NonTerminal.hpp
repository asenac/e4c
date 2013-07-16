
#ifndef EMF_CPP_TREE_NONTERMINAL__HPP
#define EMF_CPP_TREE_NONTERMINAL__HPP

#include <tree/fwd.hpp>
#include <tree/meta.hpp>
#include <tree/TreeNode.hpp>

namespace tree
{


// tree::NonTerminal
class NonTerminal :  public virtual ::tree::TreeNode
{
public:

	typedef NonTerminal_ptr ptr_type;

	NonTerminal();
	virtual ~NonTerminal();

	// Typedefs
	typedef ::e4c::impl::reference< NonTerminal__children_tag > _children_t;

	
	// Members
	_children_t children;

};

} // tree


#endif // EMF_CPP_TREE_NONTERMINAL__HPP
