#ifndef EMF_CPP_KDM_ACTION_PACKAGE_HPP
#define EMF_CPP_KDM_ACTION_PACKAGE_HPP

#include <e4c/tag.hpp>
#include <ecore/EPackage.hpp>
#include <kdm/action/fwd.hpp>
#include <e4c/detail/holder.ipp>

namespace kdm
{
namespace action
{


class ActionPackage : public ::ecore::EPackage
{
public:
    static const ActionPackage_ptr _instance();

 	::ecore::EClass_ptr getActionElement() const;
 	::ecore::EClass_ptr getAbstractActionRelationship() const;
 	::ecore::EClass_ptr getControlFlow() const;
 	::ecore::EClass_ptr getCalls() const;
 	::ecore::EClass_ptr getCreates() const;
 	::ecore::EClass_ptr getReads() const;
 	::ecore::EClass_ptr getWrites() const;
 	::ecore::EClass_ptr getCompliesTo() const;
 	::ecore::EClass_ptr getFlow() const;
 	::ecore::EClass_ptr getTrueFlow() const;
 	::ecore::EClass_ptr getFalseFlow() const;
 	::ecore::EClass_ptr getGuardedFlow() const;
 	::ecore::EClass_ptr getUsesType() const;
 	::ecore::EClass_ptr getAddresses() const;
 	::ecore::EClass_ptr getActionRelationship() const;
 	::ecore::EClass_ptr getThrows() const;
 	::ecore::EClass_ptr getDispatches() const;
 	::ecore::EClass_ptr getEntryFlow() const;
 	::ecore::EClass_ptr getBlockUnit() const;
 	::ecore::EClass_ptr getExceptionUnit() const;
 	::ecore::EClass_ptr getTryUnit() const;
 	::ecore::EClass_ptr getFinallyUnit() const;
 	::ecore::EClass_ptr getCatchUnit() const;
 	::ecore::EClass_ptr getExitFlow() const;
 	::ecore::EClass_ptr getExceptionFlow() const;
 	
 	::ecore::EAttribute_ptr getActionElement__kind() const;
 	::ecore::EReference_ptr getActionElement__codeElement() const;
 	::ecore::EReference_ptr getActionElement__actionRelation() const;
 	::ecore::EReference_ptr getControlFlow__to() const;
 	::ecore::EReference_ptr getControlFlow__from() const;
 	::ecore::EReference_ptr getCalls__to() const;
 	::ecore::EReference_ptr getCalls__from() const;
 	::ecore::EReference_ptr getCreates__to() const;
 	::ecore::EReference_ptr getCreates__from() const;
 	::ecore::EReference_ptr getReads__to() const;
 	::ecore::EReference_ptr getReads__from() const;
 	::ecore::EReference_ptr getWrites__to() const;
 	::ecore::EReference_ptr getWrites__from() const;
 	::ecore::EReference_ptr getCompliesTo__to() const;
 	::ecore::EReference_ptr getCompliesTo__from() const;
 	::ecore::EReference_ptr getUsesType__to() const;
 	::ecore::EReference_ptr getUsesType__from() const;
 	::ecore::EReference_ptr getAddresses__to() const;
 	::ecore::EReference_ptr getAddresses__from() const;
 	::ecore::EReference_ptr getActionRelationship__to() const;
 	::ecore::EReference_ptr getActionRelationship__from() const;
 	::ecore::EReference_ptr getThrows__to() const;
 	::ecore::EReference_ptr getThrows__from() const;
 	::ecore::EReference_ptr getDispatches__to() const;
 	::ecore::EReference_ptr getDispatches__from() const;
 	::ecore::EReference_ptr getEntryFlow__to() const;
 	::ecore::EReference_ptr getEntryFlow__from() const;
 	::ecore::EReference_ptr getExitFlow__to() const;
 	::ecore::EReference_ptr getExitFlow__from() const;
 	::ecore::EReference_ptr getExceptionFlow__to() const;
 	::ecore::EReference_ptr getExceptionFlow__from() const;

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
    
 	::ecore::EClass_ptr m_ActionElement;
 	::ecore::EClass_ptr m_AbstractActionRelationship;
 	::ecore::EClass_ptr m_ControlFlow;
 	::ecore::EClass_ptr m_Calls;
 	::ecore::EClass_ptr m_Creates;
 	::ecore::EClass_ptr m_Reads;
 	::ecore::EClass_ptr m_Writes;
 	::ecore::EClass_ptr m_CompliesTo;
 	::ecore::EClass_ptr m_Flow;
 	::ecore::EClass_ptr m_TrueFlow;
 	::ecore::EClass_ptr m_FalseFlow;
 	::ecore::EClass_ptr m_GuardedFlow;
 	::ecore::EClass_ptr m_UsesType;
 	::ecore::EClass_ptr m_Addresses;
 	::ecore::EClass_ptr m_ActionRelationship;
 	::ecore::EClass_ptr m_Throws;
 	::ecore::EClass_ptr m_Dispatches;
 	::ecore::EClass_ptr m_EntryFlow;
 	::ecore::EClass_ptr m_BlockUnit;
 	::ecore::EClass_ptr m_ExceptionUnit;
 	::ecore::EClass_ptr m_TryUnit;
 	::ecore::EClass_ptr m_FinallyUnit;
 	::ecore::EClass_ptr m_CatchUnit;
 	::ecore::EClass_ptr m_ExitFlow;
 	::ecore::EClass_ptr m_ExceptionFlow;
 	::ecore::EAttribute_ptr m_ActionElement__kind;
 	::ecore::EReference_ptr m_ActionElement__codeElement;
 	::ecore::EReference_ptr m_ActionElement__actionRelation;
 	::ecore::EReference_ptr m_ControlFlow__to;
 	::ecore::EReference_ptr m_ControlFlow__from;
 	::ecore::EReference_ptr m_Calls__to;
 	::ecore::EReference_ptr m_Calls__from;
 	::ecore::EReference_ptr m_Creates__to;
 	::ecore::EReference_ptr m_Creates__from;
 	::ecore::EReference_ptr m_Reads__to;
 	::ecore::EReference_ptr m_Reads__from;
 	::ecore::EReference_ptr m_Writes__to;
 	::ecore::EReference_ptr m_Writes__from;
 	::ecore::EReference_ptr m_CompliesTo__to;
 	::ecore::EReference_ptr m_CompliesTo__from;
 	::ecore::EReference_ptr m_UsesType__to;
 	::ecore::EReference_ptr m_UsesType__from;
 	::ecore::EReference_ptr m_Addresses__to;
 	::ecore::EReference_ptr m_Addresses__from;
 	::ecore::EReference_ptr m_ActionRelationship__to;
 	::ecore::EReference_ptr m_ActionRelationship__from;
 	::ecore::EReference_ptr m_Throws__to;
 	::ecore::EReference_ptr m_Throws__from;
 	::ecore::EReference_ptr m_Dispatches__to;
 	::ecore::EReference_ptr m_Dispatches__from;
 	::ecore::EReference_ptr m_EntryFlow__to;
 	::ecore::EReference_ptr m_EntryFlow__from;
 	::ecore::EReference_ptr m_ExitFlow__to;
 	::ecore::EReference_ptr m_ExitFlow__from;
 	::ecore::EReference_ptr m_ExceptionFlow__to;
 	::ecore::EReference_ptr m_ExceptionFlow__from;
};

} // action
} // kdm


#endif // EMF_CPP_KDM_ACTION_PACKAGE_HPP
