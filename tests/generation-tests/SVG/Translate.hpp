
#ifndef EMF_CPP_SVG_TRANSLATE__HPP
#define EMF_CPP_SVG_TRANSLATE__HPP

#include <SVG/fwd.hpp>
#include <SVG/meta.hpp>
#include <SVG/Transform.hpp>

#include <e4c/mapping.hpp>

namespace SVG
{


class Translate :  public virtual ::SVG::Transform
{
public:

	typedef Translate_ptr ptr_type;
	
	Translate();
	virtual ~Translate();

	typedef ::PrimitiveTypes::Double tx_t;
	typedef ::PrimitiveTypes::Double ty_t;
	
	void setTx(tx_t _tx);
	tx_t getTx() const;
	void setTy(ty_t _ty);
	ty_t getTy() const;
	

	/*PROTECTED REGION ID(SVG::Translate public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class SVGPackage;

	tx_t m_tx;
	ty_t m_ty;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(SVG::Translate protected) START*/
	/*PROTECTED REGION END*/
};

} // SVG


#endif // EMF_CPP_SVG_TRANSLATE__HPP
