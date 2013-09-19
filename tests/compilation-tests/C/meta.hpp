
#ifndef EMF_CPP_C_META_HPP
#define EMF_CPP_C_META_HPP

#include <e4c/definition.hpp>
#include <C/fwd.hpp>

#include <PrimitiveTypes/fwd.hpp>

namespace C
{



struct CStructureContents__sc_container_tag
{
	typedef CStructureContents eClass;
	typedef ::C::CStructured eReferenceType;
	static const bool containment = false;
	static const bool container = true;
	static const bool hasOpposite = true; 
	typedef ::C::CStructured__contains_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct CStructured__contains_tag
{
	typedef CStructured eClass;
	typedef ::C::CStructureContents eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = true; 
	typedef ::C::CStructureContents__sc_container_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct CSourceText__source_tag
{
	typedef CSourceText eClass;
	typedef ::PrimitiveTypes::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = false;
};

struct CSourceText__fileName_tag
{
	typedef CSourceText eClass;
	typedef ::PrimitiveTypes::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = false;
};

struct CTypedElement__type_tag
{
	typedef CTypedElement eClass;
	typedef ::C::CClassifier eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef CTypedElement__type_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct CTypedElement__source_tag
{
	typedef CTypedElement eClass;
	typedef ::C::CSourceText eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef CTypedElement__source_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct CParameter__behavioralFeature_tag
{
	typedef CParameter eClass;
	typedef ::C::BehavioralFeature eReferenceType;
	static const bool containment = false;
	static const bool container = true;
	static const bool hasOpposite = true; 
	typedef ::C::BehavioralFeature__parameters_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct BehavioralFeature__parameters_tag
{
	typedef BehavioralFeature eClass;
	typedef ::C::CParameter eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = true; 
	typedef ::C::CParameter__behavioralFeature_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct CFunction__isVarArg_tag
{
	typedef CFunction eClass;
	typedef ::PrimitiveTypes::Boolean eType;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = false;
};


} // C


namespace e4c
{
namespace definition
{

template < >
struct epackage< ::C::CPackage >
{
	typedef boost::mpl::list< ::C::CDataType,
	                          ::C::CIntegral,
	                          ::C::CFloating,
	                          ::C::CBitField,
	                          ::C::CVoid,
	                          ::C::CEnumeration,
	                          ::C::CInt,
	                          ::C::CChar,
	                          ::C::CDouble,
	                          ::C::CFloat,
	                          ::C::CLongDouble,
	                          ::C::CUnsignedInt,
	                          ::C::CLong,
	                          ::C::CLongLong,
	                          ::C::CShort,
	                          ::C::CSignedChar,
	                          ::C::CUnsignedChar,
	                          ::C::CWChar,
	                          ::C::UnsignedLong,
	                          ::C::UnsignedLongLong,
	                          ::C::UnsignedShort,
	                          ::C::CClassifier,
	                          ::C::Derived,
	                          ::C::CStructureContents,
	                          ::C::CStructured,
	                          ::C::CStruct,
	                          ::C::CUnion,
	                          ::C::CSourceText,
	                          ::C::CTypedElement,
	                          ::C::CStructuralFeature,
	                          ::C::CField,
	                          ::C::CParameter,
	                          ::C::BehavioralFeature,
	                          ::C::CFunction > eClasses;
	typedef boost::mpl::list<  > eSubpackages;
};

template < >
struct eclass< ::C::CDataType >
{
	typedef boost::mpl::list< ::C::CClassifier > eSuperTypes;
	typedef boost::mpl::list< ::C::CClassifier > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list<  > eAllStructuralFeatures;
};

template < >
struct name< ::C::CDataType >
{
	static const char * get()
	{
		return "CDataType";
	}
};


template < >
struct eclass< ::C::CIntegral >
{
	typedef boost::mpl::list< ::C::CDataType > eSuperTypes;
	typedef boost::mpl::list< ::C::CClassifier,
	                          ::C::CDataType > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list<  > eAllStructuralFeatures;
};

template < >
struct name< ::C::CIntegral >
{
	static const char * get()
	{
		return "CIntegral";
	}
};


template < >
struct eclass< ::C::CFloating >
{
	typedef boost::mpl::list< ::C::CDataType > eSuperTypes;
	typedef boost::mpl::list< ::C::CClassifier,
	                          ::C::CDataType > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list<  > eAllStructuralFeatures;
};

template < >
struct name< ::C::CFloating >
{
	static const char * get()
	{
		return "CFloating";
	}
};


template < >
struct eclass< ::C::CBitField >
{
	typedef boost::mpl::list< ::C::CDataType > eSuperTypes;
	typedef boost::mpl::list< ::C::CClassifier,
	                          ::C::CDataType > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list<  > eAllStructuralFeatures;
};

template < >
struct name< ::C::CBitField >
{
	static const char * get()
	{
		return "CBitField";
	}
};


template < >
struct eclass< ::C::CVoid >
{
	typedef boost::mpl::list< ::C::CDataType > eSuperTypes;
	typedef boost::mpl::list< ::C::CClassifier,
	                          ::C::CDataType > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list<  > eAllStructuralFeatures;
};

template < >
struct name< ::C::CVoid >
{
	static const char * get()
	{
		return "CVoid";
	}
};


template < >
struct eclass< ::C::CEnumeration >
{
	typedef boost::mpl::list< ::C::CIntegral > eSuperTypes;
	typedef boost::mpl::list< ::C::CClassifier,
	                          ::C::CDataType,
	                          ::C::CIntegral > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list<  > eAllStructuralFeatures;
};

template < >
struct name< ::C::CEnumeration >
{
	static const char * get()
	{
		return "CEnumeration";
	}
};


template < >
struct eclass< ::C::CInt >
{
	typedef boost::mpl::list< ::C::CIntegral > eSuperTypes;
	typedef boost::mpl::list< ::C::CClassifier,
	                          ::C::CDataType,
	                          ::C::CIntegral > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list<  > eAllStructuralFeatures;
};

template < >
struct name< ::C::CInt >
{
	static const char * get()
	{
		return "CInt";
	}
};


template < >
struct eclass< ::C::CChar >
{
	typedef boost::mpl::list< ::C::CIntegral > eSuperTypes;
	typedef boost::mpl::list< ::C::CClassifier,
	                          ::C::CDataType,
	                          ::C::CIntegral > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list<  > eAllStructuralFeatures;
};

template < >
struct name< ::C::CChar >
{
	static const char * get()
	{
		return "CChar";
	}
};


template < >
struct eclass< ::C::CDouble >
{
	typedef boost::mpl::list< ::C::CFloating > eSuperTypes;
	typedef boost::mpl::list< ::C::CClassifier,
	                          ::C::CDataType,
	                          ::C::CFloating > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list<  > eAllStructuralFeatures;
};

template < >
struct name< ::C::CDouble >
{
	static const char * get()
	{
		return "CDouble";
	}
};


template < >
struct eclass< ::C::CFloat >
{
	typedef boost::mpl::list< ::C::CFloating > eSuperTypes;
	typedef boost::mpl::list< ::C::CClassifier,
	                          ::C::CDataType,
	                          ::C::CFloating > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list<  > eAllStructuralFeatures;
};

template < >
struct name< ::C::CFloat >
{
	static const char * get()
	{
		return "CFloat";
	}
};


template < >
struct eclass< ::C::CLongDouble >
{
	typedef boost::mpl::list< ::C::CFloating > eSuperTypes;
	typedef boost::mpl::list< ::C::CClassifier,
	                          ::C::CDataType,
	                          ::C::CFloating > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list<  > eAllStructuralFeatures;
};

template < >
struct name< ::C::CLongDouble >
{
	static const char * get()
	{
		return "CLongDouble";
	}
};


template < >
struct eclass< ::C::CUnsignedInt >
{
	typedef boost::mpl::list< ::C::CInt > eSuperTypes;
	typedef boost::mpl::list< ::C::CClassifier,
	                          ::C::CDataType,
	                          ::C::CIntegral,
	                          ::C::CInt > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list<  > eAllStructuralFeatures;
};

template < >
struct name< ::C::CUnsignedInt >
{
	static const char * get()
	{
		return "CUnsignedInt";
	}
};


template < >
struct eclass< ::C::CLong >
{
	typedef boost::mpl::list< ::C::CInt > eSuperTypes;
	typedef boost::mpl::list< ::C::CClassifier,
	                          ::C::CDataType,
	                          ::C::CIntegral,
	                          ::C::CInt > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list<  > eAllStructuralFeatures;
};

template < >
struct name< ::C::CLong >
{
	static const char * get()
	{
		return "CLong";
	}
};


template < >
struct eclass< ::C::CLongLong >
{
	typedef boost::mpl::list< ::C::CInt > eSuperTypes;
	typedef boost::mpl::list< ::C::CClassifier,
	                          ::C::CDataType,
	                          ::C::CIntegral,
	                          ::C::CInt > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list<  > eAllStructuralFeatures;
};

template < >
struct name< ::C::CLongLong >
{
	static const char * get()
	{
		return "CLongLong";
	}
};


template < >
struct eclass< ::C::CShort >
{
	typedef boost::mpl::list< ::C::CInt > eSuperTypes;
	typedef boost::mpl::list< ::C::CClassifier,
	                          ::C::CDataType,
	                          ::C::CIntegral,
	                          ::C::CInt > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list<  > eAllStructuralFeatures;
};

template < >
struct name< ::C::CShort >
{
	static const char * get()
	{
		return "CShort";
	}
};


template < >
struct eclass< ::C::CSignedChar >
{
	typedef boost::mpl::list< ::C::CChar > eSuperTypes;
	typedef boost::mpl::list< ::C::CClassifier,
	                          ::C::CDataType,
	                          ::C::CIntegral,
	                          ::C::CChar > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list<  > eAllStructuralFeatures;
};

template < >
struct name< ::C::CSignedChar >
{
	static const char * get()
	{
		return "CSignedChar";
	}
};


template < >
struct eclass< ::C::CUnsignedChar >
{
	typedef boost::mpl::list< ::C::CChar > eSuperTypes;
	typedef boost::mpl::list< ::C::CClassifier,
	                          ::C::CDataType,
	                          ::C::CIntegral,
	                          ::C::CChar > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list<  > eAllStructuralFeatures;
};

template < >
struct name< ::C::CUnsignedChar >
{
	static const char * get()
	{
		return "CUnsignedChar";
	}
};


template < >
struct eclass< ::C::CWChar >
{
	typedef boost::mpl::list< ::C::CChar > eSuperTypes;
	typedef boost::mpl::list< ::C::CClassifier,
	                          ::C::CDataType,
	                          ::C::CIntegral,
	                          ::C::CChar > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list<  > eAllStructuralFeatures;
};

template < >
struct name< ::C::CWChar >
{
	static const char * get()
	{
		return "CWChar";
	}
};


template < >
struct eclass< ::C::UnsignedLong >
{
	typedef boost::mpl::list< ::C::CUnsignedInt > eSuperTypes;
	typedef boost::mpl::list< ::C::CClassifier,
	                          ::C::CDataType,
	                          ::C::CIntegral,
	                          ::C::CInt,
	                          ::C::CUnsignedInt > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list<  > eAllStructuralFeatures;
};

template < >
struct name< ::C::UnsignedLong >
{
	static const char * get()
	{
		return "UnsignedLong";
	}
};


template < >
struct eclass< ::C::UnsignedLongLong >
{
	typedef boost::mpl::list< ::C::CUnsignedInt > eSuperTypes;
	typedef boost::mpl::list< ::C::CClassifier,
	                          ::C::CDataType,
	                          ::C::CIntegral,
	                          ::C::CInt,
	                          ::C::CUnsignedInt > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list<  > eAllStructuralFeatures;
};

template < >
struct name< ::C::UnsignedLongLong >
{
	static const char * get()
	{
		return "UnsignedLongLong";
	}
};


template < >
struct eclass< ::C::UnsignedShort >
{
	typedef boost::mpl::list< ::C::CUnsignedInt > eSuperTypes;
	typedef boost::mpl::list< ::C::CClassifier,
	                          ::C::CDataType,
	                          ::C::CIntegral,
	                          ::C::CInt,
	                          ::C::CUnsignedInt > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list<  > eAllStructuralFeatures;
};

template < >
struct name< ::C::UnsignedShort >
{
	static const char * get()
	{
		return "UnsignedShort";
	}
};


template < >
struct eclass< ::C::CClassifier >
{
	typedef boost::mpl::list<  > eSuperTypes;
	typedef boost::mpl::list<  > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list<  > eAllStructuralFeatures;
};

template < >
struct name< ::C::CClassifier >
{
	static const char * get()
	{
		return "CClassifier";
	}
};


template < >
struct eclass< ::C::Derived >
{
	typedef boost::mpl::list< ::C::CClassifier > eSuperTypes;
	typedef boost::mpl::list< ::C::CClassifier > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list<  > eAllStructuralFeatures;
};

template < >
struct name< ::C::Derived >
{
	static const char * get()
	{
		return "Derived";
	}
};


template < >
struct eclass< ::C::CStructureContents >
{
	typedef boost::mpl::list<  > eSuperTypes;
	typedef boost::mpl::list<  > eAllSuperTypes;
	typedef boost::mpl::list< ::C::CStructureContents__sc_container_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::C::CStructureContents__sc_container_tag > eAllStructuralFeatures;
};

template < >
struct name< ::C::CStructureContents >
{
	static const char * get()
	{
		return "CStructureContents";
	}
};


template < >
struct name< ::C::CStructureContents__sc_container_tag >
{
	static const char * get()
	{
		return "sc_container";
	}
};


template < >
struct eclass< ::C::CStructured >
{
	typedef boost::mpl::list< ::C::CClassifier,
	                          ::C::CStructureContents > eSuperTypes;
	typedef boost::mpl::list< ::C::CClassifier,
	                          ::C::CStructureContents > eAllSuperTypes;
	typedef boost::mpl::list< ::C::CStructured__contains_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::C::CStructureContents__sc_container_tag,
	                          ::C::CStructured__contains_tag > eAllStructuralFeatures;
};

template < >
struct name< ::C::CStructured >
{
	static const char * get()
	{
		return "CStructured";
	}
};


template < >
struct name< ::C::CStructured__contains_tag >
{
	static const char * get()
	{
		return "contains";
	}
};


template < >
struct eclass< ::C::CStruct >
{
	typedef boost::mpl::list< ::C::CStructured > eSuperTypes;
	typedef boost::mpl::list< ::C::CClassifier,
	                          ::C::CStructureContents,
	                          ::C::CStructured > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::C::CStructureContents__sc_container_tag,
	                          ::C::CStructured__contains_tag > eAllStructuralFeatures;
};

template < >
struct name< ::C::CStruct >
{
	static const char * get()
	{
		return "CStruct";
	}
};


template < >
struct eclass< ::C::CUnion >
{
	typedef boost::mpl::list< ::C::CStructured > eSuperTypes;
	typedef boost::mpl::list< ::C::CClassifier,
	                          ::C::CStructureContents,
	                          ::C::CStructured > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::C::CStructureContents__sc_container_tag,
	                          ::C::CStructured__contains_tag > eAllStructuralFeatures;
};

template < >
struct name< ::C::CUnion >
{
	static const char * get()
	{
		return "CUnion";
	}
};


template < >
struct eclass< ::C::CSourceText >
{
	typedef boost::mpl::list<  > eSuperTypes;
	typedef boost::mpl::list<  > eAllSuperTypes;
	typedef boost::mpl::list< ::C::CSourceText__source_tag,
	                          ::C::CSourceText__fileName_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::C::CSourceText__source_tag,
	                          ::C::CSourceText__fileName_tag > eAllStructuralFeatures;
};

template < >
struct name< ::C::CSourceText >
{
	static const char * get()
	{
		return "CSourceText";
	}
};


template < >
struct name< ::C::CSourceText__source_tag >
{
	static const char * get()
	{
		return "source";
	}
};


template < >
struct name< ::C::CSourceText__fileName_tag >
{
	static const char * get()
	{
		return "fileName";
	}
};


template < >
struct eclass< ::C::CTypedElement >
{
	typedef boost::mpl::list<  > eSuperTypes;
	typedef boost::mpl::list<  > eAllSuperTypes;
	typedef boost::mpl::list< ::C::CTypedElement__type_tag,
	                          ::C::CTypedElement__source_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::C::CTypedElement__type_tag,
	                          ::C::CTypedElement__source_tag > eAllStructuralFeatures;
};

template < >
struct name< ::C::CTypedElement >
{
	static const char * get()
	{
		return "CTypedElement";
	}
};


template < >
struct name< ::C::CTypedElement__type_tag >
{
	static const char * get()
	{
		return "type";
	}
};


template < >
struct name< ::C::CTypedElement__source_tag >
{
	static const char * get()
	{
		return "source";
	}
};


template < >
struct eclass< ::C::CStructuralFeature >
{
	typedef boost::mpl::list< ::C::CStructureContents,
	                          ::C::CTypedElement > eSuperTypes;
	typedef boost::mpl::list< ::C::CStructureContents,
	                          ::C::CTypedElement > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::C::CStructureContents__sc_container_tag,
	                          ::C::CTypedElement__type_tag,
	                          ::C::CTypedElement__source_tag > eAllStructuralFeatures;
};

template < >
struct name< ::C::CStructuralFeature >
{
	static const char * get()
	{
		return "CStructuralFeature";
	}
};


template < >
struct eclass< ::C::CField >
{
	typedef boost::mpl::list< ::C::CStructuralFeature > eSuperTypes;
	typedef boost::mpl::list< ::C::CStructureContents,
	                          ::C::CTypedElement,
	                          ::C::CStructuralFeature > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::C::CStructureContents__sc_container_tag,
	                          ::C::CTypedElement__type_tag,
	                          ::C::CTypedElement__source_tag > eAllStructuralFeatures;
};

template < >
struct name< ::C::CField >
{
	static const char * get()
	{
		return "CField";
	}
};


template < >
struct eclass< ::C::CParameter >
{
	typedef boost::mpl::list< ::C::CTypedElement > eSuperTypes;
	typedef boost::mpl::list< ::C::CTypedElement > eAllSuperTypes;
	typedef boost::mpl::list< ::C::CParameter__behavioralFeature_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::C::CTypedElement__type_tag,
	                          ::C::CTypedElement__source_tag,
	                          ::C::CParameter__behavioralFeature_tag > eAllStructuralFeatures;
};

template < >
struct name< ::C::CParameter >
{
	static const char * get()
	{
		return "CParameter";
	}
};


template < >
struct name< ::C::CParameter__behavioralFeature_tag >
{
	static const char * get()
	{
		return "behavioralFeature";
	}
};


template < >
struct eclass< ::C::BehavioralFeature >
{
	typedef boost::mpl::list<  > eSuperTypes;
	typedef boost::mpl::list<  > eAllSuperTypes;
	typedef boost::mpl::list< ::C::BehavioralFeature__parameters_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::C::BehavioralFeature__parameters_tag > eAllStructuralFeatures;
};

template < >
struct name< ::C::BehavioralFeature >
{
	static const char * get()
	{
		return "BehavioralFeature";
	}
};


template < >
struct name< ::C::BehavioralFeature__parameters_tag >
{
	static const char * get()
	{
		return "parameters";
	}
};


template < >
struct eclass< ::C::CFunction >
{
	typedef boost::mpl::list< ::C::BehavioralFeature > eSuperTypes;
	typedef boost::mpl::list< ::C::BehavioralFeature > eAllSuperTypes;
	typedef boost::mpl::list< ::C::CFunction__isVarArg_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::C::BehavioralFeature__parameters_tag,
	                          ::C::CFunction__isVarArg_tag > eAllStructuralFeatures;
};

template < >
struct name< ::C::CFunction >
{
	static const char * get()
	{
		return "CFunction";
	}
};


template < >
struct name< ::C::CFunction__isVarArg_tag >
{
	static const char * get()
	{
		return "isVarArg";
	}
};



} // namespace definition
} // namespace e4c

#endif // EMF_CPP_C_Meta_HPP
