#ifndef EMF_CPP_KDM_ACTION_PACKAGE_HPP
#define EMF_CPP_KDM_ACTION_PACKAGE_HPP

#include <emf4cpp2/tag.hpp>
#include <ecore/EPackage.hpp>
#include <kdm/action/fwd.hpp>

namespace kdm
{
namespace action
{


class ActionPackage : public ::ecore::EPackage
{
public:
    static ActionPackage_ptr _instance();
 
 	// Classifiers
 	e4c::tag_t getTag_ActionElement();
 	e4c::tag_t getTag_AbstractActionRelationship();
 	e4c::tag_t getTag_ControlFlow();
 	e4c::tag_t getTag_Calls();
 	e4c::tag_t getTag_Creates();
 	e4c::tag_t getTag_Reads();
 	e4c::tag_t getTag_Writes();
 	e4c::tag_t getTag_CompliesTo();
 	e4c::tag_t getTag_Flow();
 	e4c::tag_t getTag_TrueFlow();
 	e4c::tag_t getTag_FalseFlow();
 	e4c::tag_t getTag_GuardedFlow();
 	e4c::tag_t getTag_UsesType();
 	e4c::tag_t getTag_Addresses();
 	e4c::tag_t getTag_ActionRelationship();
 	e4c::tag_t getTag_Throws();
 	e4c::tag_t getTag_Dispatches();
 	e4c::tag_t getTag_EntryFlow();
 	e4c::tag_t getTag_BlockUnit();
 	e4c::tag_t getTag_ExceptionUnit();
 	e4c::tag_t getTag_TryUnit();
 	e4c::tag_t getTag_FinallyUnit();
 	e4c::tag_t getTag_CatchUnit();
 	e4c::tag_t getTag_ExitFlow();
 	e4c::tag_t getTag_ExceptionFlow();
 
 	// Structural features
 	e4c::tag_t getTag_ActionElement__kind();
 	e4c::tag_t getTag_ActionElement__codeElement();
 	e4c::tag_t getTag_ActionElement__actionRelation();
 	e4c::tag_t getTag_ControlFlow__to();
 	e4c::tag_t getTag_ControlFlow__from();
 	e4c::tag_t getTag_Calls__to();
 	e4c::tag_t getTag_Calls__from();
 	e4c::tag_t getTag_Creates__to();
 	e4c::tag_t getTag_Creates__from();
 	e4c::tag_t getTag_Reads__to();
 	e4c::tag_t getTag_Reads__from();
 	e4c::tag_t getTag_Writes__to();
 	e4c::tag_t getTag_Writes__from();
 	e4c::tag_t getTag_CompliesTo__to();
 	e4c::tag_t getTag_CompliesTo__from();
 	e4c::tag_t getTag_UsesType__to();
 	e4c::tag_t getTag_UsesType__from();
 	e4c::tag_t getTag_Addresses__to();
 	e4c::tag_t getTag_Addresses__from();
 	e4c::tag_t getTag_ActionRelationship__to();
 	e4c::tag_t getTag_ActionRelationship__from();
 	e4c::tag_t getTag_Throws__to();
 	e4c::tag_t getTag_Throws__from();
 	e4c::tag_t getTag_Dispatches__to();
 	e4c::tag_t getTag_Dispatches__from();
 	e4c::tag_t getTag_EntryFlow__to();
 	e4c::tag_t getTag_EntryFlow__from();
 	e4c::tag_t getTag_ExitFlow__to();
 	e4c::tag_t getTag_ExitFlow__from();
 	e4c::tag_t getTag_ExceptionFlow__to();
 	e4c::tag_t getTag_ExceptionFlow__from();

protected:
    ActionPackage();
};

} // action
} // kdm


#endif // EMF_CPP_KDM_ACTION_PACKAGE_HPP
