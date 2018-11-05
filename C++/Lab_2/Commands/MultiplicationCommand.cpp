//
// Created by Bayramov Nidjat on 04.11.18.
//

#include "MultiplicationCommand.h"

#include "../CommandFactory.h"
#include "../CommandCreators/MultiplicationCommandCreator.h"
#include "../StackCalculator.h"

//Initialize the command before running main
//Anonymous namespace
namespace {
    //Global function
    bool initializeMultiplicationCommand() {
        CommandFactory::getInstance().registerCommand("*", new MultiplicationCommandCreator());
        return true;
    }
    //Calling the global function
    bool state = initializeMultiplicationCommand();
}

void MultiplicationCommand::execute(std::vector<std::string>) {
    double argument_1 = StackCalculator::stack.top();
    StackCalculator::stack.pop();

    double argument_2 = StackCalculator::stack.top();
    StackCalculator::stack.pop();

    StackCalculator::stack.push(argument_1 * argument_2);
}