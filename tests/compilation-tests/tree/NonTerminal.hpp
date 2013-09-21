
#ifndef EMF_CPP_TREE_NONTERMINAL__HPP
#define EMF_CPP_TREE_NONTERMINAL__HPP

#include <tree/fwd.hpp>
#include <tree/meta.hpp>
#include <tree/TreeNode.hpp>

#include <e4c/mapping.hpp>

namespace tree
{


// tree::NonTerminal
class NonTerminal :  public virtual ::tree::TreeNode
{
public:

	typedef NonTerminal_ptr ptr_type;
	
	NonTerminal();
	virtual ~NonTerminal();

	typedef std::vector < tree::TreeNode_ptr > children_t;

	
	children_t getChildren() const;


	std::vector < std::unique_ptr < tree::TreeNode > > m_children;

		
protected:

};

} // tree


#endif // EMF_CPP_TREE_NONTERMINAL__HPP
