#ifndef EMF_CPP_KDM_ACTION_FWD_HPP
#define EMF_CPP_KDM_ACTION_FWD_HPP


#include <e4c/mapping.hpp>

namespace kdm
{
namespace action
{


class ActionPackage;
typedef ActionPackage * ActionPackage_ptr;
class ActionFactory;
typedef ActionFactory * ActionFactory_ptr;

// Data types


// Classes
class ActionElement;
typedef ActionElement* ActionElement_ptr;
class AbstractActionRelationship;
typedef AbstractActionRelationship* AbstractActionRelationship_ptr;
class ControlFlow;
typedef ControlFlow* ControlFlow_ptr;
class Calls;
typedef Calls* Calls_ptr;
class Creates;
typedef Creates* Creates_ptr;
class Reads;
typedef Reads* Reads_ptr;
class Writes;
typedef Writes* Writes_ptr;
class CompliesTo;
typedef CompliesTo* CompliesTo_ptr;
class Flow;
typedef Flow* Flow_ptr;
class TrueFlow;
typedef TrueFlow* TrueFlow_ptr;
class FalseFlow;
typedef FalseFlow* FalseFlow_ptr;
class GuardedFlow;
typedef GuardedFlow* GuardedFlow_ptr;
class UsesType;
typedef UsesType* UsesType_ptr;
class Addresses;
typedef Addresses* Addresses_ptr;
class ActionRelationship;
typedef ActionRelationship* ActionRelationship_ptr;
class Throws;
typedef Throws* Throws_ptr;
class Dispatches;
typedef Dispatches* Dispatches_ptr;
class EntryFlow;
typedef EntryFlow* EntryFlow_ptr;
class BlockUnit;
typedef BlockUnit* BlockUnit_ptr;
class ExceptionUnit;
typedef ExceptionUnit* ExceptionUnit_ptr;
class TryUnit;
typedef TryUnit* TryUnit_ptr;
class FinallyUnit;
typedef FinallyUnit* FinallyUnit_ptr;
class CatchUnit;
typedef CatchUnit* CatchUnit_ptr;
class ExitFlow;
typedef ExitFlow* ExitFlow_ptr;
class ExceptionFlow;
typedef ExceptionFlow* ExceptionFlow_ptr;


// Structural features
struct ActionElement__kind_tag;
struct ActionElement__codeElement_tag;
struct ActionElement__actionRelation_tag;
struct ControlFlow__to_tag;
struct ControlFlow__from_tag;
struct Calls__to_tag;
struct Calls__from_tag;
struct Creates__to_tag;
struct Creates__from_tag;
struct Reads__to_tag;
struct Reads__from_tag;
struct Writes__to_tag;
struct Writes__from_tag;
struct CompliesTo__to_tag;
struct CompliesTo__from_tag;
struct UsesType__to_tag;
struct UsesType__from_tag;
struct Addresses__to_tag;
struct Addresses__from_tag;
struct ActionRelationship__to_tag;
struct ActionRelationship__from_tag;
struct Throws__to_tag;
struct Throws__from_tag;
struct Dispatches__to_tag;
struct Dispatches__from_tag;
struct EntryFlow__to_tag;
struct EntryFlow__from_tag;
struct ExitFlow__to_tag;
struct ExitFlow__from_tag;
struct ExceptionFlow__to_tag;
struct ExceptionFlow__from_tag;


} // action
} // kdm


#endif // EMF_CPP_KDM_ACTION_FWD_HPP
