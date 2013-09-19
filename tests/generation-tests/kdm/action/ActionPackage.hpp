#ifndef EMF_CPP_KDM_ACTION_PACKAGE_HPP
#define EMF_CPP_KDM_ACTION_PACKAGE_HPP

#include <e4c/tag.hpp>
#include <ecore/EPackage.hpp>
#include <kdm/action/fwd.hpp>

namespace kdm
{
namespace action
{


class ActionPackage : public ::ecore::EPackage
{
public:
    static const ActionPackage_ptr _instance();
 
 	// Classifiers
 	e4c::tag_t getTag_ActionElement() const;
 	e4c::tag_t getTag_AbstractActionRelationship() const;
 	e4c::tag_t getTag_ControlFlow() const;
 	e4c::tag_t getTag_Calls() const;
 	e4c::tag_t getTag_Creates() const;
 	e4c::tag_t getTag_Reads() const;
 	e4c::tag_t getTag_Writes() const;
 	e4c::tag_t getTag_CompliesTo() const;
 	e4c::tag_t getTag_Flow() const;
 	e4c::tag_t getTag_TrueFlow() const;
 	e4c::tag_t getTag_FalseFlow() const;
 	e4c::tag_t getTag_GuardedFlow() const;
 	e4c::tag_t getTag_UsesType() const;
 	e4c::tag_t getTag_Addresses() const;
 	e4c::tag_t getTag_ActionRelationship() const;
 	e4c::tag_t getTag_Throws() const;
 	e4c::tag_t getTag_Dispatches() const;
 	e4c::tag_t getTag_EntryFlow() const;
 	e4c::tag_t getTag_BlockUnit() const;
 	e4c::tag_t getTag_ExceptionUnit() const;
 	e4c::tag_t getTag_TryUnit() const;
 	e4c::tag_t getTag_FinallyUnit() const;
 	e4c::tag_t getTag_CatchUnit() const;
 	e4c::tag_t getTag_ExitFlow() const;
 	e4c::tag_t getTag_ExceptionFlow() const;
 
 	// Structural features
 	e4c::tag_t getTag_ActionElement__kind() const;
 	e4c::tag_t getTag_ActionElement__codeElement() const;
 	e4c::tag_t getTag_ActionElement__actionRelation() const;
 	e4c::tag_t getTag_ControlFlow__to() const;
 	e4c::tag_t getTag_ControlFlow__from() const;
 	e4c::tag_t getTag_Calls__to() const;
 	e4c::tag_t getTag_Calls__from() const;
 	e4c::tag_t getTag_Creates__to() const;
 	e4c::tag_t getTag_Creates__from() const;
 	e4c::tag_t getTag_Reads__to() const;
 	e4c::tag_t getTag_Reads__from() const;
 	e4c::tag_t getTag_Writes__to() const;
 	e4c::tag_t getTag_Writes__from() const;
 	e4c::tag_t getTag_CompliesTo__to() const;
 	e4c::tag_t getTag_CompliesTo__from() const;
 	e4c::tag_t getTag_UsesType__to() const;
 	e4c::tag_t getTag_UsesType__from() const;
 	e4c::tag_t getTag_Addresses__to() const;
 	e4c::tag_t getTag_Addresses__from() const;
 	e4c::tag_t getTag_ActionRelationship__to() const;
 	e4c::tag_t getTag_ActionRelationship__from() const;
 	e4c::tag_t getTag_Throws__to() const;
 	e4c::tag_t getTag_Throws__from() const;
 	e4c::tag_t getTag_Dispatches__to() const;
 	e4c::tag_t getTag_Dispatches__from() const;
 	e4c::tag_t getTag_EntryFlow__to() const;
 	e4c::tag_t getTag_EntryFlow__from() const;
 	e4c::tag_t getTag_ExitFlow__to() const;
 	e4c::tag_t getTag_ExitFlow__from() const;
 	e4c::tag_t getTag_ExceptionFlow__to() const;
 	e4c::tag_t getTag_ExceptionFlow__from() const;

protected:
    ActionPackage();
};

} // action
} // kdm


#endif // EMF_CPP_KDM_ACTION_PACKAGE_HPP
