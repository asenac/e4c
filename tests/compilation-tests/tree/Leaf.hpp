
#ifndef EMF_CPP_TREE_LEAF__HPP
#define EMF_CPP_TREE_LEAF__HPP

#include <tree/fwd.hpp>
#include <tree/meta.hpp>
#include <tree/TreeNode.hpp>

#include <e4c/mapping.hpp>

namespace tree
{


class Leaf :  public virtual ::tree::TreeNode
{
public:

	typedef Leaf_ptr ptr_type;
	
	Leaf();
	virtual ~Leaf();

	
	

	/*PROTECTED REGION ID(tree::Leaf public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class TreePackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(tree::Leaf protected) START*/
	/*PROTECTED REGION END*/
};

} // tree


#endif // EMF_CPP_TREE_LEAF__HPP
