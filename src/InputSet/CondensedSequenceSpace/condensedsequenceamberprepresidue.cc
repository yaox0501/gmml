#include "../../../includes/InputSet/CondensedSequenceSpace/condensedsequenceamberprepresidue.hpp"
#include "../../../includes/InputSet/CondensedSequenceSpace/condensedsequenceprocessingexception.hpp"
#include "../../../includes/common.hpp"
#include "../../../includes/utils.hpp"

using namespace std;
using namespace gmml;
using namespace CondensedSequenceSpace;

//////////////////////////////////////////////////////////
//                       CONSTRUCTOR                    //
//////////////////////////////////////////////////////////
CondensedSequenceAmberPrepResidue::CondensedSequenceAmberPrepResidue(){}

CondensedSequenceAmberPrepResidue::CondensedSequenceAmberPrepResidue(string name) : name_(name), parent_id_(-1), is_derivative_(false) {} //has_parent_(false){}

CondensedSequenceAmberPrepResidue::CondensedSequenceAmberPrepResidue(string name, string anomeric_carbon, string parent_oxygen, bool is_derivative) :
    name_(name), anomeric_carbon_(anomeric_carbon), parent_oxygen_(parent_oxygen), parent_id_(0), is_derivative_(is_derivative) {}

//////////////////////////////////////////////////////////
//                         ACCESSOR                     //
//////////////////////////////////////////////////////////
string CondensedSequenceAmberPrepResidue::GetName()
{
    return name_;
}

string CondensedSequenceAmberPrepResidue::GetAnomericCarbon()
{
    return anomeric_carbon_;
}

string CondensedSequenceAmberPrepResidue::GetParentOxygen()
{
    return parent_oxygen_;
}

bool CondensedSequenceAmberPrepResidue::GetIsDerivative()
{
    return is_derivative_;
}

int CondensedSequenceAmberPrepResidue::GetParentId()
{
    return parent_id_;
}

//////////////////////////////////////////////////////////
//                          MUTATOR                     //
//////////////////////////////////////////////////////////
void CondensedSequenceAmberPrepResidue::SetName(string name)
{
    name_ = name;
}

void CondensedSequenceAmberPrepResidue::SetAnomericCarbon(string anomeric_carbon)
{
    anomeric_carbon_ = anomeric_carbon;
}

void CondensedSequenceAmberPrepResidue::SetParentOxygen(string parent_oxygen)
{
    parent_oxygen_ = parent_oxygen;
}

void CondensedSequenceAmberPrepResidue::SetIsDerivative(bool is_derivative)
{
    is_derivative_ = is_derivative;
}

void CondensedSequenceAmberPrepResidue::SetParentId(int parent_id)
{
    parent_id_ = parent_id;
}

//////////////////////////////////////////////////////////
//                        FUNCTIONS                     //
//////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////
//                      DISPLAY FUNCTION                //
//////////////////////////////////////////////////////////
void CondensedSequenceAmberPrepResidue::Print(ostream &out)
{}






