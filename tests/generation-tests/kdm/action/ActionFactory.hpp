#ifndef EMF_CPP_KDM_ACTION_FACTORY_HPP
#define EMF_CPP_KDM_ACTION_FACTORY_HPP

#include <ecore/EFactory.hpp>
#include <kdm/action/fwd.hpp>

namespace kdm
{
namespace action
{


class ActionFactory : public ::ecore::EFactory
{
public:

    static const ActionFactory_ptr _instance();

    ActionElement_ptr createActionElement() const;
    ControlFlow_ptr createControlFlow() const;
    Calls_ptr createCalls() const;
    Creates_ptr createCreates() const;
    Reads_ptr createReads() const;
    Writes_ptr createWrites() const;
    CompliesTo_ptr createCompliesTo() const;
    Flow_ptr createFlow() const;
    TrueFlow_ptr createTrueFlow() const;
    FalseFlow_ptr createFalseFlow() const;
    GuardedFlow_ptr createGuardedFlow() const;
    UsesType_ptr createUsesType() const;
    Addresses_ptr createAddresses() const;
    ActionRelationship_ptr createActionRelationship() const;
    Throws_ptr createThrows() const;
    Dispatches_ptr createDispatches() const;
    EntryFlow_ptr createEntryFlow() const;
    BlockUnit_ptr createBlockUnit() const;
    ExceptionUnit_ptr createExceptionUnit() const;
    TryUnit_ptr createTryUnit() const;
    FinallyUnit_ptr createFinallyUnit() const;
    CatchUnit_ptr createCatchUnit() const;
    ExitFlow_ptr createExitFlow() const;
    ExceptionFlow_ptr createExceptionFlow() const;

protected:

    ActionFactory();
};

} // action
} // kdm


#endif // EMF_CPP_KDM_ACTION_FACTORY_HPP
